/* Ghidra address: 0197cfc0 */
/* Ghidra symbol: FUN_0197cfc0 */


undefined8 FUN_0197cfc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x240);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}

