/* Ghidra address: 00b41cf0 */
/* Ghidra symbol: FUN_00b41cf0 */


undefined8 FUN_00b41cf0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8));
  }
  return uVar1;
}

