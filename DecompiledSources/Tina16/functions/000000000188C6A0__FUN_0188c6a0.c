/* Ghidra address: 0188c6a0 */
/* Ghidra symbol: FUN_0188c6a0 */


void FUN_0188c6a0(longlong *param_1,int param_2,longlong param_3,longlong param_4,char param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = param_2 != -1;
  if ((param_2 != 0x100) && (iVar3 = FUN_0188b8b0(param_1,param_2), iVar3 == -1)) {
    param_2 = 0x100;
  }
  if (param_2 == 0x100 && bVar7) {
    iVar5 = 9;
    iVar3 = FUN_0188b8b0(param_1,9);
    if (iVar3 == -1) {
      iVar5 = -1;
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))((longlong *)param_1[0xe]);
    if ((1 < iVar3) && (iVar5 == -1)) {
      iVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))();
      iVar6 = 0;
      if (-1 < iVar3 + -1) {
        do {
          iVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],iVar6);
          if (iVar4 != 0x100) {
            iVar5 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],iVar6);
            break;
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    (**(code **)(*param_1 + 0x50))(param_1,iVar5,0,0,param_5);
    param_1[0xf] = param_4;
    param_1[0x10] = param_3;
  }
  else {
    lVar1 = param_1[0x1c];
    *(undefined4 *)(lVar1 + 0x48) = 3;
    *(short *)(lVar1 + 0x4e) = (short)param_2;
    if (param_5 == '\0') {
      *(undefined2 *)(lVar1 + 0x4c) = 1;
    }
    else {
      *(undefined2 *)(lVar1 + 0x4c) = 2;
    }
    FUN_0188c570(param_1);
    cVar2 = FUN_0188caa0(param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  *(int *)(param_1 + 0xd) = param_2;
  *(char *)(param_1 + 0x15) = param_5;
  return;
}

