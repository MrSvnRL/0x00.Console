#include "ntdll.h"
#include "processutils.h"

#include <QStringList>

QList<HANDLE> findProcessHandleByImageName(const QString& process_names)
{
    QStringList names = process_names.split(';');
    QByteArray buffer(64*1024, 0);

    LONG result;
    do
    {
        ULONG newsize;
        result = NtQuerySystemInformation(SystemProcessInformation, (PVOID)buffer.data(), (ULONG)buffer.size(), &newsize);
        if(newsize > (ULONG)buffer.size())
        {
            buffer.resize((int)newsize);
        }
    }
    while(result != STATUS_SUCCESS);

    QList<HANDLE> lst;
    SYSTEM_PROCESS_INFORMATION *pi = (SYSTEM_PROCESS_INFORMATION*)buffer.data();

    while(pi != NULL)
    {
        if(names.contains(QString::fromUtf16((const ushort*)pi->ProcessName.Buffer), Qt::CaseInsensitive))
        {
            lst.append(pi->ProcessId);
        }

        if(pi->NextEntryDelta != 0)
        {
            pi = (SYSTEM_PROCESS_INFORMATION*)((BYTE*)pi + pi->NextEntryDelta);
        }
        else
        {
            pi = NULL;
        }
    }

    return lst;
}
