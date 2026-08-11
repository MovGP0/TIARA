/* Ghidra address: 01856b00 */
/* Ghidra symbol: FUN_01856b00 */


undefined8 FUN_01856b00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = FUN_006056e0(&PTR_FUN_005f7f40,1,*(undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x18);
}

