/* Ghidra address: 019ce6c0 */
/* Ghidra symbol: FUN_019ce6c0 */


void FUN_019ce6c0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_40 = CONCAT44(local_40._4_4_,param_2);
  local_38 = 0;
  local_30 = CONCAT44(local_30._4_4_,param_3);
  local_28 = 0;
  FUN_00442f70(&local_20,L"Config: %d of %d",&local_40,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_20);
  FUN_00414b50(&local_10,*(undefined8 *)(param_4 + 8));
  FUN_00414b50(&local_18,*(undefined8 *)(PTR_PTR_02001540 + (longlong)*(int *)(param_4 + 0xa0) * 8))
  ;
  local_40 = local_10;
  local_38 = 0x11;
  local_30 = local_18;
  local_28 = 0x11;
  FUN_00442f70(&local_48,L"Prop: model: %s, mode: %s",&local_40,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_48);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414480(&local_48);
  FUN_00414560(&local_20,3);
  return;
}

