/* Ghidra address: 00683b70 */
/* Ghidra symbol: FUN_00683b70 */


void FUN_00683b70(longlong *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  if (param_1[0x58] != 0) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0418144e(uVar1,param_1[0x58]);
  }
  return;
}

