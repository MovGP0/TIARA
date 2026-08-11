/* Ghidra address: 00d74900 */
/* Ghidra symbol: FUN_00d74900 */


undefined8 FUN_00d74900(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 0xb8) + 0x10) <= param_2)) ||
     (*(char *)(param_1 + 0xe0) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8));
  }
  return uVar1;
}

