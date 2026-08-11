/* Ghidra address: 018c7fc0 */
/* Ghidra symbol: FUN_018c7fc0 */


void FUN_018c7fc0(longlong *param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x208) + 0x10) + -1;
  if (param_3 <= iVar2) {
    iVar4 = (param_3 - iVar2) + -1;
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x208),iVar2);
      if (*(longlong *)(lVar3 + 0x218) != 0) {
        lVar1 = *(longlong *)(lVar3 + 0x218);
        if ((*(char *)(lVar1 + 0x240) == '\0') || (2 < *(int *)(param_4 + 0x228))) {
          (**(code **)(*param_1 + 0x58))(param_1,lVar1);
        }
        else {
          FUN_018cd940(param_1,lVar1,6);
        }
      }
      FUN_018cf630(param_1,lVar3);
      if (*(char *)(lVar3 + 0x1cc) == '\0') {
        FUN_018cb4f0(param_1,lVar3);
      }
      else {
        FUN_018cb510(param_1,lVar3);
      }
      if (*(char *)(lVar3 + 0x254) != '\0') {
        FUN_018cf2f0(param_1,lVar3);
      }
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  return;
}

