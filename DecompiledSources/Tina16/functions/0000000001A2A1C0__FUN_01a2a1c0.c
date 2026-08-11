/* Ghidra address: 01a2a1c0 */
/* Ghidra symbol: FUN_01a2a1c0 */


void FUN_01a2a1c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  
  local_50 = auStack_c8;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x298))(*(longlong **)(param_1 + 0x6f8));
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(param_1 + 0x728);
  local_48 = *(longlong **)(param_1 + 0x6b8);
  FUN_00416ba0(&local_58,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\Converted");
  FUN_00724420(local_48,local_58);
  cVar1 = (**(code **)(*local_48 + 0xa8))(local_48);
  if (cVar1 != '\0') {
    FUN_00724270(local_48,&local_60);
    FUN_00414ad0(param_1 + 0x728,local_60);
  }
  if (*(longlong *)(param_1 + 0x728) == 0) goto code_r0x01a2a4c5;
  FUN_0147fa40(*(undefined8 *)(param_1 + 0x728),&local_30,&local_38,0);
  local_40 = FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  if (local_30 == 0) {
LAB_01a2a36d:
    local_78 = local_30;
    local_70 = 0x11;
    FUN_00442f70(&local_68,L"File not found: %s",&local_78,0);
    FUN_0072d440(local_68,1,4,0);
  }
  else {
    local_a8 = 0;
    lVar2 = FUN_014a74d0(local_30,local_40,0,0);
    if (lVar2 == 0) goto LAB_01a2a36d;
  }
  local_a8 = 1;
  FUN_00450070(&local_90,local_30,&DAT_01a2a62c,&DAT_01a2a63c);
  FUN_00441920(&local_88,local_90);
  FUN_004414c0(&local_80,local_88,L".tsc");
  FUN_00414b50(&local_30,local_80);
  FUN_01a2abe0(param_1,local_38,local_40,local_30);
  (**(code **)(*local_28 + 0x88))(local_28,*(undefined8 *)(param_1 + 0x738));
  (**(code **)(*local_28 + 0x88))(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x10));
  FUN_01a2a8d0(param_1,local_28);
  FUN_01a2a900(param_1,0);
code_r0x01a2a4c5:
  FUN_00410f20(local_28);
  FUN_00414560(&local_90,3);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,2);
  return;
}

