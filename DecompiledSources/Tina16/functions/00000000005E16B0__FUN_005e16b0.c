/* Ghidra address: 005e16b0 */
/* Ghidra symbol: FUN_005e16b0 */


undefined8 FUN_005e16b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_005e1c90(&PTR_FUN_005d9130,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

