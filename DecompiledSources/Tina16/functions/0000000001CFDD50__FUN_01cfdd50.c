/* Ghidra address: 01cfdd50 */
/* Ghidra symbol: FUN_01cfdd50 */


void FUN_01cfdd50(undefined8 param_1,longlong param_2,int param_3,undefined1 *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20 [2];
  
  if ((param_3 < 1) || ((int)(uint)*(ushort *)(param_2 + 0x21) < param_3)) {
    *param_4 = 0;
  }
  else {
    sVar2 = 0;
    iVar4 = param_3 + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        cVar1 = *(char *)(*(longlong *)(param_2 + 1) + -1 + (longlong)iVar3);
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
    *param_4 = *(undefined1 *)(*(longlong *)(param_2 + 1) + -1 + (longlong)param_3);
    local_20[0] = *(undefined8 *)(param_2 + 9);
    FUN_00b909d0(local_20,sVar2);
  }
  return;
}

