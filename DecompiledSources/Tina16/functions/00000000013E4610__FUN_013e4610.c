/* Ghidra address: 013e4610 */
/* Ghidra symbol: FUN_013e4610 */


undefined1
FUN_013e4610(undefined8 param_1,undefined1 param_2,longlong *param_3,int param_4,undefined8 param_5,
            char param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  int local_174;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8 [3];
  longlong *local_90;
  longlong *local_88;
  double local_70;
  undefined8 local_58;
  undefined8 local_50;
  int local_34;
  int local_30;
  undefined1 local_29;
  longlong local_28;
  int local_1c;
  
  local_d0 = auStack_1b8;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_140 = 0;
  local_148 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_a8[0] = 0;
  FUN_00414610(param_5);
  local_29 = 0;
  local_88 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(longlong *)PTR_DAT_02003118 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02003118);
  }
  local_198 = 0;
  uVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,4,0);
  *(undefined8 *)PTR_DAT_02003118 = uVar1;
  FUN_01cc6020(*(undefined8 *)PTR_DAT_02003118);
  local_28 = FUN_01af24a0(&DAT_01af0038,1,1,0);
  DAT_02108460 = '\0';
  FUN_0041ddd0(&local_d8,&LAB_013e2598);
  FUN_0064de00(*(undefined8 *)(local_28 + 8),local_d8);
  FUN_01af2a70(local_28,FUN_013e25b0);
  *(undefined8 *)(local_28 + 0x18) = 0x4059000000000000;
  FUN_01af29b0(local_28,1);
  FUN_01af29d0(local_28,0);
  FUN_01af2ae0(local_28);
  local_34 = 1;
  local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = 1;
  iVar3 = local_34;
  if (0 < local_34) {
    do {
      FUN_0043f750(&local_e8,local_30);
      FUN_00416ba0(&local_e0,L"Channel_",local_e8);
      (**(code **)(*local_90 + 0x80))(local_90,local_e0,1);
      local_30 = local_30 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_198 = CONCAT71(local_198._1_7_,1);
  local_190 = 0;
  local_188 = 0;
  FUN_01cc3330(*(undefined8 *)(*(longlong *)PTR_DAT_02003118 + 8),local_34,local_90,2);
  FUN_00410f20(local_90);
  local_174 = (**(code **)(*param_3 + 0x28))(param_3);
  local_174 = local_174 + -1;
  local_1c = param_4;
  if (param_4 <= local_174) {
    local_174 = (local_174 - param_4) + 1;
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_f0,local_1c);
      if (local_f0 != 0) {
        if (DAT_02108460 != '\0') break;
        iVar3 = (**(code **)(*param_3 + 0x28))(param_3);
        lVar2 = FUN_0040c770((double)(local_1c * 100) / (double)(iVar3 - param_4));
        FUN_01af2990(local_28,(double)lVar2);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        (**(code **)(*param_3 + 0x18))(param_3,&local_f8,local_1c);
        FUN_00415dd0(&local_100,local_f8,0);
        FUN_00415dd0(&local_108,param_5,0);
        FUN_00d309d0(local_100,local_88,local_108);
        (**(code **)(*local_88 + 0x18))(local_88,&local_110,0);
        local_b8 = local_110;
        local_50 = FUN_00448650(local_110,PTR_DAT_02004830);
        FUN_01cc47e0(*(undefined8 *)PTR_DAT_02003118,local_50);
        local_30 = 1;
        while (iVar3 = (**(code **)(*local_88 + 0x28))(local_88), local_30 < iVar3 + -1) {
          (**(code **)(*local_88 + 0x18))(local_88,&local_118,local_30);
          local_c0 = local_118;
          local_58 = FUN_00448650(local_118,PTR_DAT_02004830);
          if (param_6 != '\0') {
            local_58 = FUN_00c43d30(local_58);
          }
          (**(code **)(*local_88 + 0x18))(local_88,&local_120,local_30 + 1);
          local_c8 = local_120;
          local_70 = (double)FUN_00448650(local_120,PTR_DAT_02004830);
          FUN_01cc4ee0(*(undefined8 *)PTR_DAT_02003118,(longlong)(local_30 + -1) / 2 & 0xffffffff,
                       local_58,local_70 * 0.017453292519943295);
          local_30 = local_30 + 2;
        }
      }
      local_1c = local_1c + 1;
      local_174 = local_174 + -1;
    } while (local_174 != 0);
  }
  FUN_00410f20(local_28);
  if (DAT_02108460 == '\0') {
    local_29 = 1;
    (**(code **)(*param_3 + 0x18))(param_3,&local_128,param_4 + -1);
    FUN_00415dd0(&local_130,local_128,0);
    FUN_00415dd0(&local_138,param_5,0);
    FUN_00d309d0(local_130,local_88,local_138);
    (**(code **)(*local_88 + 0x18))(local_88,&local_140,0);
    FUN_00415dd0(&local_148,local_140,0);
    FUN_00d309d0(local_148,local_88,&DAT_013e4f8c);
    iVar3 = (**(code **)(*local_88 + 0x28))(local_88);
    (**(code **)(*local_88 + 0x18))(local_88,local_a8,iVar3 + -1);
    FUN_013db650(*(undefined8 *)PTR_DAT_02003118,local_a8[0],param_2,0);
  }
  else {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02003118);
    *(undefined8 *)PTR_DAT_02003118 = 0;
  }
  FUN_00410f20(local_88);
  FUN_00414560(&local_160,3);
  FUN_004144d0(&local_148);
  FUN_00414480(&local_140);
  FUN_00414590(&local_138,2);
  FUN_00414560(&local_128,4);
  FUN_00414590(&local_108,2);
  FUN_00414560(&local_f8,5);
  FUN_00414480(local_a8);
  FUN_00414480(&param_5);
  return local_29;
}

