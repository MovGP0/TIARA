/* Ghidra address: 01cfd8d0 */
/* Ghidra symbol: FUN_01cfd8d0 */


void FUN_01cfd8d0(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1[0x1b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
    if ((param_2 <= iVar1 + -1) && (-1 < param_2)) {
      *(undefined4 *)(param_1[0x1b] + 8 + (longlong)param_2 * 0x10c) = param_3;
    }
  }
  return;
}

