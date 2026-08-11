/* Ghidra address: 00f99ab0 */
/* Ghidra symbol: FUN_00f99ab0 */


void FUN_00f99ab0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint7 uVar3;
  int iVar4;
  
  uVar2 = (ulonglong)param_2;
  iVar4 = 0;
  do {
    lVar1 = (longlong)(int)uVar2 % 2;
    uVar3 = (uint7)((ulonglong)lVar1 >> 8) & 0xffffff;
    if (((int)lVar1 == 1) || ((param_3 == -1 && (3 < iVar4)))) {
      if (iVar4 < 5) {
        if (iVar4 == 4) {
          (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
                    (*(longlong **)(param_1 + 0x718),CONCAT71(uVar3,1));
        }
        else if (iVar4 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
                    (*(longlong **)(param_1 + 0x738),CONCAT71(uVar3,1));
        }
        else if (iVar4 == 1) {
          (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
                    (*(longlong **)(param_1 + 0x730),CONCAT71(uVar3,1));
        }
        else if (iVar4 == 2) {
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
                    (*(longlong **)(param_1 + 0x728),CONCAT71(uVar3,1));
        }
        else if (iVar4 == 3) {
          (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
                    (*(longlong **)(param_1 + 0x720),CONCAT71(uVar3,1));
        }
      }
      else if (iVar4 == 5) {
        (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
                  (*(longlong **)(param_1 + 0x710),CONCAT71(uVar3,1));
      }
      else if (iVar4 == 6) {
        (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
                  (*(longlong **)(param_1 + 0x708),CONCAT71(uVar3,1));
      }
      else if (iVar4 == 7) {
        (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
                  (*(longlong **)(param_1 + 0x700),CONCAT71(uVar3,1));
      }
    }
    uVar2 = (longlong)(int)uVar2 / 2 & 0xffffffff;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  return;
}

