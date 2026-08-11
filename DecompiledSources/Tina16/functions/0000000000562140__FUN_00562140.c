/* Ghidra address: 00562140 */
/* Ghidra symbol: FUN_00562140 */


undefined8 FUN_00562140(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00562680(&PTR_FUN_0053e688,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

