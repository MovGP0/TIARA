/* Ghidra address: 010bfed0 */
/* Ghidra symbol: FUN_010bfed0 */


void FUN_010bfed0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  
  if ((byte)(param_1[1] - 0x28) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (param_1[1] - 0x28 & 0x1f) & 0x28U)
            != 0;
  }
  else {
    bVar2 = false;
  }
  uVar1 = bVar2 + 1;
  if (((uVar1 < *param_1) && (param_1[(int)uVar1] == 0x30)) &&
     (param_1[(int)(bVar2 + 2)] != DAT_0202f960)) {
    FUN_00415260(param_1,0xff,uVar1,1);
  }
  return;
}

