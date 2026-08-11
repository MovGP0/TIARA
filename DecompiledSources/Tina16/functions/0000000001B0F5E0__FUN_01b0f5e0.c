/* Ghidra address: 01b0f5e0 */
/* Ghidra symbol: FUN_01b0f5e0 */


void FUN_01b0f5e0(longlong param_1)

{
  longlong lVar1;
  
  FUN_00409a70(param_1 + 0x1b8,*(longlong *)(param_1 + 0x1378) + 0x18,0x40);
  lVar1 = *(longlong *)(param_1 + 0x1378);
  *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(lVar1 + 0x160) = *(undefined8 *)(param_1 + 0x128);
  return;
}

