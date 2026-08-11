/* Ghidra address: 01cfd770 */
/* Ghidra symbol: FUN_01cfd770 */


void FUN_01cfd770(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_1[0x1b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
    if ((param_2 <= iVar1 + -1) && (-1 < param_2)) {
      FUN_017ff150(param_1,param_4,*(undefined4 *)(param_1[0x1b] + (longlong)param_2 * 0x10c),
                   param_3);
      *(undefined4 *)(param_1[0x1b] + (longlong)param_2 * 0x10c) = param_3;
    }
  }
  return;
}

