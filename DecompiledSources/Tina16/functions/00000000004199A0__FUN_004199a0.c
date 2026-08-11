/* Ghidra address: 004199a0 */
/* Ghidra symbol: FUN_004199a0 */


undefined8 * FUN_004199a0(undefined8 *param_1,int *param_2,int param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((-1 < param_3) && (-1 < param_3)) {
    iVar2 = param_3 + 1;
    do {
      param_4 = param_4 + (ulonglong)*(byte *)(param_4 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + (longlong)(*param_2 * *(int *)(param_4 + 2)));
      if (iVar1 < param_3) {
        if (*(longlong **)(param_4 + 6) != (longlong *)0x0) {
          param_4 = **(longlong **)(param_4 + 6);
        }
        if (param_1 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        param_1 = (undefined8 *)*param_1;
      }
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

