/* Ghidra address: 00bad570 */
/* Ghidra symbol: FUN_00bad570 */


undefined8 FUN_00bad570(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x50);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x28);
  }
  return uVar1;
}

