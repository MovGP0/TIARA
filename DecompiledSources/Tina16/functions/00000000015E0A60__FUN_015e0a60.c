/* Ghidra address: 015e0a60 */
/* Ghidra symbol: FUN_015e0a60 */


void FUN_015e0a60(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined1 *local_20;
  longlong *local_18;
  longlong *local_10;
  
  local_20 = auStack_58;
  FUN_015ca1c0(param_1);
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_18 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_10 + 0x78))(local_10,param_2);
  if (param_4 != 0) {
    (**(code **)(*local_18 + 0x78))(local_18,param_4);
  }
  FUN_015dce90(param_1);
  local_38 = 1;
  local_30 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  FUN_015d84a0(param_1,local_10,param_3,local_18);
  FUN_015dcfc0(param_1);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  return;
}

