/* Ghidra address: 005b4540 */
/* Ghidra symbol: FUN_005b4540 */


undefined4 FUN_005b4540(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x10);
  }
  return uVar1;
}

