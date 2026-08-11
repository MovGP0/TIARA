/* Ghidra address: 00b39f90 */
/* Ghidra symbol: FUN_00b39f90 */


undefined8 * FUN_00b39f90(undefined8 *param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_38;
  uint local_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_004144d0(param_1);
  FUN_00b155d0(local_20,param_2);
  FUN_00b15100(&local_28,param_2);
  if (param_3 == '\0') {
    iVar2 = FUN_00417170(&DAT_00b3a480,local_20[0],1);
    if (iVar2 == 0) {
      iVar2 = FUN_00417170(&DAT_00b3a488,local_20[0],1);
      if (iVar2 == 1) {
        param_3 = '\x03';
      }
      else {
        iVar2 = FUN_00417170(L"http",local_20[0],1);
        if (iVar2 == 1) {
          param_3 = '\x01';
        }
        else {
          iVar2 = FUN_00417170(&DAT_00b3a4a4,local_20[0],1);
          if (iVar2 == 0) {
            iVar2 = FUN_00417170(&DAT_00b3a4ac,local_20[0],1);
            if (iVar2 == 0) {
              iVar2 = FUN_00417170(&DAT_00b3a4b4,local_20[0],1);
              if (iVar2 == 0) {
                param_3 = '\x01';
              }
              else {
                param_3 = '\x02';
              }
            }
            else {
              param_3 = '\x02';
            }
          }
          else {
            param_3 = '\x01';
          }
        }
      }
    }
    else {
      param_3 = '\x04';
    }
  }
  if ((param_3 == '\x02') && (iVar2 = FUN_00417170(&DAT_00b3a4ac,local_20[0],1), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_34 = (uint)(param_3 == '\x02');
  if (param_3 == '\x01') {
    local_34 = 1;
  }
  if (!bVar1) {
    local_34 = local_34 | 2;
  }
  if (param_3 == '\x03') {
    local_34 = 0x103;
  }
  if (param_3 == '\x04') {
    local_34 = 8;
  }
  FUN_00415d10(param_1,0x18,0);
  uVar3 = FUN_00414df0(param_1);
  FUN_0040d200(uVar3,0x18,0);
  uVar3 = FUN_00414df0(param_1);
  FUN_00409a70(&DAT_01e857b0,uVar3,0x10);
  lVar4 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar4 + 0x10) = 2;
  lVar4 = FUN_00414df0(param_1);
  FUN_00409a70(&local_34,lVar4 + 0x14,4);
  if (param_3 == '\x01') {
    FUN_00415d10(&local_30,0x10,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&DAT_01e857c0,uVar3,0x10);
    FUN_004155b0(param_1,local_30);
    local_38 = 0;
    if (local_28 != 0) {
      local_38 = *(int *)(local_28 + -4);
    }
    local_38 = local_38 + 2;
    FUN_00415d10(&local_30,4,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&local_38,uVar3,4);
    FUN_00415980(param_1,4,*param_1,local_30,local_28,&DAT_00b3a4c4);
  }
  else if (param_3 == '\x02') {
    FUN_00415d10(&local_30,0x10,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&DAT_01e857d0,uVar3,0x10);
    FUN_004155b0(param_1,local_30);
    FUN_00415980(param_1,4,*param_1,&DAT_00b3a4c4,&DAT_00b3a4d4,&DAT_00b3a4e8);
    FUN_00415d10(&local_30,0x18,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&DAT_01e857e0,uVar3,0x18);
    FUN_004155b0(param_1,local_30);
    lVar4 = local_28;
    local_38 = 0;
    if (local_28 != 0) {
      local_38 = *(int *)(local_28 + -4);
    }
    local_38 = local_38 + 6;
    FUN_00415d10(&local_30,4,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&local_38,uVar3,4);
    FUN_004155b0(param_1,local_30);
    local_38 = 0;
    if (lVar4 != 0) {
      local_38 = *(int *)(lVar4 + -4);
    }
    FUN_00415d10(&local_30,4,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&local_38,uVar3,4);
    FUN_00415980(param_1,4,*param_1,local_30,&LAB_00b3a4f8,local_28);
  }
  else if ((byte)(param_3 - 3U) < 2) {
    iVar2 = 0;
    if (local_28 != 0) {
      iVar2 = *(int *)(local_28 + -4);
    }
    local_38 = iVar2 / 2 + 1;
    FUN_00415d10(&local_30,4,0);
    uVar3 = FUN_00414df0(&local_30);
    FUN_00409a70(&local_38,uVar3,4);
    FUN_00415980(param_1,4,*param_1,local_30,local_28,&DAT_00b3a4c4);
  }
  FUN_00414590(&local_30,2);
  FUN_00414520(local_20);
  return param_1;
}

