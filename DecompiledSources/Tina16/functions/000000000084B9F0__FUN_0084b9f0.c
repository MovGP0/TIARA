/* Ghidra address: 0084b9f0 */
/* Ghidra symbol: FUN_0084b9f0 */


undefined8 FUN_0084b9f0(longlong param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x18) < param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      *(int *)(param_1 + 0x18) = param_2;
    }
  }
  return uVar1;
}

