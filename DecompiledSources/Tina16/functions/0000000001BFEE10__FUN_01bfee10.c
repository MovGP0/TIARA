/* Ghidra address: 01bfee10 */
/* Ghidra symbol: FUN_01bfee10 */


void FUN_01bfee10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_004aeac0(*(undefined8 *)(param_1 + 0x58));
  }
  else {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*DAT_01fe2178 + 0x18))(DAT_01fe2178,uVar1);
  }
  return;
}

