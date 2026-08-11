/* Ghidra address: 00596d70 */
/* Ghidra symbol: FUN_00596d70 */


ulonglong FUN_00596d70(longlong *param_1,char *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    pcVar3 = (char *)(*param_1 + -1 + (longlong)(int)param_1[1]);
    uVar1 = (int)param_1[1] - 1;
    if (-1 < (int)uVar1) {
      do {
        if (*pcVar3 == *param_2) {
          return (ulonglong)uVar1;
        }
        pcVar3 = pcVar3 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0xffffffff);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00596d00(auStack_28);
  }
  return uVar2;
}

