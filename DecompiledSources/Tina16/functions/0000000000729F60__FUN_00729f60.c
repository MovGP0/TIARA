/* Ghidra address: 00729f60 */
/* Ghidra symbol: FUN_00729f60 */


longlong FUN_00729f60(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x58))(param_1,local_20);
  if (param_1[6] != 0) {
    thunk_FUN_0398fb79(param_1[6]);
  }
  lVar1 = FUN_00726bd0(local_20[0]);
  param_1[6] = lVar1;
  FUN_00414480(local_20);
  return lVar1;
}

