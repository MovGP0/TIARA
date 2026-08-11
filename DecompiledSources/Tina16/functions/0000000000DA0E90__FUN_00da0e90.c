/* Ghidra address: 00da0e90 */
/* Ghidra symbol: FUN_00da0e90 */


undefined8 FUN_00da0e90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00da13d0(&PTR_FUN_00d54cc8,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

