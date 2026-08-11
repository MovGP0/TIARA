/* Ghidra address: 00eb03a0 */
/* Ghidra symbol: FUN_00eb03a0 */


undefined8 FUN_00eb03a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00eb0440(&PTR_FUN_00eac198,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

