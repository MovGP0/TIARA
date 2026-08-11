/* Ghidra address: 005970b0 */
/* Ghidra symbol: FUN_005970b0 */


ulonglong FUN_005970b0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    plVar3 = (longlong *)(*param_1 + -8 + (longlong)(int)param_1[1] * 8);
    uVar1 = (int)param_1[1] - 1;
    if (-1 < (int)uVar1) {
      do {
        if (*plVar3 == *param_2) {
          return (ulonglong)uVar1;
        }
        plVar3 = plVar3 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0xffffffff);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00597040(auStack_28);
  }
  return uVar2;
}

