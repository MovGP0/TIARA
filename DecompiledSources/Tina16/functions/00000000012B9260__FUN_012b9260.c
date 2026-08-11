/* Ghidra address: 012b9260 */
/* Ghidra symbol: FUN_012b9260 */


void FUN_012b9260(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_40[0] = 0;
  local_30 = 0;
  uVar9 = 0;
  FUN_017cd4e0(local_40,*(undefined8 *)(param_1 + 0x750),param_2,*(undefined8 *)(param_1 + 0x748),0)
  ;
  FUN_00416ba0(&local_30,&DAT_012b9628,local_40[0]);
  iVar4 = -1;
  iVar6 = -1;
  plVar7 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
  iVar2 = (**(code **)(*plVar7 + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar7 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_148,iVar8);
      FUN_012b9130(param_1,local_140,local_148,1);
      FUN_004169a0(&local_150,local_140);
      iVar3 = FUN_00416db0(local_30);
      iVar6 = iVar4;
      if (iVar3 == 0) {
        iVar6 = iVar8;
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
      iVar4 = iVar6;
    } while (iVar2 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  iVar4 = *(int *)(lVar1 + 0x4ec);
  if ((-1 < iVar6) &&
     (((iVar6 < *(int *)(lVar1 + 0x4ec) || (iVar2 = FUN_00848350(lVar1), iVar4 + iVar2 <= iVar6)) &&
      (iVar4 = FUN_00848350(lVar1), iVar4 < *(int *)(lVar1 + 0x4e0))))) {
    iVar4 = FUN_00848350(lVar1);
    uVar5 = FUN_00b905e0((iVar6 - iVar4) + 1,0);
    FUN_00848d30(lVar1,uVar5);
  }
  plVar7 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
  iVar6 = (**(code **)(*plVar7 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar7 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_158,iVar4);
      FUN_012b9130(param_1,local_140,local_158,1);
      FUN_004169a0(&local_160,local_140);
      iVar2 = FUN_00416db0(local_30,local_160);
      uVar5 = (undefined4)(uVar9 >> 0x20);
      if (iVar2 == 0) {
        plVar7 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
        (**(code **)(*plVar7 + 0x48))(plVar7,iVar4,1);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_170,0,iVar4);
        uVar10 = CONCAT44(uVar5,0xff);
        FUN_012b8960(param_1,0,iVar4,local_170,uVar10);
        uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_170,1,iVar4);
        uVar9 = CONCAT44(uVar5,0xff);
        FUN_012b8960(param_1,1,iVar4,local_170,uVar9);
      }
      else {
        plVar7 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
        (**(code **)(*plVar7 + 0x48))(plVar7,iVar4,0);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_170,0,iVar4);
        uVar9 = uVar9 & 0xffffffff00000000;
        FUN_012b8960(param_1,0,iVar4,local_170,uVar9);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_170,1,iVar4);
        uVar9 = uVar9 & 0xffffffff00000000;
        FUN_012b8960(param_1,1,iVar4,local_170,uVar9);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_160,4);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

