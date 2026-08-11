/* Ghidra address: 00c006e0 */
/* Ghidra symbol: FUN_00c006e0 */


void FUN_00c006e0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x550) + 0x30) = 0;
  if (*(char *)(param_2 + 0x9f) != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xc0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x90));
  FUN_00bf28a0(*(undefined8 *)(param_2 + 0xc0));
  return;
}

