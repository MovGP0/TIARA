/* Ghidra address: 01ca4640 */
/* Ghidra symbol: FUN_01ca4640 */


void FUN_01ca4640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  int local_4c;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_f8;
  local_c8 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414b50(&local_58,local_res10);
  FUN_00414b50(&local_68,local_res10);
  FUN_00414b50(&local_60,local_res20);
  FUN_00415dd0(&local_88,local_58,0);
  local_d8 = 0;
  local_d0 = param_5;
  local_20 = FUN_00ee5950(local_88,0,local_50,0);
  if (local_20 != 0) {
    local_d8 = local_d8 & 0xffffffffffffff00;
    cVar1 = FUN_00ee5290(local_58,0,0,1);
    if (cVar1 != '\0') {
      local_28 = FUN_019a26a0(local_20,local_60);
      goto LAB_01ca47a0;
    }
  }
  local_28 = 0;
LAB_01ca47a0:
  if (local_28 != 0) {
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_38 = FUN_004aeac0(*(undefined8 *)(local_28 + 0x38),0);
    iVar2 = *(int *)(*(longlong *)(local_38 + 0x30) + 0x10);
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00c3d330(local_38,local_b8,(undefined2)local_4c);
        FUN_004169a0(&local_c0,local_b8);
        (**(code **)(*local_30 + 0x78))(local_30,local_c0);
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_40 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
    *(undefined1 *)(local_40 + 0x1a0) = 2;
    local_48 = (longlong *)FUN_0176c970(&PTR_FUN_01761b48,1,local_40);
    (**(code **)*local_48)(local_48,local_60);
    FUN_01768da0(local_48,local_28);
    FUN_0176ece0(local_48,local_68,0);
    (**(code **)(*(longlong *)local_48[0x18] + 0x10))((longlong *)local_48[0x18],local_30);
    FUN_00414ad0(local_48 + 10,&DAT_01ca4a58);
    (**(code **)(*local_48 + 0x10))(local_48,local_res18);
    FUN_015fca00(&local_c8,0,0);
    FUN_00416ba0(param_1 + 0x2760,local_c8,L"\\temp.tsm");
    (**(code **)(*local_48 + 0x30))(local_48,*(undefined8 *)(param_1 + 0x2760),0,*PTR_DAT_02002038);
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_01c6ec30(param_1,0x39,1,1);
  }
  FUN_00414560(&local_c8,2);
  FUN_004144d0(&local_88);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_res10,3);
  return;
}

