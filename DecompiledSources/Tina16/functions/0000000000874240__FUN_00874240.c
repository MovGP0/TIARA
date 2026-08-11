/* Ghidra address: 00874240 */
/* Ghidra symbol: FUN_00874240 */


void FUN_00874240(undefined8 param_1,byte *param_2,undefined4 param_3,ushort *param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_008764d0(param_5,param_3);
  if (0 < iVar1) {
    do {
      *param_4 = (ushort)*param_2;
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

