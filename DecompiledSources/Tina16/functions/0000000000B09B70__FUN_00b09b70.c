/* Ghidra address: 00b09b70 */
/* Ghidra symbol: FUN_00b09b70 */


undefined8 FUN_00b09b70(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x4a4) <= param_2)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x4e0) <= param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

