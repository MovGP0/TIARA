/* Ghidra address: 00442880 */
/* Ghidra symbol: FUN_00442880 */


int FUN_00442880(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_1;
      if ((uVar1 != *param_2) || (uVar1 == 0)) {
        return (uint)uVar1 - (uint)*param_2;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}

