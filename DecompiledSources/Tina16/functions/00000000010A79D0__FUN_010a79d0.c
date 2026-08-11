/* Ghidra address: 010a79d0 */
/* Ghidra symbol: FUN_010a79d0 */


void FUN_010a79d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  short unaff_DI;
  undefined1 local_62b [513];
  undefined1 local_42a [1034];
  
  if (((*(int *)(param_1 + 0xac) == 4) || (*(int *)(param_1 + 0xac) == 2)) ||
     (*(int *)(param_1 + 0xac) == 1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(int *)(param_1 + 0xac) == 4) || (*(int *)(param_1 + 0xac) == 1)) {
    unaff_DI = 0x2f;
  }
  else if (*(int *)(param_1 + 0xac) == 2) {
    unaff_DI = 0x2d;
  }
  if (*(int *)(param_1 + 0xa8) <= *(int *)(param_1 + 0xa4)) {
    do {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa8) + -1;
      while ((*(int *)(param_1 + 0xa8) <= *(int *)(param_1 + 0xa4) &&
             (cVar2 = FUN_01b215c0(*(undefined2 *)
                                    (*(longlong *)(param_1 + 0x98) + -2 +
                                    (longlong)*(int *)(param_1 + 0xa8) * 2),1), cVar2 != '\0'))) {
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      }
      if (bVar1) {
        if (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xa4) + -1) {
          if ((*(short *)(*(longlong *)(param_1 + 0x98) + -2 +
                         (longlong)*(int *)(param_1 + 0xa8) * 2) == unaff_DI) &&
             (*(short *)(*(longlong *)(param_1 + 0x98) + -2 +
                        (longlong)(*(int *)(param_1 + 0xa8) + 1) * 2) == unaff_DI)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(param_1 + 0x97) = uVar3;
        }
        else {
          *(undefined1 *)(param_1 + 0x97) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x97) = 0;
      }
      if ((*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xa4) + -1) &&
         (*(char *)(param_1 + 0x97) != '\0')) {
        *(int *)(param_1 + 0x90) = (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa8)) + 1;
        FUN_00416dc0(param_1 + 0x88,*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa8),
                     *(undefined4 *)(param_1 + 0x90));
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
        thunk_FUN_041b2403(uVar5,0xd6,&DAT_0202f920,
                           (longlong)(DAT_0202f930 + *(int *)(param_1 + 0xa0) + -1));
        uVar4 = thunk_FUN_0412a071((longlong)DAT_0202f91c,&DAT_009b9b00);
        *(undefined4 *)(param_1 + 0x84) = uVar4;
        uVar5 = FUN_00442620(local_42a,*(undefined8 *)(param_1 + 0x88));
        thunk_FUN_04193d0c((longlong)DAT_0202f91c,DAT_0202f920,DAT_0202f924,uVar5,
                           *(undefined4 *)(param_1 + 0x90));
        thunk_FUN_0412a071((longlong)DAT_0202f91c,*(undefined4 *)(param_1 + 0x84));
        return;
      }
      *(int *)(param_1 + 0x90) = (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xa0)) + -1;
      FUN_00416dc0(param_1 + 0x88,*(undefined8 *)(param_1 + 0x98),
                   *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x90),
                   *(undefined4 *)(param_1 + 0x90));
      FUN_00415dd0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x88),0);
      if ((*(int *)(param_1 + 0xac) == 4) &&
         (cVar2 = FUN_010ae370(*(undefined8 *)(param_1 + 0x88)), cVar2 != '\0')) {
LAB_010a7c8b:
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
        thunk_FUN_041b2403(uVar5,0xd6,&DAT_0202f920,
                           (longlong)(DAT_0202f930 + *(int *)(param_1 + 0xa0) + -1));
        thunk_FUN_0412a071((longlong)DAT_0202f91c,0xff0000);
        uVar5 = FUN_00442620(local_42a,*(undefined8 *)(param_1 + 0x88));
        thunk_FUN_04193d0c((longlong)DAT_0202f91c,DAT_0202f920,DAT_0202f924,uVar5,
                           *(undefined4 *)(param_1 + 0x90));
      }
      else {
        if (*(int *)(param_1 + 0xac) == 2) {
          uVar5 = FUN_004425e0(local_62b,*(undefined8 *)(param_1 + 0x78));
          cVar2 = _IsVHDLKeyWord(uVar5);
          if (cVar2 != '\0') goto LAB_010a7c8b;
        }
        if (*(int *)(param_1 + 0xac) == 1) {
          uVar5 = FUN_004425e0(local_62b,*(undefined8 *)(param_1 + 0x78));
          cVar2 = _IsVerilogKeyWord(uVar5);
          if (cVar2 != '\0') goto LAB_010a7c8b;
        }
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    } while (*(int *)(param_1 + 0xa8) <= *(int *)(param_1 + 0xa4));
  }
  return;
}

