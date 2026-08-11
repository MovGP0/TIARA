/* Ghidra address: 00792810 */
/* Ghidra symbol: FUN_00792810 */


undefined8 FUN_00792810(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00792fb0(&PTR_FUN_0076ba60,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

