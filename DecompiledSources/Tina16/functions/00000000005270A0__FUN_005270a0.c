/* Ghidra address: 005270a0 */
/* Ghidra symbol: FUN_005270a0 */


undefined8 FUN_005270a0(ulonglong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
  }
  else if ((param_1 & 0x8000000000000000) == 0x8000000000000000) {
    uVar1 = 0x80000000000000ff;
  }
  else {
    uVar1 = 0x8000000000000001;
  }
  return uVar1;
}

