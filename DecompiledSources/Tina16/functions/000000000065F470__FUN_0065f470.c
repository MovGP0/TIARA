/* Ghidra address: 0065f470 */
/* Ghidra symbol: FUN_0065f470 */


void FUN_0065f470(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  uVar1 = FUN_0065b870(param_1);
  local_20 = thunk_FUN_0411fe47(uVar1);
  (**(code **)(*param_1 + 0x268))(param_1,local_20);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041a9b5c(uVar1,local_20);
  return;
}

