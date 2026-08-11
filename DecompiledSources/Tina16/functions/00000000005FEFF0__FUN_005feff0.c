/* Ghidra address: 005feff0 */
/* Ghidra symbol: FUN_005feff0 */


void FUN_005feff0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xd);
  thunk_FUN_04151b0d(param_1[0xc],param_2,param_3);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

