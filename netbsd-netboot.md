Caviats:

* Exporting swap as a file produces this error: exportfs: /export/client/swap is not a directory. Remote access will fail

To fix, edit the nfsd service (systemctl edit --full nfs-kernel-server.service) and update references to exportfs to prepend '-' so that errors will be ignored:

ExecStartPre=-/usr/sbin/exportfs -r
ExecStopPost=-/usr/sbin/exportfs -au
ExecStopPost=-/usr/sbin/exportfs -f
ExecReload=-/usr/sbin/exportfs -r
