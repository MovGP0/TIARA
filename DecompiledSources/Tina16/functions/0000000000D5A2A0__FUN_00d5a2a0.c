/* Ghidra address: 00d5a2a0 */
/* Ghidra symbol: FUN_00d5a2a0 */


undefined8 FUN_00d5a2a0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004aeac0();
  }
  return uVar1;
}

