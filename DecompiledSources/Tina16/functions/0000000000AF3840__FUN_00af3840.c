/* Ghidra address: 00af3840 */
/* Ghidra symbol: FUN_00af3840 */


void FUN_00af3840(longlong *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,int param_5
                 )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined4 *puVar8;
  undefined4 *puVar10;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar13;
  undefined8 local_60;
  byte local_55;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined6 uVar7;
  undefined4 uVar9;
  undefined4 uVar11;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_60 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00650d70(param_1,param_3,param_4,param_5);
  if ((*(ushort *)(param_1 + 0x114) & 0x100) != 0) {
    if (((*(ushort *)(param_1 + 0x114) & 0x40) == 0) &&
       (uVar2 = param_5 - (int)param_1[0x12a], uVar5 = (int)uVar2 >> 0x1f,
       0x14 < (int)((uVar2 ^ uVar5) - uVar5))) {
      *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 0x40;
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar4,0x466,0,0);
    }
    goto LAB_00af3d64;
  }
  local_20 = 0;
  local_40 = 0;
  FUN_00414480(&local_28);
  uVar7 = (undefined6)((ulonglong)unaff_RBX >> 0x10);
  uVar6 = CONCAT62(uVar7,0xfffe);
  FUN_00414480(param_1 + 0x129);
  uVar4 = FUN_00414480(param_1 + 0x129);
  uVar2 = FUN_00af5250(param_1,param_4,param_5,&local_20,local_38,uVar4);
  if ((uVar2 & 2) != 0) {
    uVar6 = CONCAT62(uVar7,0xffeb);
  }
  if ((uVar2 & 1) != 0) {
    uVar6 = CONCAT62((int6)(uVar6 >> 0x10),0xffeb);
    FUN_00414b50(&local_28,*(undefined8 *)(local_20 + 8));
    FUN_00414b50(&local_30,*(undefined8 *)(local_20 + 0x10));
    (**(code **)(*(longlong *)param_1[0x11e] + 0x60))
              ((longlong *)param_1[0x11e],*(undefined8 *)(local_20 + 0x20));
    FUN_00af3740(param_1,&local_60,*(undefined4 *)(local_20 + 0x28),*(undefined4 *)(local_20 + 0x2c)
                );
    FUN_00414ad0(param_1 + 0x120,local_60);
    FUN_00410f20(local_20);
  }
  if (param_1[0x112] != 0) {
    puVar8 = &local_44;
    puVar10 = &local_48;
    cVar1 = FUN_00af3590(param_1,param_4,param_5,&local_40,puVar8,puVar10);
    uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
    uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
    if (cVar1 != '\0') {
      cVar1 = FUN_004113d0(local_40,&PTR_FUN_00a7e788);
      if (cVar1 != '\0') {
        (*(code *)param_1[0x112])
                  (param_1[0x113],param_1,local_40,param_3,CONCAT44(uVar9,param_4),
                   CONCAT44(uVar11,param_5),CONCAT44(uVar12,local_44),CONCAT44(uVar13,local_48));
      }
    }
  }
  if ((param_1[0xb1] == 0) && (param_1[0xb3] == 0)) {
LAB_00af3b6d:
    iVar3 = FUN_00a9bd50(param_1[0x116],*(undefined8 *)(param_1[0xe8] + 0x490),param_4,
                         param_5 + *(int *)(param_1[0x116] + 0x94),local_4c,local_54,local_50,
                         &local_55);
    if (((local_55 & -1 < iVar3) != 0) && ((short)uVar6 != -0x15)) {
      uVar2 = FUN_00af6df0(param_1);
      uVar6 = (ulonglong)uVar2;
    }
  }
  else {
    puVar8 = &local_44;
    puVar10 = &local_48;
    cVar1 = FUN_00af3590(param_1,param_4,param_5,&local_40,puVar8,puVar10);
    uVar13 = (undefined4)((ulonglong)puVar10 >> 0x20);
    uVar12 = (undefined4)((ulonglong)puVar8 >> 0x20);
    if (cVar1 == '\0') goto LAB_00af3b6d;
    cVar1 = FUN_004113d0(local_40,&PTR_FUN_00a83768);
    if (cVar1 == '\0') goto LAB_00af3b6d;
    if ((short)uVar6 != -0x15) {
      uVar6 = CONCAT62((int6)(uVar6 >> 0x10),0xfffe);
    }
    if (param_1[0xb3] != 0) {
      (*(code *)param_1[0xb3])
                (param_1[0xb4],param_1,local_40,param_3,CONCAT44(uVar12,local_44),
                 CONCAT44(uVar13,local_48));
    }
  }
  FUN_0064e140(param_1[0xe8],uVar6 & 0xffffffff);
  if (((short)uVar6 == -0x15) || (*(longlong *)(param_1[0x116] + 0x270) != 0)) {
    FUN_00742eb0(param_1[0xe9],1);
  }
  else {
    FUN_00742eb0(param_1[0xe9],0);
  }
  iVar3 = FUN_00416db0(local_28,param_1[0x128]);
  if (iVar3 == 0) {
    iVar3 = FUN_00416db0(local_30,param_1[0x127]);
    if (iVar3 != 0) goto LAB_00af3c6c;
  }
  else {
LAB_00af3c6c:
    FUN_00414ad0(param_1 + 0x128,local_28);
    FUN_00414ad0(param_1 + 0x127,local_30);
    if (param_1[0xfc] != 0) {
      (*(code *)param_1[0xfc])(param_1[0xfd],param_1,local_28);
    }
  }
  if ((((param_3 & 8) != 0) && ((*(ushort *)(param_1 + 0x114) & 0x40) == 0)) &&
     ((param_5 < 1 || (*(int *)((longlong)param_1 + 0x9c) <= param_5)))) {
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 0x40;
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar4,0x466,0,0);
  }
  if (((param_3 & 8) != 0) && (*(char *)((longlong)param_1 + 0x4dc) == '\0')) {
    (**(code **)(*param_1 + 0x468))(param_1,param_4,param_5);
  }
LAB_00af3d64:
  FUN_00414480(&local_60);
  FUN_00414560(&local_30,2);
  return;
}

