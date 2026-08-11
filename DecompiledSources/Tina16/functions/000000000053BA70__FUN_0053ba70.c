/* Ghidra address: 0053ba70 */
/* Ghidra symbol: FUN_0053ba70 */


undefined1 FUN_0053ba70(longlong param_1,undefined *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar4 = FUN_00536190(param_1);
  uVar4 = uVar4 & 0xff;
  if (uVar4 < 8) {
    if (uVar4 == 7) {
      uVar5 = FUN_00536e10(param_1);
      FUN_00468700(&local_30,uVar5);
    }
    else if (uVar4 < 4) {
      if (uVar4 == 3) {
        cVar2 = FUN_00560540(param_1,1);
        if (cVar2 == '\0') {
          uVar5 = FUN_005374f0(param_1);
          FUN_00468700(&local_30,uVar5);
        }
        else {
          uVar3 = FUN_005377b0(param_1);
          FUN_00468820(&local_30,uVar3);
        }
      }
      else if (uVar4 == 1) {
        uVar5 = FUN_00537870(param_1);
        FUN_00468700(&local_30,uVar5);
      }
      else {
        if (uVar4 != 2) goto LAB_0053be20;
        local_3f = FUN_005605c0(param_1,1);
        local_40 = 1;
        FUN_00468950(&local_30,&local_40);
      }
    }
    else {
      if (uVar4 != 4) {
        if (uVar4 == 5) goto LAB_0053bccf;
        goto LAB_0053be20;
      }
      puVar6 = (undefined *)FUN_00536180(param_1);
      if (puVar6 == &DAT_00403a88) {
        local_48 = FUN_005377f0(param_1);
        FUN_004688a0(&local_30,local_48);
      }
      else {
        pbVar7 = (byte *)FUN_005361b0(param_1);
        bVar1 = *pbVar7;
        if (bVar1 < 3) {
          uVar5 = FUN_005377f0(param_1);
          FUN_00468860(&local_30,uVar5);
        }
        else if (bVar1 == 3) {
          FUN_00468860(&local_30,(double)*(longlong *)(param_1 + 0x10));
        }
        else if (bVar1 == 4) {
          FUN_004688e0(&local_30,*(undefined8 *)(param_1 + 0x10));
        }
      }
    }
  }
  else if (uVar4 < 0x10) {
    if (uVar4 == 0xf) {
      FUN_00537950(param_1,&local_60);
      FUN_00468a50(&local_30,local_60);
    }
    else {
      if (uVar4 != 9) {
        if (uVar4 - 10 < 2) goto LAB_0053bccf;
LAB_0053be20:
        local_b9 = 0;
        goto LAB_0053be91;
      }
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0x10));
      FUN_00468a10(&local_30,local_58);
    }
  }
  else if (uVar4 == 0x10) {
    plVar8 = (longlong *)FUN_005361b0(param_1);
    lVar9 = FUN_005361b0(param_1);
    if (*(longlong *)(lVar9 + 8) < *plVar8) {
      uVar5 = FUN_00560380(param_1,1);
      FUN_00468670(&local_30,uVar5);
    }
    else {
      uVar5 = FUN_00537870(param_1);
      FUN_00468700(&local_30,uVar5);
    }
  }
  else {
    if (uVar4 != 0x12) goto LAB_0053be20;
LAB_0053bccf:
    FUN_005379a0(param_1,&local_50);
    FUN_00468a10(&local_30,local_50);
  }
  if (param_2 == &DAT_004013f0) {
    FUN_00468c40(&local_98,&local_30);
    FUN_00560900(&local_80,&local_98);
    FUN_00417c40(param_3,&local_80,&DAT_00527bf8);
  }
  else {
    FUN_00560940(&local_b8,&local_30);
    FUN_00417c40(param_3,&local_b8,&DAT_00527bf8);
  }
  local_b9 = 1;
LAB_0053be91:
  FUN_00417740(&local_b8,&DAT_00527bf8);
  FUN_00460ba0(&local_98);
  FUN_00417740(&local_80,&DAT_00527bf8);
  FUN_0041b800(&local_60);
  FUN_00414560(&local_58,2);
  FUN_00460ba0(&local_30);
  return local_b9;
}

