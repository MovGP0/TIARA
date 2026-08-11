/* Ghidra address: 00c1b980 */
/* Ghidra symbol: FUN_00c1b980 */


void FUN_00c1b980(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *param_2;
      *param_2 = uVar1 >> 0x10 & 0xff | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

