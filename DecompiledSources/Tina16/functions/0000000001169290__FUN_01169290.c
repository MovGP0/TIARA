/* Ghidra address: 01169290 */
/* Ghidra symbol: FUN_01169290 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01169290(int *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1f [15];
  
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
  local_178 = 0;
  local_170 = 0;
  local_160 = 0;
  local_168 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_004169a0(local_30,&DAT_0203a509);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_38);
  iVar2 = FUN_00416db0(local_30[0],local_38);
  if (iVar2 != 0) {
    FUN_004169a0(&local_40,&DAT_0203a509);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_48);
    iVar2 = FUN_00416db0(local_40,local_48);
    if (iVar2 != 0) {
      FUN_01169ba0(param_1,param_2);
      FUN_004169a0(&local_1c0,param_1 + 0xd);
      FUN_0043f750(&local_1c8,*(undefined4 *)PTR_DAT_020047c8);
      FUN_00416ad0(&local_1c0,local_1c8);
      FUN_00416910(local_158,local_1c0,0xff);
      FUN_00415020(local_1f,local_158,6);
      if (*PTR_DAT_02001a98 == '\0') {
        FUN_004169a0(&local_1d8,local_1f);
        FUN_011650d0(&LAB_01169b98,local_1d8,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],
                     param_1[10],0);
        uVar3 = _DAT_0203a4e0;
        uVar4 = _DAT_0203a4e4;
        uVar5 = _DAT_0203a4e8;
        uVar6 = _DAT_0203a4ec;
      }
      else {
        FUN_004169a0(&local_1d0,local_1f);
        FUN_011650d0(&DAT_01169b60,local_1d0,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],2,0
                    );
        uVar3 = _DAT_0203a4e0;
        uVar4 = _DAT_0203a4e4;
        uVar5 = _DAT_0203a4e8;
        uVar6 = _DAT_0203a4ec;
      }
      goto code_r0x011699bd;
    }
  }
  FUN_004169a0(&local_50,param_1 + 0xd);
  FUN_0043f750(&local_58,*(undefined4 *)PTR_DAT_020047c8);
  FUN_00416ad0(&local_50,local_58);
  FUN_00416910(local_158,local_50,0xff);
  FUN_00415020(local_1f,local_158,6);
  cVar1 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0));
  if (cVar1 == '\0') {
    FUN_01169ba0(param_1,param_2);
    if (*PTR_DAT_02001a98 == '\0') {
      FUN_004169a0(&local_180,&DAT_0203a509);
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_188);
      iVar2 = FUN_00416db0(local_180,local_188);
      if (iVar2 == 0) {
        FUN_011650d0(&DAT_01169b74,0,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],param_1[10]
                     ,0x4028000000000000);
      }
      else {
        FUN_011650d0(&DAT_01169b74,0,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],param_1[10]
                     ,0x4028000000000000);
      }
      FUN_004169a0(&local_190,&DAT_0203a509);
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_198);
      iVar2 = FUN_00416db0(local_190,local_198);
      if (iVar2 == 0) {
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_1a0);
        FUN_011650d0(&DAT_01169b88,local_1a0,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],3,0
                    );
      }
      else {
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_1a8);
        FUN_011650d0(&DAT_01169b88,local_1a8,*param_1 + param_1[0x19],param_1[1] + param_1[0x1a],1,0
                    );
      }
    }
    else {
      FUN_004169a0(&local_160,&DAT_0203a509);
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_168);
      iVar2 = FUN_00416db0(local_160,local_168);
      if (iVar2 == 0) {
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_170);
        FUN_011650d0(&DAT_01169b60,local_170,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],3,0
                    );
      }
      else {
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_178);
        FUN_011650d0(&DAT_01169b60,local_178,*param_1 + param_1[0x19],param_1[1] + param_1[0x1a],1,0
                    );
      }
    }
  }
  FUN_004169a0(&local_1b0,&DAT_0203a509);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_1b8);
  iVar2 = FUN_00416db0(local_1b0,local_1b8);
  if (iVar2 == 0) {
    uVar3 = **(undefined4 **)(param_1 + 0x12);
    uVar4 = (*(undefined4 **)(param_1 + 0x12))[1];
    uVar5 = _DAT_0203a4e8;
    uVar6 = _DAT_0203a4ec;
    if (param_1[0x16] != 0) {
      uVar3 = FUN_01167b10(param_1[2] +
                           DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x16] * 4));
      uVar4 = FUN_01167b10(param_1[3] +
                           DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x16] * 4));
      uVar5 = _DAT_0203a4e8;
      uVar6 = _DAT_0203a4ec;
    }
  }
  else {
    uVar3 = _DAT_0203a4e0;
    uVar4 = _DAT_0203a4e4;
    uVar5 = **(undefined4 **)(param_1 + 0x14);
    uVar6 = (*(undefined4 **)(param_1 + 0x14))[1];
    if (param_1[0x16] != 0) {
      uVar5 = FUN_01167b10(param_1[2] +
                           DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x16] * 4));
      uVar6 = FUN_01167b10(param_1[3] +
                           DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x16] * 4));
      uVar3 = _DAT_0203a4e0;
      uVar4 = _DAT_0203a4e4;
    }
  }
code_r0x011699bd:
  _DAT_0203a4ec = uVar6;
  _DAT_0203a4e8 = uVar5;
  _DAT_0203a4e4 = uVar4;
  _DAT_0203a4e0 = uVar3;
  FUN_00414560(&local_1d8,4);
  FUN_00414480(&local_1b8);
  FUN_00414480(&local_1b0);
  FUN_00414560(&local_1a8,3);
  FUN_00414480(&local_190);
  FUN_00414480(&local_188);
  FUN_00414480(&local_180);
  FUN_00414560(&local_178,3);
  FUN_00414480(&local_160);
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

