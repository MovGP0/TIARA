/* Ghidra address: 00be09c0 */
/* Ghidra symbol: FUN_00be09c0 */


void FUN_00be09c0(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (iVar6 - 1U < 0x80000000) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)iVar3 * 0x14);
      iVar5 = *piVar1;
      if (param_2 <= iVar5) {
        return;
      }
      if ((char)piVar1[4] != '\0') {
        if (iVar5 <= iVar4) {
          iVar5 = iVar4;
        }
        iVar2 = piVar1[1];
        iVar5 = iVar2 - iVar5;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        param_2 = param_2 + iVar5;
        if (iVar4 <= iVar2) {
          iVar4 = iVar2;
        }
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

