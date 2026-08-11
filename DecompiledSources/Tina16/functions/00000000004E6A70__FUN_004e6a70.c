/* Ghidra address: 004e6a70 */
/* Ghidra symbol: FUN_004e6a70 */


undefined8 FUN_004e6a70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_004e6fe0(&PTR_FUN_0049a7b0,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

