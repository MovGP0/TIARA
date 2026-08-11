/* Ghidra address: 01a92440 */
/* Ghidra symbol: FUN_01a92440 */


undefined8 FUN_01a92440(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_01a92720(&PTR_FUN_01a8cb80,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

