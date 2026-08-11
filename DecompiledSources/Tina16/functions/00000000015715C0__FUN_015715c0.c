/* Ghidra address: 015715c0 */
/* Ghidra symbol: FUN_015715c0 */


undefined8 FUN_015715c0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x70) < 1) ||
     ((*(int *)(param_1 + 0x74) < 1 && (*(int *)(param_1 + 0x78) < 1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

