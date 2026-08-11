/* Ghidra address: 007d57e0 */
/* Ghidra symbol: FUN_007d57e0 */


void FUN_007d57e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1[0x14] != 0) && (*(char *)((longlong)param_1 + 0xaa) == '\0')) {
    uVar1 = FUN_007d56e0(param_1);
    thunk_FUN_04122858(uVar1);
  }
  param_1[0x14] = 0;
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}

