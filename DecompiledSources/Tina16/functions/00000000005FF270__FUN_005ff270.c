/* Ghidra address: 005ff270 */
/* Ghidra symbol: FUN_005ff270 */


void FUN_005ff270(longlong *param_1,undefined8 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xd);
  thunk_FUN_041bad38(param_1[0xc],param_2,param_3 + 1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

