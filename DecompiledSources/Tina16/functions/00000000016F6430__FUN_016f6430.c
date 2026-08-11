/* Ghidra address: 016f6430 */
/* Ghidra symbol: FUN_016f6430 */


void FUN_016f6430(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  code *local_40 [3];
  
  if ((char)param_2 == '\x06') {
    *(undefined8 *)(param_1 + 0x360) = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 0x334) = 0;
  }
  FUN_01b08960(param_1,param_2);
  FUN_01b0f630(param_1);
  FUN_01b0f860(*(undefined8 *)(param_1 + 0x1378),param_3);
  FUN_01b0f870(*(undefined8 *)(param_1 + 0x1378));
  uVar3 = FUN_00b92140(0);
  lVar1 = *(longlong *)(param_1 + 0x110);
  *(char *)(lVar1 + 0x138) = (char)param_2;
  if ((*(char *)(lVar1 + 10) == '\0') &&
     ((*(char *)(lVar1 + 0xe) == '\0' || (*(char *)(lVar1 + 0xf) == '\0')))) {
    if (*(char *)(lVar1 + 0x10) != '\0') {
      FUN_01662130(lVar1,1);
      *(undefined1 *)(lVar1 + 0x10) = 0;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 10) = 0;
    if ((*(char *)(lVar1 + 0xe) != '\0') && (*(char *)(lVar1 + 0xf) != '\0')) {
      *(undefined1 *)(lVar1 + 0xe) = 0;
      *(undefined1 *)(lVar1 + 0xf) = 0;
      *(undefined1 *)(lVar1 + 0xd) = 1;
    }
    *(undefined1 *)(lVar1 + 9) = 1;
    FUN_01662130(lVar1,0);
  }
  if ((((*(int *)(lVar1 + 0x14) != 0) && (*(char *)(lVar1 + 0xf4) != '\0')) &&
      (*(char *)(lVar1 + 0xf5) != '\0')) &&
     (*(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + -1, *(int *)(lVar1 + 0x14) == 0)) {
    FUN_01662fd0(lVar1);
    *(undefined1 *)(lVar1 + 0xe) = 1;
  }
  dVar4 = (double)FUN_00b92140(uVar3);
  *(double *)PTR_DAT_020039e0 = dVar4 + *(double *)PTR_DAT_020039e0;
  uVar3 = FUN_00b92140(0);
  if (*(char *)(lVar1 + 9) == '\0') {
    uVar3 = FUN_016ed780(param_1,param_2);
    *(undefined8 *)(lVar1 + 0x128) = uVar3;
    if (*(char *)(lVar1 + 8) == '\0') {
      DAT_0210fef4 = 0;
      DAT_0210fef5 = 0;
    }
    else {
      FUN_0165d830(lVar1);
      *(undefined1 *)(lVar1 + 10) = 1;
      DAT_0210fef4 = *PTR_DAT_02003a50;
      DAT_0210fef5 = 0;
      *(char *)(lVar1 + 0xe) = *(char *)(lVar1 + 0xf4);
      if (*(char *)(lVar1 + 0xf4) != '\0') {
        FUN_01662fd0(lVar1);
      }
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined1 *)(lVar1 + 0x10) = 0;
      *(undefined1 *)(lVar1 + 8) = 0;
    }
    uVar3 = FUN_00b92140(0);
    iVar2 = 0;
    while (iVar2 < *(int *)(param_1 + 0x2d8)) {
      iVar2 = iVar2 + 1;
      FUN_016ef420(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar2 * 8),
                   param_1,param_2);
    }
    FUN_00ded900(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar2 * 8),param_1,
                 param_2);
    local_40[0] = FUN_00ded900;
    if (*(char *)(*(longlong *)(param_1 + 0x110) + 10) != '\0') {
      FUN_0165ddf0(*(longlong *)(param_1 + 0x110),local_40,1,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar2 * 8),0);
    }
  }
  else {
    *(uint *)(lVar1 + 0x110) = param_2 & 0xff;
    FUN_01662310(lVar1);
  }
  FUN_0165d510(*(undefined8 *)(param_1 + 0x110));
  dVar4 = (double)FUN_00b92140(uVar3);
  *(double *)PTR_DAT_020032f0 = dVar4 + *(double *)PTR_DAT_020032f0;
  return;
}

