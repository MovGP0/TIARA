/* Ghidra address: 00665cc0 */
/* Ghidra symbol: FUN_00665cc0 */


void FUN_00665cc0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  if (*(char *)(param_2 + 0x98) != '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 8);
    *(undefined1 *)(lVar2 + 0x2d0) = 0;
    puVar1 = (uint *)(lVar2 + 0xa4);
    *puVar1 = *puVar1 & 0xffffbfff;
  }
  return;
}

