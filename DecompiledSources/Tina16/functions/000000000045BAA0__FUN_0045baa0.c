/* Ghidra address: 0045baa0 */
/* Ghidra symbol: FUN_0045baa0 */


int FUN_0045baa0(undefined8 param_1,undefined2 *param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = param_3;
  if (-1 < param_3 + -1) {
    do {
      *param_4 = (char)((ushort)*param_2 >> 8);
      param_4[1] = *(undefined1 *)param_2;
      param_4 = param_4 + 2;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_3 * 2;
}

