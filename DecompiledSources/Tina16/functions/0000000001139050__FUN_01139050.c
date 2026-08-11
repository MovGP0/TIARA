/* Ghidra address: 01139050 */
/* Ghidra symbol: FUN_01139050 */


undefined8 FUN_01139050(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xa09) == '\0') {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x118);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xa60);
  }
  return uVar1;
}

