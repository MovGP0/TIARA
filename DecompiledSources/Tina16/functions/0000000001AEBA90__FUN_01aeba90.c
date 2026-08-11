/* Ghidra address: 01aeba90 */
/* Ghidra symbol: FUN_01aeba90 */


void FUN_01aeba90(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_18 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x6b0) = local_18;
  FUN_0060a8f0(local_18,PTR_IMAGE_DOS_HEADER_0200c280,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

