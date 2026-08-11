/* Ghidra address: 00874020 */
/* Ghidra symbol: FUN_00874020 */


void FUN_00874020(undefined8 param_1,ushort *param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_008764d0(param_3,param_5);
  if (0 < iVar1) {
    do {
      if (*param_2 < 0x80) {
        *param_4 = (char)*param_2;
      }
      else {
        *param_4 = 0x3f;
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

