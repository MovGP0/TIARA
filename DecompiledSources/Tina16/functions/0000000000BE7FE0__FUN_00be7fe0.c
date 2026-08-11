/* Ghidra address: 00be7fe0 */
/* Ghidra symbol: FUN_00be7fe0 */


undefined4 FUN_00be7fe0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0x30) + -1) * 4);
  }
  return uVar1;
}

