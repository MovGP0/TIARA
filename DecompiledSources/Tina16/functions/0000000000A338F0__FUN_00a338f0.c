/* Ghidra address: 00a338f0 */
/* Ghidra symbol: FUN_00a338f0 */


undefined8 FUN_00a338f0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) - 1U < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 8);
  }
  return uVar1;
}

