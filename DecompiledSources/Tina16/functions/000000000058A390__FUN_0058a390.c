/* Ghidra address: 0058a390 */
/* Ghidra symbol: FUN_0058a390 */


int FUN_0058a390(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = *(short *)(param_1 + 0x12 + (ulonglong)*(byte *)(param_1 + 1));
  if (0 < sVar1) {
    uVar2 = FUN_004095c0((longlong)((int)sVar1 << 3));
    *param_2 = uVar2;
    FUN_00589f00(param_1,*param_2);
  }
  return (int)sVar1;
}

