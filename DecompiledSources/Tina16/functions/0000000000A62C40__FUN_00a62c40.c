/* Ghidra address: 00a62c40 */
/* Ghidra symbol: FUN_00a62c40 */


void FUN_00a62c40(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_38 = 0x4b0;
  local_10 = FUN_00a01d40(&PTR_FUN_009f2d50,1,param_1,0);
  FUN_00a62bc0(local_10,param_2);
  FUN_00410f20(local_10);
  return;
}

