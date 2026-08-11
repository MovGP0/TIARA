/* Ghidra address: 00564100 */
/* Ghidra symbol: FUN_00564100 */


undefined8 FUN_00564100(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00564410(&PTR_FUN_00540760,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

