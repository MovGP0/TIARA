/* Ghidra address: 01b16460 */
/* Ghidra symbol: FUN_01b16460 */


undefined8 FUN_01b16460(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_01b16500(&PTR_FUN_01b01470,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

