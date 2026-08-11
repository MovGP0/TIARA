/* Ghidra address: 01bd9f80 */
/* Ghidra symbol: FUN_01bd9f80 */


undefined8 FUN_01bd9f80(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
  *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 0x10);
  return 0;
}

