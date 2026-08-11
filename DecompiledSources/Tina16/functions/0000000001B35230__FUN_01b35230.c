/* Ghidra address: 01b35230 */
/* Ghidra symbol: FUN_01b35230 */


void FUN_01b35230(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x44c;
  FUN_00414480(local_40);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_50);
  if (local_50 != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_58);
    uVar4 = 0;
    if (local_58 != 0) {
      uVar4 = *(uint *)(local_58 + -4);
    }
    puVar6 = (undefined *)(ulonglong)uVar4;
    iVar2 = 1;
    if (0 < (int)uVar4) {
      puVar6 = (undefined *)(ulonglong)uVar4;
      do {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_60);
        FUN_00416780(&local_68,*(undefined2 *)(local_60 + -2 + (longlong)iVar2 * 2));
        FUN_00416ad0(local_40,local_68);
        iVar2 = iVar2 + 1;
        uVar4 = (int)puVar6 - 1;
        puVar6 = (undefined *)(ulonglong)uVar4;
      } while (uVar4 != 0);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_70);
    iVar2 = 0;
    if (local_70 != 0) {
      iVar2 = *(int *)(local_70 + -4);
    }
    if (0 < iVar2) {
      FUN_01b34a90(param_1,param_2);
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      iVar2 = *(int *)(param_1 + 0x764) + 1;
      if (iVar2 < 9) {
        puVar6 = PTR_DAT_020013a0 + (longlong)iVar2 * 8 + -8;
        do {
          FUN_00414480(puVar6);
          iVar2 = iVar2 + 1;
          puVar6 = puVar6 + 8;
        } while (iVar2 != 9);
      }
      FUN_0064dd90(*(undefined8 *)(DAT_02110d00 + 0x710),&local_78);
      FUN_0043ea00(&local_48,local_78);
      FUN_01b35050(&local_80,local_48,PTR_DAT_020013a0);
      FUN_00414b50(&local_48,local_80);
      iVar2 = *(int *)(param_1 + 0x764);
      iVar3 = 1;
      plVar7 = (longlong *)PTR_DAT_020013a0;
      if (0 < iVar2) {
        do {
          if (*plVar7 == 0) {
            if (iVar3 < 2) {
              puVar6 = (undefined *)CONCAT62((int6)((ulonglong)puVar6 >> 0x10),0x41);
            }
            else {
              uVar4 = FUN_01b34f50(PTR_DAT_020013a0);
              puVar6 = (undefined *)(ulonglong)uVar4;
            }
            FUN_00416780(plVar7,(ulonglong)puVar6 & 0xffffffff);
            FUN_00416780(&local_88,(ulonglong)puVar6 & 0xffffffff);
            FUN_00416ad0(&local_48,local_88);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
          plVar7 = plVar7 + 1;
        } while (iVar2 != 0);
      }
      FUN_0064de00(*(undefined8 *)(DAT_02110d00 + 0x710),local_48);
    }
    iVar3 = FUN_0043fc00(local_40[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x718),&DAT_01b3575c);
    iVar5 = 1;
    puVar8 = (undefined8 *)PTR_DAT_020013a0;
    iVar2 = iVar3;
    if (0 < iVar3) {
      do {
        uVar1 = *(undefined8 *)(param_1 + 0x718);
        FUN_0064dd90(uVar1,&local_90);
        FUN_00416ad0(&local_90,*puVar8);
        FUN_0064de00(uVar1,local_90);
        if (iVar5 < iVar3) {
          uVar1 = *(undefined8 *)(param_1 + 0x718);
          FUN_0064dd90(uVar1,&local_98);
          FUN_00416ad0(&local_98,&DAT_01b3576c);
          FUN_0064de00(uVar1,local_98);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
        puVar8 = puVar8 + 1;
      } while (iVar2 != 0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x718);
    FUN_0064dd90(uVar1,&local_a0);
    FUN_00416ad0(&local_a0,&DAT_01b3577c);
    FUN_0064de00(uVar1,local_a0);
    if (iVar3 < 5) {
      (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
    }
    if (iVar3 < 6) {
      (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
    }
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_a8,0x88e);
    FUN_00414ad0(param_1 + 0x5fd8,local_a8);
  }
  FUN_00414480(&local_a8);
  FUN_00414560(&local_a0,3);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_48,2);
  return;
}

