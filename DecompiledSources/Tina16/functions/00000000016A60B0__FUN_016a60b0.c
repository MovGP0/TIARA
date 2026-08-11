/* Ghidra address: 016a60b0 */
/* Ghidra symbol: FUN_016a60b0 */


void FUN_016a60b0(longlong *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_1[2] + -1;
  if (param_3 < 2) {
    if (param_3 == 1) {
      if (param_2 <= iVar5) {
        iVar4 = (iVar5 - param_2) + 1;
        iVar5 = param_2;
        do {
          lVar3 = FUN_01d347d0(param_1,iVar5);
          if (*(char *)(lVar3 + 0x11) == '\0') {
            if (iVar5 == param_2) {
              *(undefined1 *)(lVar3 + 0x11) = 1;
            }
            else {
              *(undefined1 *)(lVar3 + 0x11) = 4;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (param_2 <= iVar5) {
      iVar4 = (param_2 - iVar5) + -1;
      do {
        FUN_01d34870(param_1,iVar5);
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    param_3 = param_3 + -1;
    if (0 < param_3) {
      do {
        if (param_2 <= iVar5) {
          iVar6 = (iVar5 - param_2) + 1;
          iVar4 = param_2;
          do {
            puVar1 = (undefined8 *)FUN_01d347d0(param_1,iVar4);
            if (*(char *)((longlong)puVar1 + 0x11) == '\0') {
              if (iVar4 == param_2) {
                *(undefined1 *)((longlong)puVar1 + 0x11) = 1;
              }
              else {
                *(undefined1 *)((longlong)puVar1 + 0x11) = 4;
              }
            }
            puVar1 = (undefined8 *)*puVar1;
            uVar2 = FUN_01d347d0(param_1,iVar4);
            uVar2 = (*(code *)*puVar1)(puVar1,1,uVar2);
            (**(code **)(*param_1 + 0x50))(param_1,uVar2);
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

