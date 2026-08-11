/* Ghidra address: 00848220 */
/* Ghidra symbol: FUN_00848220 */


undefined4 FUN_00848220(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(longlong *)(param_1 + 0x528) == 0) || (*(int *)(param_1 + 0x4a4) <= param_2)) {
    uVar1 = *(undefined4 *)(param_1 + 0x4b0);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x528) + (longlong)(param_2 + 1) * 4);
  }
  return uVar1;
}

