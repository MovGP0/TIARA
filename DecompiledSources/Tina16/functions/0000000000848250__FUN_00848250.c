/* Ghidra address: 00848250 */
/* Ghidra symbol: FUN_00848250 */


undefined4 FUN_00848250(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(longlong *)(param_1 + 0x530) == 0) || (*(int *)(param_1 + 0x4e0) <= param_2)) {
    uVar1 = *(undefined4 *)(param_1 + 0x4b4);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x530) + (longlong)(param_2 + 1) * 4);
  }
  return uVar1;
}

