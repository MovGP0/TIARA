/* Ghidra address: 005a49d0 */
/* Ghidra symbol: FUN_005a49d0 */


undefined8 FUN_005a49d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_005a5170(&PTR_FUN_0059ffe8,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

