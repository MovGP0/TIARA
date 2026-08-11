/* Ghidra address: 00854440 */
/* Ghidra symbol: FUN_00854440 */


undefined8 FUN_00854440(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00854750(&PTR_FUN_00851c58,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

