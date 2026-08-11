/* Ghidra address: 00c03c60 */
/* Ghidra symbol: FUN_00c03c60 */


void FUN_00c03c60(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_9;
  
  local_20 = auStack_48;
  local_9 = (*(uint *)(*(longlong *)(param_1 + 0x2d0) + 0x63a) & 0x40000) == 0;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x2d0) + 0x63a);
  *puVar1 = *puVar1 | 0x40000;
  FUN_00bfa9b0(*(undefined8 *)(param_1 + 0x2d0),param_2);
  if (local_9 != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x2d0) + 0x63a);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  return;
}

