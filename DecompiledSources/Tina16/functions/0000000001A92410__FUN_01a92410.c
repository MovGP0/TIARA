/* Ghidra address: 01a92410 */
/* Ghidra symbol: FUN_01a92410 */


undefined8 FUN_01a92410(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_01a924b0(&PTR_FUN_01a8c5a0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

