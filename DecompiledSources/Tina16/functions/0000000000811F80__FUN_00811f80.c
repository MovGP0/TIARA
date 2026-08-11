/* Ghidra address: 00811f80 */
/* Ghidra symbol: FUN_00811f80 */


int * FUN_00811f80(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_108 [4];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 local_94;
  int local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  int local_60;
  uint local_58;
  undefined8 local_40;
  
  local_7c = 0x3c;
  uVar6 = FUN_00786090(param_1);
  thunk_FUN_041c8200(uVar6,0xfffffffa,&local_7c);
  if (((local_58 & 0x8000) == 0) && ((local_58 & 1) == 0)) {
    local_40 = local_78;
    uVar6 = FUN_00786090(param_1);
    thunk_FUN_0417e313(uVar6,&local_40);
    *(undefined8 *)param_2 = local_40;
    local_40 = local_70;
    uVar6 = FUN_00786090(param_1);
    thunk_FUN_0417e313(uVar6,&local_40);
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
    local_40 = CONCAT44(param_2[1] + iVar2,(undefined4)local_40);
    *(undefined8 *)(param_2 + 2) = local_40;
    *param_2 = local_64;
    param_2[2] = local_60;
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      if (cVar1 == '\0') {
        FUN_00423b50(param_2,1,1);
      }
      else {
        FUN_00423b50(param_2,2,2);
      }
    }
    iVar3 = FUN_004230c0(&local_78);
    if (iVar2 != iVar3) {
      local_94 = 0x17;
      local_98 = 0x1c;
      uVar6 = FUN_00786090(param_1);
      thunk_FUN_04083ff6(uVar6,0,&local_98);
      if (local_88 == 0) {
        FUN_00811e70(param_1,local_a8);
        iVar3 = FUN_004230a0(local_a8);
        iVar4 = FUN_004230c0(&local_78);
        iVar3 = iVar3 + iVar4 * -3;
        if (0 < iVar3) {
          FUN_00811e70(param_1,local_108);
          iVar4 = FUN_004230c0(&local_78);
          iVar7 = *param_2 - local_108[0];
          FUN_00812380(param_1,local_108);
          FUN_00812380(param_1,local_b8);
          iVar5 = FUN_004230a0(local_b8);
          iVar3 = FUN_0040c840((double)(iVar5 - iVar2) *
                               (double)((float)(iVar7 - iVar4) / (float)iVar3));
          *param_2 = local_108[0] + iVar3;
          param_2[2] = local_108[0] + iVar3 + iVar2;
        }
      }
      else {
        FUN_00811e70(param_1,local_c8);
        iVar2 = FUN_004230a0(local_c8);
        iVar3 = FUN_004230c0(&local_78);
        iVar2 = iVar2 + iVar3 * -2;
        if (0 < iVar2) {
          FUN_00812380(param_1,local_d8);
          iVar3 = FUN_004230a0(local_d8);
          iVar4 = FUN_004230a0(param_2);
          iVar3 = FUN_0040c840((double)iVar4 * (double)((float)iVar3 / (float)iVar2));
          iVar4 = (**(code **)(*param_1 + 0x48))(param_1,9);
          iVar5 = iVar4 / 2;
          if (iVar3 < iVar5) {
            iVar3 = FUN_004230a0(param_2,(longlong)iVar4 % 2 & 0xffffffff);
            if (0 < iVar2 - iVar3) {
              FUN_00811e70(param_1,local_108);
              iVar4 = FUN_004230c0(&local_78);
              iVar8 = *param_2 - local_108[0];
              FUN_00812380(param_1,local_108);
              FUN_00812380(param_1,local_e8);
              iVar7 = FUN_004230a0(local_e8);
              iVar2 = FUN_0040c840((double)(iVar7 - iVar5) *
                                   (double)((float)(iVar8 - iVar4) / (float)(iVar2 - iVar3)));
              *param_2 = local_108[0] + iVar2;
              param_2[2] = local_108[0] + iVar2 + iVar5;
            }
          }
          else {
            FUN_00811e70(param_1,local_108);
            iVar4 = FUN_004230c0(&local_78);
            iVar7 = *param_2 - local_108[0];
            FUN_00812380(param_1,local_108);
            FUN_00812380(param_1,local_f8);
            iVar5 = FUN_004230a0(local_f8);
            iVar2 = FUN_0040c840((double)iVar5 * (double)((float)(iVar7 - iVar4) / (float)iVar2));
            *param_2 = local_108[0] + iVar2;
            param_2[2] = local_108[0] + iVar2 + iVar3;
          }
        }
      }
    }
  }
  else {
    FUN_00423010(param_2,0,0,0,0);
  }
  return param_2;
}

