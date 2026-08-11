/* Ghidra address: 00f99c30 */
/* Ghidra symbol: FUN_00f99c30 */


void FUN_00f99c30(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint7 uVar4;
  int iVar5;
  
  uVar3 = (ulonglong)param_2;
  iVar5 = 0;
  do {
    lVar2 = (longlong)(int)uVar3 % 2;
    uVar4 = (uint7)((ulonglong)lVar2 >> 8) & 0xffffff;
    if (((int)lVar2 == 1) || ((param_3 == -1 && (3 < iVar5)))) {
      if (iVar5 < 5) {
        if (iVar5 == 4) {
          plVar1 = *(longlong **)(param_1 + 0x758);
          if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
            (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
          }
        }
        else if (iVar5 == 0) {
          plVar1 = *(longlong **)(param_1 + 0x778);
          if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
            (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
          }
        }
        else if (iVar5 == 1) {
          plVar1 = *(longlong **)(param_1 + 0x770);
          if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
            (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
          }
        }
        else if (iVar5 == 2) {
          plVar1 = *(longlong **)(param_1 + 0x768);
          if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
            (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
          }
        }
        else if ((iVar5 == 3) &&
                (plVar1 = *(longlong **)(param_1 + 0x760),
                *(char *)((longlong)plVar1 + 0xa9) != '\0')) {
          (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
        }
      }
      else if (iVar5 == 5) {
        plVar1 = *(longlong **)(param_1 + 0x750);
        if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
          (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
        }
      }
      else if (iVar5 == 6) {
        plVar1 = *(longlong **)(param_1 + 0x748);
        if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
          (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
        }
      }
      else if ((iVar5 == 7) &&
              (plVar1 = *(longlong **)(param_1 + 0x740), *(char *)((longlong)plVar1 + 0xa9) != '\0')
              ) {
        (**(code **)(*plVar1 + 0x268))(plVar1,CONCAT71(uVar4,1));
      }
    }
    uVar3 = (longlong)(int)uVar3 / 2 & 0xffffffff;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  return;
}

