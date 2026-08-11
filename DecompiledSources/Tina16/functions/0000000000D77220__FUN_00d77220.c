/* Ghidra address: 00d77220 */
/* Ghidra symbol: FUN_00d77220 */


undefined8 FUN_00d77220(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  cVar1 = *(char *)((longlong)param_1 + 0x79);
  if (((cVar1 == '\x16') || (cVar1 == '\x15')) || (cVar1 == '\x18')) {
    uVar3 = 0;
  }
  else if ((*(int *)((longlong)param_1 + 0x84) < 1) || ((int)param_1[0x11] < 1)) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00d77c90(param_1);
    if (iVar2 < 1) {
      uVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
    }
    else if ((*(char *)((longlong)param_1 + 0xd1) == '\0') &&
            (*(char *)((longlong)param_1 + 0xf5) != '\0')) {
      uVar3 = thunk_FUN_03976db5(0,0,0,0);
      iVar2 = FUN_00d77c90();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_00d77ca0(param_1,iVar6);
          if (*(char *)(lVar4 + 0x8c) != '\0') {
            uVar5 = FUN_00d77ca0(param_1,iVar6);
            lVar4 = FUN_00d77220(uVar5);
            if (lVar4 != 0) {
              thunk_FUN_04199bfe(uVar3,uVar3,lVar4,2);
              thunk_FUN_0416f828(lVar4);
            }
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
    }
  }
  return uVar3;
}

