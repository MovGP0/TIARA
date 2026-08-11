/* Ghidra address: 00af6730 */
/* Ghidra symbol: FUN_00af6730 */


void FUN_00af6730(longlong param_1,longlong param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  iVar1 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x8b8));
  if (((*(int *)(param_1 + 0x4c4) < 1) || (*(longlong *)(param_1 + 0x8b8) == 0)) ||
     ((iVar1 == 0 &&
      ((*(char *)(param_1 + 0x8c0) == param_6 && (iVar2 = FUN_00af5fb0(param_1), param_4 == iVar2)))
      ))) {
    FUN_00410f20(param_5);
  }
  else {
    lVar4 = FUN_00affd90(*(longlong *)(param_1 + 0x8a8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x8a8) + 0x10));
    if ((lVar4 != 0) && (param_2 != 0)) {
      FUN_00414ad0(lVar4 + 8,param_2);
      FUN_00414ad0(lVar4 + 0x10,param_3);
      *(int *)(lVar4 + 0x18) = param_4;
      *(char *)(lVar4 + 0x1c) = param_6;
      if (iVar1 == 0) {
        FUN_00410f20();
      }
      else {
        *(undefined8 *)(lVar4 + 0x20) = param_5;
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x8a8) + 0x10);
      if (-1 < iVar1 + -1) {
        do {
          FUN_00affc80(*(undefined8 *)(param_1 + 0x8a8),0);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x8a8) + 0x10) = 0;
    lVar4 = FUN_00410e60(&DAT_00ae9850,1);
    FUN_00414ad0(lVar4 + 8,*(undefined8 *)(param_1 + 0x8b8));
    FUN_00414ad0(lVar4 + 0x10,*(undefined8 *)(param_1 + 0x8e0));
    uVar3 = FUN_00af5fb0(param_1);
    *(undefined4 *)(lVar4 + 0x18) = uVar3;
    *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x8c0);
    FUN_00affd70(*(undefined8 *)(param_1 + 0x8a8),0,lVar4);
    while( true ) {
      iVar1 = FUN_00affcf0(*(undefined8 *)(param_1 + 0x8a8));
      if (iVar1 <= *(int *)(param_1 + 0x4c4)) break;
      FUN_00affc80(*(undefined8 *)(param_1 + 0x8a8),*(int *)(param_1 + 0x4c4));
    }
    if (*(longlong *)(param_1 + 0x558) != 0) {
      (**(code **)(param_1 + 0x558))(*(undefined8 *)(param_1 + 0x560),param_1);
    }
  }
  return;
}

