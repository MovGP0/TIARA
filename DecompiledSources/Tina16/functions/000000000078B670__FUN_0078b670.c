/* Ghidra address: 0078b670 */
/* Ghidra symbol: FUN_0078b670 */


undefined8 FUN_0078b670(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_0078b710(&PTR_FUN_00761460,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

