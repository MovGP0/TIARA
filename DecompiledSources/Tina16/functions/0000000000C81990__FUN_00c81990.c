/* Ghidra address: 00c81990 */
/* Ghidra symbol: FUN_00c81990 */


longlong FUN_00c81990(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_b8;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined4 *)(local_res8 + 0x54) = param_3;
  FUN_01b1cbc0(&local_38,param_4,1);
  FUN_0043ea00(local_20,local_38);
  FUN_00414ad0(local_res8 + 0x18,local_20[0]);
  FUN_01b1cbc0(&local_48,param_4,2);
  FUN_0043ea00(&local_40,local_48);
  uVar2 = FUN_0043fc00(local_40);
  *(undefined4 *)(local_res8 + 0x50) = uVar2;
  FUN_01b1cbc0(&local_58,param_4,4);
  FUN_0043ea00(&local_50,local_58);
  FUN_00414ad0(local_res8 + 0x30,local_50);
  FUN_01b1cbc0(&local_68,param_4,5);
  FUN_0043ea00(&local_60,local_68);
  FUN_00414ad0(local_res8 + 0x40,local_60);
  FUN_01b1cbc0(&local_70,param_4,6);
  FUN_00414ad0(local_res8 + 0x28,local_70);
  FUN_01b1cbc0(&local_80,param_4,3);
  FUN_0043ea00(&local_78,local_80);
  FUN_00414ad0(local_res8 + 0x38,local_78);
  FUN_00414ad0(local_res8 + 8,param_5);
  FUN_00414ad0(local_res8 + 0x48,param_6);
  iVar3 = FUN_004170c0(L"id_group",*(undefined8 *)(local_res8 + 8),1);
  if (0 < iVar3) {
    iVar3 = FUN_004170c0(L"id_component",*(undefined8 *)(local_res8 + 0x18),1);
    if (0 < iVar3) {
      FUN_00414480(local_res8 + 0x20);
      goto LAB_00c81c54;
    }
  }
  FUN_00414ad0(local_res8 + 0x20,*(undefined8 *)(local_res8 + 0x18));
LAB_00c81c54:
  if (*(int *)(local_res8 + 0x50) < 0) {
    lVar4 = FUN_004a0a10(*(undefined8 *)(local_res8 + 0x38));
    local_98 = *(undefined8 *)(local_res8 + 0x30);
    uVar5 = (**(code **)(lVar4 + 0x18))
                      (lVar4,1,*(undefined4 *)(local_res8 + 0x50),*(undefined4 *)(local_res8 + 0x54)
                      );
    *(undefined8 *)(local_res8 + 0x10) = uVar5;
  }
  FUN_00414560(&local_80,10);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

