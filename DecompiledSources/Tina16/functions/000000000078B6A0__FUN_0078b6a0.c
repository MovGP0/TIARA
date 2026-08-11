/* Ghidra address: 0078b6a0 */
/* Ghidra symbol: FUN_0078b6a0 */


undefined8 FUN_0078b6a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_0078bbe0(&PTR_FUN_00761e70,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

