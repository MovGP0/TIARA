/* Ghidra address: 01b27510 */
/* Ghidra symbol: FUN_01b27510 */


undefined8 FUN_01b27510(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_01b275b0(&PTR_FUN_01b19200,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

