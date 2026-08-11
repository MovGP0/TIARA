/* Ghidra address: 013c4e30 */
/* Ghidra symbol: FUN_013c4e30 */


void FUN_013c4e30(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined6 uVar10;
  ulonglong uVar9;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_52;
  char local_51;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  iVar3 = (**(code **)(*param_2 + 0x28))();
  local_80 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar6 = *param_2;
      (**(code **)(lVar6 + 0x18))(param_2,local_40,local_80);
      uVar10 = (undefined6)((ulonglong)lVar6 >> 0x10);
      cVar2 = FUN_00f60aa0(local_40[0]);
      if (cVar2 == '\0') {
        FUN_013c08d0(&local_60,local_40[0],CONCAT62(uVar10,0x5f) & 0xffffffff);
        lVar6 = FUN_00f1f8f0(&DAT_00f1e400,1,local_40[0],local_60,0);
      }
      else {
        lVar6 = FUN_00f1f8f0(&DAT_00f1e400,1,local_40[0],0,cVar2);
      }
      uVar9 = CONCAT62(uVar10,0x61);
      bVar1 = true;
      local_7c = 0;
      while (((bVar1 && (*(char *)(lVar6 + 0x18) != '\0')) && (local_7c < 0x1f))) {
        bVar1 = false;
        FUN_00f1fb30(*(undefined8 *)(param_1 + 0x280),&local_48,*(undefined8 *)(lVar6 + 0x10));
        if (local_48 != 0) {
          bVar1 = true;
          local_7c = local_7c + 1;
          uVar9 = CONCAT62((int6)(uVar9 >> 0x10),(short)uVar9 + 1);
          FUN_013c08d0(&local_68,local_40[0],uVar9 & 0xffffffff);
          FUN_00414ad0(lVar6 + 0x10,local_68);
        }
      }
      if (local_7c < 0x1f) {
        FUN_00f1fd50(*(undefined8 *)(param_1 + 0x280),lVar6);
      }
      local_80 = local_80 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = -1;
  iVar4 = (**(code **)(*param_2 + 0x28))();
  local_80 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_70,local_80);
      uVar5 = FUN_00f1fca0(*(undefined8 *)(param_1 + 0x280),local_70);
      lVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8),uVar5);
      uVar7 = (**(code **)(*param_2 + 0x30))(param_2,local_80);
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      if ((*(char *)(*(longlong *)(lVar6 + 0x20) + 8) == '\0') && (iVar3 == -1)) {
        iVar3 = local_80;
      }
      if (param_3 == (longlong *)0x0) {
        uVar7 = FUN_013c1250(*(longlong *)(lVar6 + 0x20),&local_51,&local_52);
      }
      else {
        uVar7 = (**(code **)(*param_3 + 0x30))(param_3,local_80);
        local_51 = '\0';
      }
      if (local_51 != '\0') {
        (**(code **)(*param_2 + 0x18))(param_2,&local_50,local_80);
        uVar8 = FUN_019a45d0();
        uVar8 = FUN_019ae650(uVar8,local_50);
        FUN_00f20cc0(*(undefined8 *)(param_1 + 0x300),uVar8);
      }
      uVar7 = FUN_013c13c0(*(undefined8 *)(lVar6 + 0x20),uVar7);
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      local_80 = local_80 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  iVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0 < iVar4) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_78,iVar3);
    uVar5 = FUN_00f1fca0(*(undefined8 *)(param_1 + 0x280),local_78);
    lVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8),uVar5);
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(lVar6 + 0x28);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(param_1 + 0x2c8) = uVar7;
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x10))(*(longlong **)(param_1 + 0x2c0),uVar7,0);
  }
  FUN_017e9a20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2c0),
               *(undefined8 *)(param_1 + 0x2c8));
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_50,3);
  return;
}

