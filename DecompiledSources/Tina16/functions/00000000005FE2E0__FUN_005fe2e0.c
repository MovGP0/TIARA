/* Ghidra address: 005fe2e0 */
/* Ghidra symbol: FUN_005fe2e0 */


void FUN_005fe2e0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xd);
  thunk_FUN_041966b8(param_1[0xc],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

