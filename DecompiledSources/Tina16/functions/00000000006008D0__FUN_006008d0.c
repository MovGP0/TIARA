/* Ghidra address: 006008d0 */
/* Ghidra symbol: FUN_006008d0 */


void FUN_006008d0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      *param_1 = uVar1 >> 0x10 & 0xff | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

