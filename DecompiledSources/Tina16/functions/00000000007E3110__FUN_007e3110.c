/* Ghidra address: 007e3110 */
/* Ghidra symbol: FUN_007e3110 */


void FUN_007e3110(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((longlong)param_1 + 0x82) != param_2) {
    if ((param_2 != '\0') && (param_1[0x19] != 0)) {
      iVar2 = FUN_007e2ef0();
      iVar3 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar1 = FUN_007e2f10(param_1[0x19],iVar3);
          if (*(char *)(lVar1 + 0x82) != '\0') {
            lVar1 = FUN_007e2f10(param_1[0x19],iVar3);
            *(undefined1 *)(lVar1 + 0x82) = 0;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    *(char *)((longlong)param_1 + 0x82) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

