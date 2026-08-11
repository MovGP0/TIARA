/* Ghidra address: 00a353b0 */
/* Ghidra symbol: FUN_00a353b0 */


void FUN_00a353b0(longlong param_1,undefined2 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x40) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar1 + 0x44) = 0x28;
  *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x48c);
  *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x488);
  *(undefined2 *)(lVar1 + 0x50) = 1;
  *(undefined2 *)(lVar1 + 0x52) = param_2;
  *(undefined4 *)(lVar1 + 0x54) = 0;
  return;
}

