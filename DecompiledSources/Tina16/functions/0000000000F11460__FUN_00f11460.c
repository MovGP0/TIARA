/* Ghidra address: 00f11460 */
/* Ghidra symbol: FUN_00f11460 */


undefined4 * FUN_00f11460(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  *param_2 = **(undefined4 **)(param_1 + 0x50);
  param_2[2] = **(undefined4 **)(param_1 + 0x50);
  param_2[1] = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4);
  param_2[3] = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4);
  iVar2 = 2;
  if (1 < *(int *)(param_1 + 0x48)) {
    iVar4 = *(int *)(param_1 + 0x48) + -1;
    do {
      lVar3 = (longlong)iVar2;
      uVar1 = FUN_00b905f0(*param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + lVar3 * 8))
      ;
      *param_2 = uVar1;
      uVar1 = FUN_00b905e0(param_2[2],
                           *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + lVar3 * 8));
      param_2[2] = uVar1;
      uVar1 = FUN_00b905f0(param_2[1],
                           *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + lVar3 * 8));
      param_2[1] = uVar1;
      uVar1 = FUN_00b905e0(param_2[3],
                           *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + lVar3 * 8));
      param_2[3] = uVar1;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_2;
}

