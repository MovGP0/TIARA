/* Ghidra address: 00bf18d0 */
/* Ghidra symbol: FUN_00bf18d0 */


undefined8 FUN_00bf18d0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 8) == *param_2) && (*(longlong *)(param_1 + 0x10) == param_2[1])) {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

