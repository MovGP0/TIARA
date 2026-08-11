/* Ghidra address: 005ff210 */
/* Ghidra symbol: FUN_005ff210 */


void FUN_005ff210(longlong *param_1,undefined8 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xd);
  thunk_FUN_03b2f3b0(param_1[0xc],param_2,param_3 + 1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

