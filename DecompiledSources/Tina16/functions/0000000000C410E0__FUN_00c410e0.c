/* Ghidra address: 00c410e0 */
/* Ghidra symbol: FUN_00c410e0 */


undefined8 FUN_00c410e0(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_00c3f420(param_1);
  if (sVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar1);
  }
  return uVar2;
}

