/* Ghidra address: 01978c20 */
/* Ghidra symbol: FUN_01978c20 */


undefined8 FUN_01978c20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = FUN_01801300(&PTR_FUN_01800f10,1);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x30);
}

