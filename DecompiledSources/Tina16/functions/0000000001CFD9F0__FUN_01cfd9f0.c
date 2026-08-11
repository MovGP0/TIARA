/* Ghidra address: 01cfd9f0 */
/* Ghidra symbol: FUN_01cfd9f0 */


undefined1 * FUN_01cfd9f0(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  *param_2 = 0;
  if (param_1[0x1b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
    if ((param_3 <= iVar1 + -1) && (-1 < param_3)) {
      FUN_00414ff0(param_2,param_1[0x1b] + 0xc + (longlong)param_3 * 0x10c);
    }
  }
  return param_2;
}

