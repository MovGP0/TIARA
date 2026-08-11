/* Ghidra address: 00ea1320 */
/* Ghidra symbol: FUN_00ea1320 */


int FUN_00ea1320(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  bVar2 = *param_2;
  if ((uVar1 != 0) || (bVar2 != 0)) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    do {
      uVar3 = (ushort)bVar2;
      if (uVar1 != uVar3) {
        return ((uVar3 < uVar1) - 1) + (uint)(uVar3 < uVar1);
      }
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
    } while ((uVar1 != 0) || (bVar2 != 0));
  }
  return 0;
}

