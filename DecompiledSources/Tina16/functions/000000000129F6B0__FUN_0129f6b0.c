/* Ghidra address: 0129f6b0 */
/* Ghidra symbol: FUN_0129f6b0 */


void FUN_0129f6b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_78;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_10 = 0;
  local_40 = FUN_0040c840(*(double *)(param_1 + 0x3a8) - 1.0);
  local_58 = 0;
  local_50 = param_1 + 0x9c0;
  local_48 = local_res10[0];
  local_38 = 1;
  local_10 = FUN_0114dc00(0,*(undefined8 *)(param_1 + 0xb0),L"<EVERYCURVE>",0);
  if (local_10 != 0) {
    FUN_01cc6020(local_10);
    FUN_0129e4d0(0,param_1,local_10);
  }
  FUN_01cc6510(*(undefined8 *)(param_1 + 0xb0));
  if (local_10 != 0) {
    FUN_01cc6030(local_10);
  }
  FUN_00414480(local_res10);
  return;
}

