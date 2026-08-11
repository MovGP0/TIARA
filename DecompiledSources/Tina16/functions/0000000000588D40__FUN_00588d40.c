/* Ghidra address: 00588d40 */
/* Ghidra symbol: FUN_00588d40 */


void FUN_00588d40(undefined8 param_1,undefined8 *param_2,short *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte *local_48;
  byte *local_40;
  short *local_38;
  short *local_30;
  short *local_28;
  short *local_20;
  short *local_18;
  undefined8 local_10;
  
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_98 = param_1;
  local_90 = param_2;
  puVar5 = (undefined8 *)FUN_00589390(*(undefined8 *)*param_2);
  pbVar4 = *(byte **)*local_90;
  bVar1 = *pbVar4;
  if (bVar1 < 10) {
    if (bVar1 == 9) {
LAB_00588e6e:
      uVar7 = FUN_00588b90(auStack_c8,(longlong)*(int *)((longlong)puVar5 + 1),
                           (longlong)*(int *)((longlong)puVar5 + 5));
      FUN_0058af20(local_98,local_90,uVar7);
      goto code_r0x005891f6;
    }
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        uVar7 = FUN_00464c60(param_3);
        FUN_0058d5d0(local_98,local_90,uVar7);
        goto code_r0x005891f6;
      }
      if (bVar1 == 1) {
        iVar2 = *(int *)((longlong)puVar5 + 1);
        iVar3 = *(int *)((longlong)puVar5 + 5);
        if (iVar2 < iVar3) {
          uVar7 = FUN_005889e0(auStack_c8,(longlong)iVar2,(longlong)iVar3);
          FUN_0058af20(local_98,local_90,uVar7);
        }
        else {
          uVar7 = FUN_00588a70(auStack_c8,iVar2,iVar3);
          FUN_0058af20(local_98,local_90,uVar7);
        }
        goto code_r0x005891f6;
      }
      if (bVar1 == 2) goto LAB_00588e6e;
      if (bVar1 == 3) {
        if (*param_3 == 0x100) {
          bVar8 = true;
        }
        else {
          bVar8 = *param_3 == 8;
          local_20 = param_3;
        }
        if (bVar8) {
          bVar8 = true;
        }
        else {
          bVar8 = *param_3 == 0x102;
          local_28 = param_3;
        }
        local_18 = param_3;
        if (bVar8) {
          FUN_0046c3f0(&local_50,param_3);
          FUN_0058b2b0(local_98,local_90,local_50);
        }
        else {
          local_30 = param_3;
          if (*param_3 == 0xb) {
            FUN_00464c60(param_3);
            lVar6 = FUN_0040c840();
            if (lVar6 < 0) {
              lVar6 = -lVar6;
            }
            FUN_0058af20(local_98,local_90,lVar6);
          }
          else {
            uVar7 = FUN_005889e0(auStack_c8,(longlong)*(int *)((longlong)puVar5 + 1),
                                 (longlong)*(int *)((longlong)puVar5 + 5));
            FUN_0058af20(local_98,local_90,uVar7);
          }
        }
        goto code_r0x005891f6;
      }
    }
    else {
      if (bVar1 == 5) {
        FUN_0046c3f0(&local_60,param_3);
        FUN_0058cfc0(local_98,local_90,local_60);
        goto code_r0x005891f6;
      }
      if (bVar1 == 6) {
        local_38 = param_3;
        if (*param_3 == 3) {
          uVar7 = FUN_004634b0(param_3);
          FUN_0058af20(local_98,local_90,uVar7);
        }
        else {
          FUN_0046c3f0(&local_58,param_3);
          FUN_0058c8f0(local_98,local_90,local_58);
        }
        goto code_r0x005891f6;
      }
    }
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 0x10) {
      local_48 = pbVar4 + 1;
      local_40 = local_48;
      if (*(longlong *)(pbVar4 + (ulonglong)*local_48 + 2 + 8) <
          *(longlong *)(pbVar4 + (ulonglong)*local_48 + 2)) {
        uVar7 = FUN_00463a50(param_3);
        FUN_0058f420(local_98,local_90,uVar7);
      }
      else {
        uVar7 = FUN_005889e0(auStack_c8,*puVar5,puVar5[1]);
        FUN_0058f420(local_98,local_90,uVar7);
      }
      goto code_r0x005891f6;
    }
    if (bVar1 == 10) {
LAB_005890bd:
      FUN_0046c3f0(&local_70,param_3);
      FUN_0058cfc0(local_98,local_90,local_70);
      goto code_r0x005891f6;
    }
    if (bVar1 == 0xb) {
      FUN_0046c450(&local_68,param_3);
      FUN_0058d280(local_98,local_90,local_68);
      goto code_r0x005891f6;
    }
    if (bVar1 == 0xc) {
      FUN_0058d740(local_98,local_90,param_3);
      goto code_r0x005891f6;
    }
  }
  else {
    if (bVar1 == 0x11) {
      local_10 = 0;
      FUN_0046d7f0(&local_10,param_3,*(undefined8 *)*local_90);
      FUN_0058f530(local_98,local_90,local_10);
      goto code_r0x005891f6;
    }
    if (bVar1 == 0x12) goto LAB_005890bd;
  }
  FUN_00589350(&local_88,pbVar4);
  local_80 = local_88;
  local_78 = 0x11;
  local_a8 = 0;
  uVar7 = FUN_0044d8d0(&PTR_FUN_00587ce8,1,PTR_PTR_02002938,&local_80);
  FUN_004134c0(uVar7);
code_r0x005891f6:
  FUN_00414480(&local_88);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00414560(&local_60,3);
  return;
}

