/* Ghidra address: 005ff2d0 */
/* Ghidra symbol: FUN_005ff2d0 */


void FUN_005ff2d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xd);
  thunk_FUN_041cd445(param_1[0xc],param_2,param_3,param_4,param_5);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

