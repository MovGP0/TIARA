/* Ghidra address: 018299a0 */
/* Ghidra symbol: FUN_018299a0 */


undefined8
FUN_018299a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  iVar1 = FUN_00416db0(param_5,L"STRTOINT");
  if (iVar1 == 0) {
    FUN_018493d0(param_6,&local_30,0);
    FUN_00467e90(&local_38,&local_30);
    uVar2 = FUN_0043fc00(local_38);
    FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
  }
  else {
    iVar1 = FUN_00416db0(param_5,L"STRTOINT64");
    if (iVar1 == 0) {
      FUN_018493d0(param_6,&local_50,0);
      FUN_00467e90(&local_58,&local_50);
      uVar3 = FUN_0043fcb0(local_58);
      FUN_00468700(param_2,uVar3);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"STRTOFLOAT");
      if (iVar1 == 0) {
        FUN_018493d0(param_6,&local_70,0);
        FUN_00467e90(&local_78,&local_70);
        uVar3 = FUN_00448650(local_78,PTR_DAT_02004830);
        FUN_00468860(param_2,uVar3);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"STRTODATE");
        if (iVar1 == 0) {
          FUN_018493d0(param_6,&local_90,0);
          FUN_00467e90(&local_98,&local_90);
          uVar3 = FUN_0044b200(local_98,PTR_DAT_02004830);
          FUN_004688a0(param_2,uVar3);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"STRTOTIME");
          if (iVar1 == 0) {
            FUN_018493d0(param_6,&local_b0,0);
            FUN_00467e90(&local_b8,&local_b0);
            uVar3 = FUN_0044b2c0(local_b8,PTR_DAT_02004830);
            FUN_004688a0(param_2,uVar3);
          }
          else {
            iVar1 = FUN_00416db0(param_5,L"STRTODATETIME");
            if (iVar1 == 0) {
              FUN_018493d0(param_6,&local_d0,0);
              FUN_00467e90(&local_d8,&local_d0);
              uVar3 = FUN_0044b380(local_d8,PTR_DAT_02004830);
              FUN_004688a0(param_2,uVar3);
            }
            else {
              iVar1 = FUN_00416db0(param_5,L"STRTOBOOL");
              if (iVar1 == 0) {
                FUN_018493d0(param_6,&local_f8,0);
                iVar1 = FUN_004644a0(&local_f8);
                FUN_00440030(&local_e0,iVar1 != 0,0);
                FUN_00468a10(param_2,local_e0);
              }
            }
          }
        }
      }
    }
  }
  FUN_00460ba0(&local_f8);
  FUN_00414560(&local_e0,2);
  FUN_00460ba0(&local_d0);
  FUN_00414480(&local_b8);
  FUN_00460ba0(&local_b0);
  FUN_00414480(&local_98);
  FUN_00460ba0(&local_90);
  FUN_00414480(&local_78);
  FUN_00460ba0(&local_70);
  FUN_00414480(&local_58);
  FUN_00460ba0(&local_50);
  FUN_00414480(&local_38);
  FUN_00460ba0(&local_30);
  return param_2;
}

