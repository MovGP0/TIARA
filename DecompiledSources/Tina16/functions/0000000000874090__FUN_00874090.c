/* Ghidra address: 00874090 */
/* Ghidra symbol: FUN_00874090 */


void FUN_00874090(undefined8 param_1,byte *param_2,undefined4 param_3,ushort *param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_008764d0(param_5,param_3);
  if (0 < iVar1) {
    do {
      if (*param_2 < 0x80) {
        *param_4 = (ushort)*param_2;
      }
      else {
        *param_4 = 0xfffd;
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

