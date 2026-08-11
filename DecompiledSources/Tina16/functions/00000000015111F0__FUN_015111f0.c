/* Ghidra address: 015111f0 */
/* Ghidra symbol: FUN_015111f0 */


ushort FUN_015111f0(uint param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  do {
    if ((param_1 & 3) == 0) {
      sVar1 = 0;
    }
    else if ((param_1 & 3) == 1) {
      sVar1 = 1;
    }
    else {
      sVar1 = 1;
    }
    uVar2 = uVar2 | sVar1 << ((byte)iVar3 & 0x1f);
    param_1 = param_1 >> 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return uVar2;
}

