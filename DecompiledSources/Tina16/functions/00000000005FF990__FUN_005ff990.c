/* Ghidra address: 005ff990 */
/* Ghidra symbol: FUN_005ff990 */


void FUN_005ff990(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,5);
  uVar1 = FUN_005fbf20(param_4);
  thunk_FUN_04124c0c(param_1[0xc],param_2,param_3,uVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

