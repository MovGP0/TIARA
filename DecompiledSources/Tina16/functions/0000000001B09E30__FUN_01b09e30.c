/* Ghidra address: 01b09e30 */
/* Ghidra symbol: FUN_01b09e30 */


void FUN_01b09e30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_16;
  char local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  FUN_0043f750(&local_38,*(undefined4 *)(param_1 + 0x308));
  FUN_00416ba0(&local_30,L"Matrix Size = ",local_38);
  uVar3 = FUN_0040f200(param_2,local_30);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x2d8));
  FUN_00416ba0(&local_40,L"Device Count = ",local_48);
  uVar3 = FUN_0040f200(param_2,local_40);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  cVar1 = FUN_01b07dd0(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_014c9ed0(param_1,0x40b);
    FUN_0043f750(&local_58,uVar2);
    FUN_00416ba0(&local_50,L"AD Count = ",local_58);
    uVar3 = FUN_0040f200(param_2,local_50);
    FUN_0040f590(uVar3);
    FUN_00409900();
    uVar2 = FUN_014c9ed0(param_1,0x40a);
    FUN_0043f750(&local_68,uVar2);
    FUN_00416ba0(&local_60,L"DA Count = ",local_68);
    uVar3 = FUN_0040f200(param_2,local_60);
    FUN_0040f590(uVar3);
    FUN_00409900();
    lVar4 = FUN_014cdd20(*(undefined8 *)(param_1 + 0xe8));
    if (lVar4 != 0) {
      uVar3 = FUN_014cdd20(*(undefined8 *)(param_1 + 0xe8));
      FUN_01566b60(uVar3,&local_10,&local_c);
      FUN_0043f750(&local_78,local_10);
      FUN_00416ba0(&local_70,L"Digital Node Count = ",local_78);
      uVar3 = FUN_0040f200(param_2,local_70);
      FUN_0040f590(uVar3);
      FUN_00409900();
      FUN_0043f750(&local_88,local_c);
      FUN_00416ba0(&local_80,L"Digital Device Count = ",local_88);
      uVar3 = FUN_0040f200(param_2,local_80);
      FUN_0040f590(uVar3);
      FUN_00409900();
      if (*(char *)(param_1 + 0x98) == '\x06') {
        uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
        _get_roll_back_settings(uVar3,&local_15,&local_14,&local_16,&local_20);
        if (local_15 == '\0') {
          FUN_00414b50(&local_28,&DAT_01b0a570);
        }
        else {
          FUN_00414b50(&local_28,&PTR_DAT_01b0a55c);
        }
        FUN_00416ba0(&local_90,L"Rollback = ",local_28);
        uVar3 = FUN_0040f200(param_2,local_90);
        FUN_0040f590(uVar3);
        FUN_00409900();
        if (local_15 != '\0') {
          FUN_0043f750(&local_a0,local_14);
          FUN_00416ba0(&local_98,L" Rollback subdiv = ",local_a0);
          uVar3 = FUN_0040f200(param_2,local_98);
          FUN_0040f590(uVar3);
          FUN_00409900();
          if (local_16 == '\0') {
            FUN_00414b50(&local_28,&DAT_01b0a570);
          }
          else {
            FUN_00414b50(&local_28,&PTR_DAT_01b0a55c);
          }
          FUN_00416ba0(&local_a8,L" Rollback filter = ",local_28);
          uVar3 = FUN_0040f200(param_2,local_a8);
          FUN_0040f590(uVar3);
          FUN_00409900();
          if (local_16 != '\0') {
            FUN_00b8fd60(&local_b8,local_20,2,0,1);
            FUN_00416ba0(&local_b0,L" Rollback filter value = ",local_b8);
            uVar3 = FUN_0040f200(param_2,local_b0);
            FUN_0040f590(uVar3);
            FUN_00409900();
          }
        }
      }
    }
    FUN_0040f590(param_2);
    FUN_00409900();
  }
  FUN_0043f750(&local_c8,*(undefined4 *)(param_1 + 0x30c));
  FUN_00416ba0(&local_c0,L"Visible Node Counts = ",local_c8);
  uVar3 = FUN_0040f200(param_2,local_c0);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0043f750(&local_d8,*(undefined4 *)(param_1 + 0x310));
  FUN_00416ba0(&local_d0,L"Internal Node Counts = ",local_d8);
  uVar3 = FUN_0040f200(param_2,local_d0);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0043f750(&local_e8,*(undefined4 *)(param_1 + 0x314));
  FUN_00416ba0(&local_e0,L"Current Counts = ",local_e8);
  uVar3 = FUN_0040f200(param_2,local_e0);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_00414560(&local_e8,0x19);
  return;
}

