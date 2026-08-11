/* Ghidra address: 0195e8b0 */
/* Ghidra symbol: FUN_0195e8b0 */


longlong * FUN_0195e8b0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0195e780(local_res8,0,param_3);
  *(byte *)(local_res8 + 0x1a) = *(byte *)(local_res8 + 0x1a) & 0xfb | 8;
  lVar2 = FUN_0195e5c0(&PTR_FUN_01924a80,1);
  local_res8[0x5f] = lVar2;
  lVar2 = FUN_0195e6d0(&PTR_FUN_01925028,1);
  local_res8[0x59] = lVar2;
  lVar2 = FUN_018066d0(&PTR_FUN_01805e80,1);
  local_res8[0x61] = lVar2;
  *(undefined2 *)((longlong)local_res8 + 0x38c) = 0x609;
  FUN_00414ad0(local_res8 + 0x5a,&LAB_0195eae0);
  local_res8[0x5c] = 0x4000000000000000;
  local_res8[0x5d] = 0x3ff0000000000000;
  *(undefined1 *)(local_res8 + 0x5e) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x341) = 0;
  local_res8[0x60] = 0x4000000000000000;
  (**(code **)(*local_res8 + 0xf0))(local_res8,1);
  FUN_0046f180(&local_38);
  FUN_00461840(local_res8 + 0x73,&local_38);
  *(undefined4 *)(local_res8 + 0x7a) = 0xffffffff;
  *(undefined4 *)((longlong)local_res8 + 0x3d4) = 0xffffffff;
  FUN_00460ba0(&local_38);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

