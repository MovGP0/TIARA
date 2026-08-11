/* Ghidra address: 01a00e80 */
/* Ghidra symbol: FUN_01a00e80 */


void FUN_01a00e80(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined6 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  short *local_40;
  undefined8 local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_a0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = (short *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_a8 = 0;
  local_a4 = 0;
  bVar1 = true;
  puVar9 = &local_2a;
  FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,&local_29,puVar9,&local_2b);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1c8))();
  uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
  uVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x298))
                (*(longlong **)(param_1 + 0x58),&local_40,uVar6);
      if (*local_40 == 0x4e) {
        local_a8 = local_a8 + 1;
      }
      else if ((*local_40 != 0x56) && (local_a4 = local_a4 + 1, local_a4 == 1)) {
        iVar5 = FUN_004170c0(&DAT_01a0146c,local_40,1);
        bVar1 = 0 < iVar5;
      }
      uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_a4 == 1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1c8))(*(longlong **)(param_1 + 0x58));
    FUN_019f0400(param_1,&local_50,iVar2 + -1,0);
    FUN_00414b50(&local_58,&DAT_01a01480);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1c8))(*(longlong **)(param_1 + 0x58));
    FUN_019f0400(param_1,&local_50,iVar2 + -2,0);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1c8))(*(longlong **)(param_1 + 0x58));
    FUN_019f0400(param_1,&local_58,iVar2 + -1,0);
  }
  uVar7 = (undefined6)(uVar6 >> 0x10);
  if (bVar1) {
    uVar4 = (undefined4)CONCAT62(uVar7,4);
  }
  else {
    uVar4 = (undefined4)CONCAT62(uVar7,6);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_78);
  FUN_019ee820(param_1,local_70,uVar4,local_78,CONCAT44(uVar10,0xb));
  puVar12 = &DAT_01a01490;
  uVar11 = local_58;
  FUN_00416cd0(&local_38,6,local_70[0],&DAT_01a01490,local_50,&DAT_01a01490,local_58,&DAT_01a01490);
  lVar3 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,&local_29,&local_2a,&local_2b);
  if (*(char *)(lVar3 + 0x40) == '\x02') {
    FUN_01a00850(param_1,&local_48,*(undefined8 *)(lVar3 + 0x20),local_a8,&local_60);
    FUN_00416cd0(&local_38,4,local_38,L"VALUE = {",local_48,&DAT_01a014c0,uVar11,puVar12);
  }
  else {
    FUN_01a00850(param_1,&local_48,*(undefined8 *)(lVar3 + 0x20),local_a8,&local_60);
    FUN_00416cd0(&local_38,4,local_38,L"TABLE {",local_48,L"} = ",uVar11,puVar12);
    uVar8 = *(ushort *)(lVar3 + 0x48) / 2;
    iVar2 = 0;
    if (-1 < (int)(uVar8 - 1)) {
      do {
        FUN_016b9450(&local_80,
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + (longlong)(iVar2 * 2) * 8));
        FUN_00416880(&local_88,local_80);
        FUN_016b9450(&local_90,
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + (longlong)(iVar2 * 2 + 1) * 8));
        FUN_00416880(&local_98,local_90);
        FUN_00416cd0(&local_38,6,local_38,&DAT_01a01504,local_88,&DAT_01a01514,local_98,
                     &LAB_01a01524);
        iVar2 = iVar2 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_38);
  iVar2 = (**(code **)(*local_60 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_60 + 0x18))(local_60,&local_a0,iVar5);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_a0);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_60);
  FUN_00414560(&local_a0,2);
  FUN_004144d0(&local_90);
  FUN_00414480(&local_88);
  FUN_004144d0(&local_80);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_58,5);
  return;
}

