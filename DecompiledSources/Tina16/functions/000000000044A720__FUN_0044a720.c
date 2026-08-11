/* Ghidra address: 0044a720 */
/* Ghidra symbol: FUN_0044a720 */


int FUN_0044a720(longlong param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if (DAT_0200c444 == 0x12) {
    if (param_2 < 100) {
      uVar1 = FUN_00448f30();
      uVar2 = (int)*(uint *)(param_1 + 0xcc) >> 0x1f;
      param_2 = param_2 + ((int)((uint)uVar1 + ((*(uint *)(param_1 + 0xcc) ^ uVar2) - uVar2)) / 100)
                          * 100;
    }
    if (0 < *(int *)(param_1 + 0xcc)) {
      *(int *)(param_1 + 0xcc) = -*(int *)(param_1 + 0xcc);
    }
  }
  else {
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + -1;
  }
  return param_2 + *(int *)(param_1 + 0xcc);
}

