/* Ghidra address: 005c10b0 */
/* Ghidra symbol: FUN_005c10b0 */


void FUN_005c10b0(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  ushort *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  uint uVar7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort *local_28;
  undefined8 local_20;
  
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  if (param_1 != 0) {
    local_28 = (ushort *)FUN_00416740(param_1);
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = *(int *)(param_1 + -4);
    }
    puVar1 = local_28 + (iVar4 + -1);
    FUN_00416780(&local_30,DAT_01de68c8);
    iVar4 = FUN_004170c0(local_30,param_1,1);
    if (iVar4 + -1 < 0) {
      uVar7 = 0;
      FUN_005c0950(&local_38,&local_28,puVar1,1,param_1,2);
      uVar3 = FUN_0043fc00(local_38);
      *param_2 = uVar3;
      FUN_005c0a30(&local_40,&local_28,puVar1,&DAT_005c17cc,DAT_01de68c6,uVar7 & 0xffffff00,0,1,
                   param_1,2);
      uVar3 = FUN_0043fc00(local_40);
      *param_3 = uVar3;
      FUN_005c0a30(&local_48,&local_28,puVar1,&DAT_005c17cc,DAT_01de68c6,1,0,1,param_1,2);
      uVar3 = FUN_0043fc00(local_48);
      *param_4 = uVar3;
      FUN_005c0a30(&local_20,&local_28,puVar1,&LAB_005c17e0,DAT_01de68ca,1,0,1,param_1,0x12);
      iVar4 = FUN_00416db0(local_20,&LAB_005c17e0);
      if (iVar4 != 0) {
        FUN_00416780(&local_50,*(undefined2 *)(PTR_DAT_02004830 + 0x17a));
        FUN_00416ba0(&local_20,local_50,local_20);
        dVar6 = (double)FUN_00458270(local_20);
        uVar3 = FUN_0040c770(dVar6 * 1000.0);
        *param_5 = uVar3;
      }
    }
    else {
      uVar7 = 0;
      FUN_005c0950(&local_58,&local_28,puVar1,1,param_1,2);
      uVar3 = FUN_0043fc00(local_58);
      *param_2 = uVar3;
      FUN_005c0a30(&local_60,&local_28,puVar1,&DAT_005c17cc,DAT_01de68c8,uVar7 & 0xffffff00,0,1,
                   param_1,2);
      uVar3 = FUN_0043fc00(local_60);
      *param_3 = uVar3;
      FUN_005c0a30(&local_68,&local_28,puVar1,&DAT_005c17cc,DAT_01de68c8,1,0,1,param_1,2);
      uVar3 = FUN_0043fc00(local_68);
      *param_4 = uVar3;
      FUN_005c0a30(&local_20,&local_28,puVar1,&LAB_005c17e0,DAT_01de68ca,1,0,1,param_1,0x12);
      iVar4 = FUN_00416db0(local_20,&LAB_005c17e0);
      if (iVar4 != 0) {
        FUN_00416780(&local_70,*(undefined2 *)(PTR_DAT_02004830 + 0x17a));
        FUN_00416ba0(&local_20,local_70,local_20);
        dVar6 = (double)FUN_00458270(local_20);
        uVar3 = FUN_0040c770(dVar6 * 1000.0);
        *param_5 = uVar3;
      }
    }
    uVar2 = *local_28;
    if ((uVar2 == 0x2d) || (uVar2 == 0x2b)) {
      local_28 = local_28 + 1;
      if ((*local_28 < 0x30) || (0x39 < *local_28)) {
        FUN_005c0900(1,param_1);
      }
      FUN_00416780(&local_78,uVar2);
      FUN_005c0950(&local_80,&local_28,puVar1,2,param_1,2);
      FUN_00416ad0(&local_78,local_80);
      uVar5 = FUN_0043fc00(local_78);
      *param_6 = uVar5;
      if (*local_28 == 0x3a) {
        FUN_00416780(&local_88,uVar2);
        FUN_005c0a30(&local_90,&local_28,puVar1,&DAT_005c17cc,DAT_01de68c8,1,1,2,param_1,2);
        FUN_00416ad0(&local_88,local_90);
        uVar5 = FUN_0043fc00(local_88);
        *param_7 = uVar5;
      }
      else {
        FUN_00416780(&local_98,uVar2);
        FUN_005c0a30(&local_a0,&local_28,puVar1,&DAT_005c17cc,DAT_01de68c6,1,1,2,param_1,2);
        FUN_00416ad0(&local_98,local_a0);
        uVar5 = FUN_0043fc00(local_98);
        *param_7 = uVar5;
      }
    }
  }
  FUN_00414560(&local_a0,0xf);
  FUN_00414480(&local_20);
  return;
}

