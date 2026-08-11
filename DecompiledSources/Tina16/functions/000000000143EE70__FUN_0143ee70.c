/* Ghidra address: 0143ee70 */
/* Ghidra symbol: FUN_0143ee70 */


void FUN_0143ee70(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [256];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined4 local_4c;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_1f8;
  local_1a0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_30 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  if (local_res10 != 0) {
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00414480(local_20);
    local_4c = 0;
    if (local_res10 != 0) {
      local_4c = *(undefined4 *)(local_res10 + -4);
    }
    FUN_00416dc0(local_20,local_res10,2,local_4c);
    FUN_004b4b10(local_28,local_20[0]);
    FUN_00414480(local_20);
    FUN_0177a660(local_res20);
    iVar1 = (**(code **)(*local_28 + 0x28))();
    local_3c = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004b3cf0(local_28,&local_70,local_3c);
        FUN_0043ea00(&local_68,local_70);
        if (local_68 != 0) {
          FUN_004b5390(local_28,&local_80,local_3c);
          FUN_0043ea00(&local_78,local_80);
          if (local_78 != 0) {
            FUN_004b5390(local_28,&local_48,local_3c);
            FUN_00457c30(&local_48,&local_88,&DAT_0143f34c,1);
            FUN_00415dd0(&local_30,local_88,0);
            uVar3 = FUN_00415ab0(local_30);
            local_1d8 = 0xffffffff;
            local_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = &local_38;
            iVar2 = FUN_0143dd00(param_1,uVar3,param_5,param_6);
            if (iVar2 == 0) {
              FUN_004b3cf0(local_28,&local_98,local_3c);
              FUN_0043e130(&local_90,local_98);
              FUN_00416910(local_198,local_90,0xff);
              uVar3 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_198,0);
              *(undefined8 *)(param_1 + 0x2b0) = uVar3;
              FUN_004144d0(*(longlong *)(param_1 + 0x2b0) + 0x10);
              *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x28) = local_38;
              (**(code **)(*local_res18 + 0x50))(local_res18,*(undefined8 *)(param_1 + 0x2b0));
              FUN_004b3cf0(local_28,&local_1a8,local_3c);
              FUN_0043e130(&local_1a0,local_1a8);
              FUN_00415dd0(&local_1b0,local_1a0,0);
              FUN_0177a800(local_res20,local_1b0,local_38);
            }
          }
        }
        local_3c = local_3c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_28);
  }
  FUN_004144d0(&local_1b0);
  FUN_00414560(&local_1a8,2);
  FUN_00414560(&local_98,7);
  FUN_00414480(&local_48);
  FUN_004144d0(&local_30);
  FUN_00414480(local_20);
  FUN_00414480(&local_res10);
  return;
}

