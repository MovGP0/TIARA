/* Ghidra address: 00b11830 */
/* Ghidra symbol: FUN_00b11830 */


void FUN_00b11830(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    plVar2 = (longlong *)FUN_00b11070(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    *(undefined4 *)(param_1 + 0x620) = uVar1;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

