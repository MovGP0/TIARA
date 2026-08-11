/* Ghidra address: 019b3ec0 */
/* Ghidra symbol: FUN_019b3ec0 */


undefined8 FUN_019b3ec0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_019b3f60(&PTR_FUN_01988f88,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

