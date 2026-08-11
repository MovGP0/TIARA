/* Ghidra address: 016cef60 */
/* Ghidra symbol: FUN_016cef60 */


undefined4 FUN_016cef60(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  longlong local_res10 [3];
  undefined4 local_1e4;
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
  undefined1 local_178 [256];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_1c8 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_198 = 0;
  local_190 = 0;
  local_180 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1e4 = 0xffffffff;
  lVar5 = FUN_016b97f0(&DAT_016b45f0,1,0);
  uVar6 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
  *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x244) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0x2000130100000200;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  FUN_016bb740(lVar5,param_1);
  bVar9 = false;
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(param_3,&local_38,iVar8);
      iVar3 = FUN_00416db0(local_38,local_res10[0]);
      if (iVar3 == 0) {
        FUN_004b5390(param_3,&local_48,iVar8);
        break;
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_48 == 0) {
    while ((iVar2 = FUN_00416db0(local_40,local_res10[0]), iVar2 != 0 &&
           (cVar1 = FUN_016bb790(lVar5), cVar1 == '\0'))) {
      FUN_016bb7d0(lVar5,&local_1c0,1);
      FUN_00416880(&local_30,local_1c0);
      FUN_00415dd0(&local_1d0,local_30,0);
      FUN_016b8f10(&local_1c8,local_1d0);
      FUN_00416880(&local_1d8,local_1c8);
      FUN_0043e130(&local_40,local_1d8);
    }
    iVar2 = FUN_00416db0(local_40,local_res10[0]);
    if (iVar2 == 0) {
      local_1e4 = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x244);
    }
  }
  else {
    while ((!bVar9 && (cVar1 = FUN_016bb790(lVar5), cVar1 == '\0'))) {
      FUN_016bb7d0(lVar5,&local_50,1);
      FUN_00416880(&local_30,local_50);
      FUN_00415dd0(&local_60,local_30,0);
      FUN_016b8f10(&local_58,local_60);
      FUN_00416880(&local_68,local_58);
      FUN_0043e130(&local_40,local_68);
      iVar2 = FUN_00416db0(local_40,L".SUBCKT");
      if (iVar2 == 0) {
        FUN_00415dd0(lVar5 + 0xd90,local_30,0);
        *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x240) = 0;
        do {
          FUN_016bb7d0(lVar5,&local_70,1);
          FUN_00414bf0(lVar5 + 0xd88,local_70);
          if ((*(longlong *)(lVar5 + 0xd88) != 0) && (**(char **)(lVar5 + 0xd88) == '+')) {
            FUN_00416880(&local_38,*(undefined8 *)(lVar5 + 0xd88));
            puVar7 = (undefined2 *)FUN_00414de0(&local_38);
            *puVar7 = 0x20;
            FUN_00416880(&local_78,*(undefined8 *)(lVar5 + 0xd90));
            FUN_00416ad0(&local_78,local_38);
            FUN_00415dd0(lVar5 + 0xd90,local_78,0);
          }
        } while ((*(longlong *)(lVar5 + 0xd88) != 0) && (**(char **)(lVar5 + 0xd88) == '+'));
        *(undefined4 *)(lVar5 + 0x990) = 1;
        FUN_016b9d20(lVar5);
        FUN_016b9d80(lVar5);
        FUN_016ba960(lVar5,local_178,0,&DAT_016cf764,&DAT_016cf768,0);
        FUN_016ba960(lVar5,local_178,0,&DAT_016cf764,&DAT_016cf788,0);
        FUN_004169a0(&local_38,local_178);
        FUN_0043e130(&local_180,local_38);
        iVar2 = FUN_00416db0(local_180,local_48);
        bVar9 = iVar2 == 0;
        if (bVar9) {
          iVar2 = FUN_004413f0(&LAB_016cf7b4,local_res10[0]);
          uVar4 = 0;
          if (local_res10[0] != 0) {
            uVar4 = *(undefined4 *)(local_res10[0] + -4);
          }
          FUN_00416dc0(local_res10,local_res10[0],iVar2 + 1,uVar4);
          FUN_00414480(&local_40);
          FUN_00416880(&local_30,*(undefined8 *)(lVar5 + 0xd88));
          FUN_00415dd0(&local_190,local_30,0);
          FUN_016b8f10(&local_188,local_190);
          FUN_00416880(&local_198,local_188);
          FUN_0043e130(&local_40,local_198);
          while ((iVar2 = FUN_00416db0(local_40,local_res10[0]), iVar2 != 0 &&
                 (cVar1 = FUN_016bb790(lVar5), cVar1 == '\0'))) {
            FUN_016bb7d0(lVar5,&local_1a0,1);
            FUN_00416880(&local_30,local_1a0);
            FUN_00415dd0(&local_1b0,local_30,0);
            FUN_016b8f10(&local_1a8,local_1b0);
            FUN_00416880(&local_1b8,local_1a8);
            FUN_0043e130(&local_40,local_1b8);
          }
          iVar2 = FUN_00416db0(local_40,local_res10[0]);
          if (iVar2 == 0) {
            local_1e4 = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x244);
          }
        }
      }
    }
  }
  FUN_00410f20(lVar5);
  FUN_00414480(&local_1d8);
  FUN_00414590(&local_1d0,3);
  FUN_00414480(&local_1b8);
  FUN_00414590(&local_1b0,3);
  FUN_00414480(&local_198);
  FUN_00414590(&local_190,2);
  FUN_00414480(&local_180);
  FUN_00414480(&local_78);
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_00414590(&local_60,3);
  FUN_00414560(&local_48,4);
  FUN_00414480(local_res10);
  return local_1e4;
}

