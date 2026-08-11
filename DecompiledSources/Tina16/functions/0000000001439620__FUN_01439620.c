/* Ghidra address: 01439620 */
/* Ghidra symbol: FUN_01439620 */


void FUN_01439620(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00417c40(param_1 + 0x700,PTR_DAT_02001120,&DAT_01d0d0b8);
  iVar1 = FUN_004170c0(&LAB_01439888,*(undefined8 *)(param_1 + 0x6e0),1);
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + -4);
  }
  FUN_00416dc0(local_40,*(undefined8 *)(param_1 + 0x6e0),iVar1 + 1,uVar4);
  FUN_0043ea00(local_30,local_40[0]);
  FUN_00416dc0(&local_50,*(undefined8 *)(param_1 + 0x6e0),1,iVar1 + -1);
  FUN_0043ea00(&local_48,local_50);
  FUN_00414ad0(param_1 + 0x6e0,local_48);
  uVar8 = FUN_00b8f030(local_30[0]);
  FUN_014384c0(param_1 + 0xb31,uVar8);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x10);
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x6f8),iVar6);
      *(undefined8 *)(param_1 + 0x6f0) = uVar8;
      *(int *)(param_1 + 0x6e8) = iVar6;
      FUN_004169a0(&local_58,*(longlong *)(param_1 + 0x6f0) + 0xc);
      iVar2 = FUN_00416db0(local_58,*(undefined8 *)(param_1 + 0x6e0));
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x1038) = 1;
        puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x6f8),iVar6);
        puVar7 = (undefined8 *)(param_1 + 0xb31);
        for (lVar5 = 0x24; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)puVar3;
        *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar3 + 4);
        *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar3 + 6);
        break;
      }
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_014385d0(*(undefined8 *)(param_1 + 0x6b0),param_1 + 0x700);
  FUN_01439390(param_1);
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return;
}

