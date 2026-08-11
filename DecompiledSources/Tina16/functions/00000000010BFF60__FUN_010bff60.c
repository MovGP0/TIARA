/* Ghidra address: 010bff60 */
/* Ghidra symbol: FUN_010bff60 */


void FUN_010bff60(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((param_1[bVar1] == 0x30) && (1 < bVar1)) && (param_1[(int)(bVar1 - 1)] != DAT_0202f960)) {
    FUN_00415260(param_1,0xff,bVar1,1);
  }
  return;
}

