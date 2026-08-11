/* Ghidra address: 00876520 */
/* Ghidra symbol: FUN_00876520 */


ulonglong FUN_00876520(undefined8 param_1,int param_2,uint param_3,longlong param_4,longlong param_5
                      )

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 + 1;
  if (uVar1 <= param_3) {
    iVar2 = (param_3 - uVar1) + 1;
    do {
      if (*(short *)(param_4 + -2 + (ulonglong)uVar1 * 2) !=
          *(short *)(param_5 + -2 + (ulonglong)((uVar1 - param_2) + 1) * 2)) {
        return (ulonglong)uVar1;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

