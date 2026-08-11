/* Ghidra address: 004580f0 */
/* Ghidra symbol: FUN_004580f0 */


int FUN_004580f0(uint *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = FUN_00458080(param_1,1);
  uVar1 = uVar1 >> 7;
  if (((uVar1 & 0xff) == 0) || (0xfe < (uVar1 & 0xff))) {
    if (((uVar1 & 0xff) == 0) && ((*param_1 & 0x7fffff) != 0)) {
      iVar2 = -0x7e;
    }
    else if (((uVar1 & 0xff) == 0) && ((*param_1 & 0x7fffff) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (uVar1 & 0xff) - 0x7f;
  }
  return iVar2;
}

