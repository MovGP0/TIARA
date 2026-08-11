/* Ghidra address: 0171ced0 */
/* Ghidra symbol: FUN_0171ced0 */


undefined8 FUN_0171ced0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_0171d670(&PTR_FUN_0170f3f8,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

