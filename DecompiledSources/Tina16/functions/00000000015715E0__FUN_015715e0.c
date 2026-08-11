/* Ghidra address: 015715e0 */
/* Ghidra symbol: FUN_015715e0 */


undefined8 FUN_015715e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x70) < 1) || (*(int *)(param_1 + 0x74) != 0)) ||
     (*(int *)(param_1 + 0x78) != 0)) {
    if (((*(int *)(param_1 + 0x70) == 0) && (0 < *(int *)(param_1 + 0x74))) &&
       (*(int *)(param_1 + 0x78) == 0)) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

