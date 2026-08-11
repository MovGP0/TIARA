/* Ghidra address: 00ac0d20 */
/* Ghidra symbol: FUN_00ac0d20 */


void FUN_00ac0d20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00a9cf10(param_1,param_2,param_3);
  iVar1 = FUN_00a55c70(param_1 + 0x1a0,0,param_3,*(undefined4 *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x48),10);
  *(int *)(param_1 + 0x478) = iVar1;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x560) + 0x58) -
          (iVar1 + *(int *)(param_1 + 0x498) + *(int *)(param_1 + 0x488));
  if (0 < iVar2) {
    *(int *)(param_1 + 0x478) = (iVar1 + iVar2) - iVar2 / 2;
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + iVar2 / 2;
  }
  return;
}

