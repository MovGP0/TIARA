/* Ghidra address: 01ca6b90 */
/* Ghidra symbol: FUN_01ca6b90 */


undefined8 FUN_01ca6b90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_01ca70d0(&PTR_FUN_01c9eb48,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

