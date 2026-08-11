/* Ghidra address: 00d00940 */
/* Ghidra symbol: FUN_00d00940 */


undefined8 FUN_00d00940(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 **local_50;
  undefined4 local_48;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_78;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_58 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_50 = &local_30;
  local_48 = 0xffffffff;
  local_28 = local_58;
  (**(code **)(*param_1 + 0x170))(param_1,L"DELETE",local_res18[0],0);
  FUN_004b6dc0(local_28,0);
  lVar2 = FUN_00d05df0(param_1);
  FUN_008b0660(param_2,local_28,*(undefined8 *)(lVar2 + 0x20));
  uVar1 = local_28;
  local_20 = local_28;
  local_28 = 0;
  FUN_00410f20(uVar1);
  FUN_00414480(local_res18);
  return param_2;
}

