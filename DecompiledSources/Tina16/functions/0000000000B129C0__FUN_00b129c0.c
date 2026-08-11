/* Ghidra address: 00b129c0 */
/* Ghidra symbol: FUN_00b129c0 */


void FUN_00b129c0(longlong *param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  (**(code **)(*param_1 + 0x2d0))(param_1);
  local_38 = param_5;
  FUN_00846d00(param_1,param_2,param_3,param_4);
  FUN_00848db0(param_1);
  return;
}

