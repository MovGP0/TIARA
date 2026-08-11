/* Ghidra address: 004aebe0 */
/* Ghidra symbol: FUN_004aebe0 */


ulonglong FUN_004aebe0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_3 == '\0') {
    uVar2 = FUN_004aeba0();
  }
  else {
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar1 = *(int *)(param_1 + 0x10) - 1;
      plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8);
      if (-1 < (int)uVar1) {
        do {
          if (*plVar3 == param_2) {
            return (ulonglong)uVar1;
          }
          plVar3 = plVar3 + -1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0xffffffff);
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

