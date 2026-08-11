/* Ghidra address: 00cf0f10 */
/* Ghidra symbol: FUN_00cf0f10 */


int FUN_00cf0f10(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_00419430(param_1 + 0x30,&DAT_0086e978);
  }
  iVar4 = 0;
  iVar5 = 0;
  while( true ) {
    if (iVar4 < param_4) {
      lVar3 = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8);
      }
      if ((lVar3 < 1) && (*(longlong *)(param_1 + 8) == 0)) {
        bVar7 = *(int *)(param_1 + 0x28) <
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x10);
      }
      else {
        bVar7 = true;
      }
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) break;
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8);
    }
    if ((lVar3 == 0) && (*(longlong *)(param_1 + 8) == 0)) {
      uVar2 = FUN_00cf1550(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x28));
      FUN_0086f700(&local_30,2);
      FUN_00cf1730(uVar2,local_40);
      FUN_00878e40(param_1 + 0x30,local_40[0],0xffffffff,local_30);
      lVar3 = FUN_00cf1fc0(uVar2,param_1 + 0x10);
      *(longlong *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        FUN_00878e40(param_1 + 0x30,&DAT_00cf1318,0xffffffff,0);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8);
    }
    if (0 < lVar3) {
      uVar2 = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + -8);
      }
      iVar1 = FUN_008764e0((longlong)(param_4 - iVar5),uVar2);
      if (0 < iVar1) {
        iVar6 = 0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          iVar6 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x30) + -8);
        }
        iVar6 = iVar6 - iVar1;
        FUN_00874e50(*(undefined8 *)(param_1 + 0x30),0,param_2,iVar5,iVar1);
        if (0 < iVar6) {
          FUN_00874e50(*(undefined8 *)(param_1 + 0x30),iVar1,param_1 + 0x30,0,iVar6);
        }
        FUN_00419260(param_1 + 0x30,&DAT_0086e978,1,(longlong)iVar6);
        iVar5 = iVar5 + iVar1;
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)iVar1;
        iVar4 = iVar4 + iVar1;
      }
    }
    if (iVar4 < param_4) {
      lVar3 = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8);
      }
      bVar7 = lVar3 == 0;
    }
    else {
      bVar7 = false;
    }
    if ((bVar7) && (*(longlong *)(param_1 + 8) != 0)) {
      iVar1 = FUN_0086e810(&LAB_0086e608,*(longlong *)(param_1 + 8),param_2,param_4 - iVar4,iVar5);
      if (iVar1 < 1) {
        FUN_00419430(param_1 + 0x30,&DAT_0086e978);
        if (*(char *)(param_1 + 0x10) == '\0') {
          FUN_004b6dc0(*(undefined8 *)(param_1 + 8),0);
          FUN_00878e40(param_1 + 0x30,&DAT_00cf1318,0xffffffff,0);
        }
        else {
          FUN_00410f20(*(undefined8 *)(param_1 + 8));
        }
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined1 *)(param_1 + 0x10) = 0;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      else {
        iVar5 = iVar5 + iVar1;
        iVar4 = iVar4 + iVar1;
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)iVar1;
      }
    }
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -8);
    }
    if (((lVar3 == 0) && (*(longlong *)(param_1 + 8) == 0)) &&
       (*(int *)(param_1 + 0x28) ==
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x10))) {
      FUN_00416cd0(&local_48,4,&LAB_00cf132c,*(undefined8 *)(param_1 + 0x18),&LAB_00cf132c,
                   &DAT_00cf1318);
      FUN_00878e40(param_1 + 0x30,local_48,0xffffffff,0);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  FUN_00414560(&local_48,2);
  FUN_0041b800(&local_30);
  return iVar4;
}

