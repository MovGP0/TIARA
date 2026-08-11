/* Ghidra address: 0064fd30 */
/* Ghidra symbol: FUN_0064fd30 */


void FUN_0064fd30(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (cVar2 == '\0') {
    if (param_1[0x21] != 0) {
      if ((char)param_1[0x20] != '\x02') {
        bVar1 = *(byte *)(param_1[0x21] + 0xad);
        if (bVar1 < 8) {
          bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1[0x21] >> 8),1) << (bVar1 & 0x1f) & 6U) !=
                  0;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
          if ((char)param_1[0x20] != '\x01') {
            bVar1 = *(byte *)(param_1[0x21] + 0xad);
            if (bVar1 < 8) {
              bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1[0x21] >> 8),1) << (bVar1 & 0x1f) &
                      0x18U) != 0;
            }
            else {
              bVar3 = false;
            }
            if (!bVar3) {
              return;
            }
          }
          *(int *)((longlong)param_1 + 0x11c) = (int)param_1[0x13];
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x9c);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)((longlong)param_1 + 0x9c);
    *(int *)((longlong)param_1 + 0x114) = (int)param_1[0x13];
  }
  return;
}

