/* Ghidra address: 00873e80 */
/* Ghidra symbol: FUN_00873e80 */


int FUN_00873e80(undefined8 param_1,undefined2 *param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = param_3 + -1;
  if (-1 < iVar1) {
    do {
      *param_4 = (char)((ushort)*param_2 >> 8);
      param_4[1] = *(undefined1 *)param_2;
      param_4 = param_4 + 2;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return param_3 * 2;
}

