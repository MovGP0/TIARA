/* Ghidra address: 0078e750 */
/* Ghidra symbol: FUN_0078e750 */


undefined8 FUN_0078e750(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_0078ec90(&PTR_FUN_00766338,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

