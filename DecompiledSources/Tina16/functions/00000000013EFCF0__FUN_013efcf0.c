/* Ghidra address: 013efcf0 */
/* Ghidra symbol: FUN_013efcf0 */


void FUN_013efcf0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 local_1a [2];
  
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x728) + 0x26);
  FUN_004095f0(*(undefined8 *)(puVar1 + 9),*(undefined2 *)(puVar1 + 0x23));
  FUN_004095f0(*(undefined8 *)(puVar1 + 1),*(undefined2 *)(puVar1 + 0x21));
  FUN_004095f0(*(undefined8 *)(puVar1 + 0x19),*(undefined2 *)(puVar1 + 0x21));
  *puVar1 = *(undefined1 *)(param_1 + 0x720);
  FUN_0172cfa0(*(undefined8 *)(param_1 + 0x748),*(undefined1 *)(param_1 + 0x720),puVar1 + 1,
               puVar1 + 9,puVar1 + 0x19,puVar1 + 0x21,puVar1 + 0x23,local_1a);
  return;
}

