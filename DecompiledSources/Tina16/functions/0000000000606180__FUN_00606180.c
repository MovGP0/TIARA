/* Ghidra address: 00606180 */
/* Ghidra symbol: FUN_00606180 */


undefined2 FUN_00606180(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 0x28);
  }
  return uVar1;
}

