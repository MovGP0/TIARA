/* Ghidra address: 0171a9e0 */
/* Ghidra symbol: FUN_0171a9e0 */


void FUN_0171a9e0(longlong param_1)

{
  *(bool *)*(undefined8 *)(param_1 + 0x80) =
       (ulonglong)(*(longlong *)(param_1 + 0x70) + *(longlong *)(param_1 + 0x78)) <=
       *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0x10);
  return;
}

