/* Ghidra address: 010e1080 */
/* Ghidra symbol: FUN_010e1080 */


void FUN_010e1080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if ((param_2 != 0) && (param_2 != param_1)) {
      iVar4 = 1;
      do {
        iVar5 = 0;
        do {
          lVar2 = (longlong)iVar4;
          lVar3 = (longlong)iVar5;
          if (*(longlong *)(param_2 + -0x38 + lVar2 * 0x40 + lVar3 * 8) != 0) {
            if (*(longlong *)(param_2 + -0x38 + lVar2 * 0x40 + lVar3 * 8) !=
                *(longlong *)(param_1 + -0x38 + lVar2 * 0x40 + lVar3 * 8)) {
              plVar1 = *(longlong **)(param_2 + -0x38 + lVar2 * 0x40 + lVar3 * 8);
              if (*(char *)((longlong)plVar1 + 0x7ed) != '\0') {
                (**(code **)(*plVar1 + 0x480))(plVar1);
              }
              if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
                *(undefined1 *)(plVar1 + 0x11a) = 1;
                FUN_00805990(plVar1);
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x11);
    }
    iVar4 = 1;
    do {
      iVar5 = 0;
      do {
        lVar2 = (longlong)iVar4;
        lVar3 = (longlong)iVar5;
        if ((*(longlong *)(param_1 + -0x38 + lVar2 * 0x40 + lVar3 * 8) != 0) &&
           (*(char *)(*(longlong *)(param_1 + -0x38 + lVar2 * 0x40 + lVar3 * 8) + 0x8d0) != '\0')) {
          FUN_008059a0(*(undefined8 *)(param_1 + -0x38 + lVar2 * 0x40 + lVar3 * 8));
          *(undefined1 *)(*(longlong *)(param_1 + -0x38 + lVar2 * 0x40 + lVar3 * 8) + 0x8d0) = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x11);
    *(undefined8 *)(DAT_0202f9c0 + 0x408) = *(undefined8 *)(param_1 + 0x408);
  }
  return;
}

