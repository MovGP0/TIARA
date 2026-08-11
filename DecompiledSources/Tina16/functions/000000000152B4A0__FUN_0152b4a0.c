/* Ghidra address: 0152b4a0 */
/* Ghidra symbol: FUN_0152b4a0 */


undefined1 FUN_0152b4a0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59 [15];
  char local_4a;
  char local_49;
  undefined8 local_48;
  int local_3c;
  undefined8 local_30;
  longlong local_20;
  longlong local_18;
  char local_9;
  
  local_70 = auStack_d8;
  local_78 = 0;
  local_48 = 0;
  local_4a = '\0';
  local_9 = 0;
  local_49 = 1;
  local_18 = 0;
  uVar4 = FUN_019a4600();
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffffffffff00);
  local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffffffffff00);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_18 = FUN_01b06050(&PTR_FUN_0152a5f8,uVar7,uVar4,8);
  FUN_0152a8c0(local_18);
  uVar4 = CONCAT71((int7)((ulonglong)uVar7 >> 8),6);
  FUN_016f1c10(local_18,uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),8);
  FUN_017d18e0(local_18,uVar4);
  iVar3 = *(int *)(*(longlong *)(local_18 + 0x4c0) + 0x10);
  if (iVar3 < 2) {
    uVar4 = *(undefined8 *)(local_18 + 0x1310);
    FUN_01b04d70(0x10b,uVar4,0);
  }
  else if (2 < iVar3) {
    uVar4 = *(undefined8 *)(local_18 + 0x1310);
    FUN_01b04d70(0x14a,uVar4,0);
  }
  lVar5 = FUN_019a4600();
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),4);
  local_b8 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,1);
  local_a8 = local_a8 & 0xffffffffffffff00;
  FUN_017cc620(local_18,uVar4,0,*(undefined8 *)(lVar5 + 0x360));
  local_68 = local_18 + 0x5d8;
  bVar1 = *(byte *)(local_18 + 0x5db);
  if (bVar1 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    if (bVar1 == 1) {
      local_30 = *(undefined8 *)(local_18 + 0x6a0);
    }
    else if (bVar1 == 2) {
      if (*(int *)(*(longlong *)(*(longlong *)(local_18 + 0xa0) + 0x470) + 0x10) < 2) {
        if (((*(longlong *)(local_18 + 0xa09) == 0) && (*(char *)(local_18 + 0xa15) == '\0')) ||
           (*(int *)(*(longlong *)(*(longlong *)(local_18 + 0xa0) + 0x470) + 0x10) == 0)) {
          FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_18 + 0x1310),0);
        }
        if (*(longlong *)(local_68 + 0x431) == 0) {
          FUN_004169a0(&local_78,local_68 + 0x43d);
          plVar2 = *(longlong **)(*(longlong *)(local_18 + 0xa0) + 0x438);
          local_3c = (**(code **)(*plVar2 + 0xb8))(plVar2,local_78);
          if (local_3c == -1) {
            FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_18 + 0x1310),0);
          }
          FUN_004b5390(*(undefined8 *)(*(longlong *)(local_18 + 0xa0) + 0x438),&local_48,local_3c);
        }
        else {
          iVar3 = FUN_01b07e10(local_18,*(longlong *)(local_68 + 0x431));
          uVar4 = *(undefined8 *)(*(longlong *)(local_18 + 0x2b0) + -8 + (longlong)iVar3 * 8);
          *(undefined8 *)(local_18 + 5000) = uVar4;
          local_b8 = &local_5b;
          local_b0 = local_59;
          puVar6 = (undefined8 *)
                   FUN_01b05ad0(uVar4,*(undefined1 *)(local_68 + 0x439),
                                *(undefined1 *)(local_68 + 0x43a),&local_5a);
          *(undefined8 **)(local_18 + 0x1390) = puVar6;
          local_30 = *puVar6;
          FUN_012b4370(local_18,*(undefined8 *)(local_18 + 5000),*(char *)(local_68 + 0x439) + -1,
                       *(char *)(local_68 + 0x43a) + -1);
        }
      }
      else {
        uVar4 = FUN_012b4460(&DAT_012b4088,1,local_18,8);
        *(undefined8 *)(local_18 + 0x588) = uVar4;
      }
    }
    else if ((byte)(bVar1 - 3) < 2) {
      uVar4 = FUN_0114ee90(&DAT_0114e878,1,local_18);
      *(undefined8 *)(local_18 + 0x590) = uVar4;
    }
  }
  FUN_01af2a70(*(undefined8 *)(local_18 + 0xf10),FUN_0152a9d0);
  lVar5 = *(longlong *)(local_18 + 0xf10);
  *(undefined8 *)(lVar5 + 0x18) = 0x4059000000000000;
  FUN_01af29b0(lVar5,2);
  uVar4 = 0;
  FUN_01af29d0(*(undefined8 *)(local_18 + 0xf10),0);
  FUN_01af2ae0(*(undefined8 *)(local_18 + 0xf10));
  local_9 = '\x01';
  FUN_0152a9e0(local_18);
  local_49 = '\0';
  if ((local_9 != '\0') && (local_18 != 0)) {
    local_20 = local_18 + 0x5d8;
    bVar1 = *(byte *)(local_18 + 0x5db);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (bVar1 == 1) {
        *(undefined8 *)(local_18 + 0x6a0) = local_30;
      }
      else if (bVar1 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_18 + 0xa0) + 0x470) + 0x10) < 2) {
          if (*(longlong *)(local_18 + 0xa09) == 0) {
            FUN_004b5450(*(undefined8 *)(*(longlong *)(local_18 + 0xa0) + 0x438),local_3c,local_48);
            FUN_01440040(*(undefined8 *)(local_18 + 0xa0),*(undefined8 *)(local_18 + 0x1310),0);
            FUN_019af810(*(undefined8 *)(local_18 + 0xa0),8);
          }
          else {
            **(undefined8 **)(local_18 + 0x1390) = local_30;
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(local_18 + 0x588));
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(local_18 + 0x590));
      }
    }
  }
  if ((local_18 != 0) && (*(char *)(local_18 + 0x49c) == '\x01')) {
    FUN_017cc920(local_18);
  }
  if (local_49 != '\0') {
    if (local_18 != 0) {
      FUN_017cc920(local_18);
    }
    local_4a = '\x01';
  }
  if ((local_4a == '\0') && (*(char *)(local_18 + 0x49c) != '\x01')) {
    local_4a = 0;
  }
  else {
    local_4a = 1;
  }
  FUN_00410f20(local_18);
  FUN_00414480(&local_78);
  FUN_00414480(&local_48);
  return local_4a;
}

