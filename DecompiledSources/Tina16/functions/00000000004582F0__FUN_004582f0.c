/* Ghidra address: 004582f0 */
/* Ghidra symbol: FUN_004582f0 */


int FUN_004582f0(ulonglong *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = FUN_00458200(param_1,3);
  uVar1 = uVar1 >> 4;
  if (((uVar1 & 0x7ff) == 0) || (0x7fe < (uVar1 & 0x7ff))) {
    if (((uVar1 & 0x7ff) == 0) && ((*param_1 & 0xfffffffffffff) != 0)) {
      iVar2 = -0x3fe;
    }
    else if (((uVar1 & 0x7ff) == 0) && ((*param_1 & 0xfffffffffffff) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (uVar1 & 0x7ff) - 0x3ff;
  }
  return iVar2;
}

