/* Ghidra address: 01b059b0 */
/* Ghidra symbol: FUN_01b059b0 */


void FUN_01b059b0(longlong param_1,byte param_2,undefined1 *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20 [2];
  
  if ((param_2 == 0) || (*(ushort *)(param_1 + 0x21) < (ushort)param_2)) {
    *param_3 = 0;
  }
  else {
    sVar2 = 0;
    iVar4 = param_2 - 1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        cVar1 = *(char *)(*(longlong *)(param_1 + 1) + -1 + (longlong)iVar3);
        if (cVar1 == '\x01') {
          sVar2 = sVar2 + 0x1f;
        }
        else if (cVar1 == '\x02') {
          sVar2 = sVar2 + 2;
        }
        else if (cVar1 == '\x03') {
          sVar2 = sVar2 + 8;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *param_3 = *(undefined1 *)(*(longlong *)(param_1 + 1) + -1 + (ulonglong)param_2);
    local_20[0] = *(undefined8 *)(param_1 + 9);
    FUN_00b909d0(local_20,sVar2);
  }
  return;
}

