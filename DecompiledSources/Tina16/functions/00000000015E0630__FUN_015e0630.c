/* Ghidra address: 015e0630 */
/* Ghidra symbol: FUN_015e0630 */


void FUN_015e0630(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  
  local_30 = auStack_68;
  local_38 = 0;
  FUN_015ca1c0(param_1);
  FUN_015ca240(param_1);
  FUN_015dce90(param_1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_28 + 0x10))(local_28,*(undefined8 *)(param_1 + 0xd0));
  FUN_015c1220(&local_38,0,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*local_28 + 0x78))(local_28,local_38);
  local_48 = 0;
  local_40 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  FUN_015d84a0(param_1,*(undefined8 *)(param_1 + 200),
               *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x10),local_28);
  FUN_015dcfc0(param_1);
  FUN_00410f20(local_28);
  FUN_00414480(&local_38);
  return;
}

