/* Ghidra address: 00562110 */
/* Ghidra symbol: FUN_00562110 */


undefined8 FUN_00562110(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00562410(&PTR_FUN_0053e0c0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

