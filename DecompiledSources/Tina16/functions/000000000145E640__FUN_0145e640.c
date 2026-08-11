/* Ghidra address: 0145e640 */
/* Ghidra symbol: FUN_0145e640 */


void FUN_0145e640(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe38) == 0) {
    uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0xe38) = uVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xe38) + 0x90))(*(longlong **)(param_1 + 0xe38));
  FUN_00ef4850(param_1);
  return;
}

