/* Ghidra address: 00c01e50 */
/* Ghidra symbol: FUN_00c01e50 */


void FUN_00c01e50(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(char *)(param_2 + 0xaf) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xd0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xa0));
  FUN_00bf28a0(*(undefined8 *)(param_2 + 0xd0));
  return;
}

