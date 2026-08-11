/* Ghidra address: 01be6c90 */
/* Ghidra symbol: FUN_01be6c90 */


void FUN_01be6c90(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  
  FUN_01c02b70(param_1);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0415357f(6,uVar3,0xfffffffd,0);
    }
    else {
      cVar1 = FUN_0065be20(param_1);
      if (cVar1 != '\0') {
        uVar3 = FUN_0065b870(param_1);
        iVar2 = thunk_FUN_0419e3da(uVar3);
        if ((iVar2 != 0) && ((longlong *)param_1[0xba] != param_1)) {
          uVar3 = FUN_0065b870(param_1);
          thunk_FUN_0415357f(7,uVar3,0xfffffffd,0);
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
    lVar4 = FUN_01c01290(param_1);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x94) != '\0')) {
      FUN_0064dbe0(*(undefined8 *)(lVar4 + 0x80),0);
    }
    lVar4 = FUN_01c01230(param_1);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x94) != '\0')) {
      FUN_0064dbe0(*(undefined8 *)(lVar4 + 0x80),0);
    }
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*param_1 + 0x2e8))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_01c019a0(param_1);
          lVar4 = FUN_01bfb960(uVar3,iVar6);
          if (*(longlong *)(lVar4 + 0x70) != 0) {
            uVar3 = FUN_01c019a0(param_1);
            lVar4 = FUN_01bfb960(uVar3,iVar6);
            (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x38))(*(longlong **)(lVar4 + 0x70));
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if (param_1[0x93] != 0) {
      FUN_0065b830(param_1);
      pcVar5 = (code *)FUN_00411550(param_1,0xffee);
      (*pcVar5)(param_1);
      (**(code **)(*param_1 + 0x440))(param_1,param_1[0xb5],param_1[0xb6]);
      if (param_1[0xb5] != 0) {
        FUN_01be1a40(param_1,1);
      }
      if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) && (param_1[0xba] != 0)) {
        thunk_FUN_041af582(0,2);
        thunk_FUN_041af582(L"MenuPopup",0x13);
      }
    }
  }
  return;
}

