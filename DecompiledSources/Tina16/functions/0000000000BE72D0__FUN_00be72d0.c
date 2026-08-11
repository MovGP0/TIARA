/* Ghidra address: 00be72d0 */
/* Ghidra symbol: FUN_00be72d0 */


int FUN_00be72d0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_00be7160(param_1,*(int *)(param_1 + 0x30) + param_3);
    if (param_2 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
      FUN_00be7410(param_1,param_2,param_3);
    }
    else {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    }
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 + -1) * 4);
    }
    iVar3 = param_2 + param_3 + -1;
    if (param_2 <= iVar3) {
      iVar4 = (iVar3 - param_2) + 1;
      iVar3 = param_2;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 4) = uVar1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    iVar3 = param_2 + param_3 + -1;
    if (param_2 <= iVar3) {
      iVar3 = (iVar3 - param_2) + 1;
      do {
        iVar2 = FUN_00be7500(param_1,param_2);
        iVar4 = iVar4 + iVar2;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return iVar4;
}

