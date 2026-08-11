/* Ghidra address: 00bcbec0 */
/* Ghidra symbol: FUN_00bcbec0 */


undefined2 FUN_00bcbec0(short *param_1,int *param_2)

{
  short sVar1;
  undefined2 uVar2;
  
  *param_2 = 0;
  if (param_1 == (short *)0x0) {
    uVar2 = 0;
  }
  else {
    for (; (sVar1 = *param_1, sVar1 != 0 && (sVar1 != 9)); param_1 = param_1 + 1) {
      *param_2 = *param_2 + 1;
    }
    uVar2 = CONCAT11((char)((ushort)sVar1 >> 8),*param_1 == 9);
  }
  return uVar2;
}

