/* Ghidra address: 0080aef0 */
/* Ghidra symbol: FUN_0080aef0 */


void FUN_0080aef0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(DAT_02012668 + 0x2d0) != 0) {
    if (param_2 == '\0') {
      if (*(int *)(param_1 + 0x138) == 0) {
        uVar1 = FUN_0080f4a0(param_1);
        thunk_FUN_039eeba8(FUN_0080adb0,uVar1);
        if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(char *)(DAT_02012668 + 0x193) != '\0')) {
          lVar2 = 0;
          if (*(longlong *)(param_1 + 0x1a0) != 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + -8);
          }
          uVar5 = lVar2 - 1;
          if (-1 < (int)uVar5) {
            do {
              thunk_FUN_03ab0e43(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar5 * 8),0);
              uVar3 = (int)uVar5 - 1;
              uVar5 = (ulonglong)uVar3;
            } while (uVar3 != 0xffffffff);
          }
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x10) + -1;
        if (-1 < iVar4) {
          do {
            uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x130),iVar4);
            thunk_FUN_04123592(uVar1,0);
            iVar4 = iVar4 + -1;
          } while (iVar4 != -1);
        }
      }
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    }
    else if ((0 < *(int *)(param_1 + 0x138)) &&
            (*(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1,
            *(int *)(param_1 + 0x138) == 0)) {
      if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(char *)(DAT_02012668 + 0x193) != '\0')) {
        lVar2 = 0;
        if (*(longlong *)(param_1 + 0x1a0) != 0) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + -8);
        }
        uVar5 = lVar2 - 1;
        if (-1 < (int)uVar5) {
          do {
            thunk_FUN_03ab0e43(*(undefined8 *)
                                (*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar5 * 8),5);
            uVar3 = (int)uVar5 - 1;
            uVar5 = (ulonglong)uVar3;
          } while (uVar3 != 0xffffffff);
        }
      }
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x10) + -1;
      if (-1 < iVar4) {
        do {
          uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x130),iVar4);
          thunk_FUN_04123592(uVar1,-(uint)(param_2 != '\0'));
          iVar4 = iVar4 + -1;
        } while (iVar4 != -1);
      }
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))(*(longlong **)(param_1 + 0x130));
      FUN_00419430(param_1 + 0x1a0,&DAT_007f4810);
    }
  }
  return;
}

