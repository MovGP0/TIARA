/* Ghidra address: 01b27540 */
/* Ghidra symbol: FUN_01b27540 */


undefined8 FUN_01b27540(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_01b27820(&PTR_FUN_01b197a0,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

