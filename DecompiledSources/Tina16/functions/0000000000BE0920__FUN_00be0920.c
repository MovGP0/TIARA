/* Ghidra address: 00be0920 */
/* Ghidra symbol: FUN_00be0920 */


int FUN_00be0920(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar5 = 0;
  iVar3 = param_2;
  if (iVar7 - 1U < 0x80000000) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)iVar5 * 0x14);
      iVar4 = *piVar1;
      if (param_2 <= iVar4) {
        return iVar3;
      }
      if ((char)piVar1[4] != '\0') {
        iVar2 = piVar1[1];
        if (param_2 <= iVar2) {
          if (iVar4 <= iVar6) {
            iVar4 = iVar6;
          }
          return iVar3 - (param_2 - iVar4);
        }
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        iVar3 = iVar3 - iVar4;
        if (iVar6 <= iVar2) {
          iVar6 = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return iVar3;
}

