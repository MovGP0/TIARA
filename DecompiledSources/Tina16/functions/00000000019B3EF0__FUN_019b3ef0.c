/* Ghidra address: 019b3ef0 */
/* Ghidra symbol: FUN_019b3ef0 */


undefined8 FUN_019b3ef0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_019b41d0(&PTR_FUN_01989528,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

