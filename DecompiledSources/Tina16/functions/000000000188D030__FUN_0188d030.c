/* Ghidra address: 0188d030 */
/* Ghidra symbol: FUN_0188d030 */


undefined8 FUN_0188d030(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20));
  }
  return uVar1;
}

