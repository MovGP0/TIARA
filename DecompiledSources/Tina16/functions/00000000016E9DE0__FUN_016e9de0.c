/* Ghidra address: 016e9de0 */
/* Ghidra symbol: FUN_016e9de0 */


undefined8 FUN_016e9de0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) ||
      (((param_2 != 0 && (param_2 <= *(byte *)(param_1 + 5))) &&
       (-1 < *(int *)(*(longlong *)(param_1 + 0x38) + -4 + (ulonglong)param_2 * 4))))) ||
     ((*(byte *)(param_1 + 5) < param_2 &&
      ((uint)param_2 <= (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 6))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

