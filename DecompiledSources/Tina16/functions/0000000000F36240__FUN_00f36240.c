/* Ghidra address: 00f36240 */
/* Ghidra symbol: FUN_00f36240 */


undefined8 FUN_00f36240(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00f36540(&PTR_FUN_00f26ec8,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

