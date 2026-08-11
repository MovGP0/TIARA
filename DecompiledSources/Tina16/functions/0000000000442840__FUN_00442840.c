/* Ghidra address: 00442840 */
/* Ghidra symbol: FUN_00442840 */


int FUN_00442840(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      bVar1 = *param_1;
      if ((bVar1 != *param_2) || (bVar1 == 0)) {
        return (uint)bVar1 - (uint)*param_2;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}

