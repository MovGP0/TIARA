/* Ghidra address: 019767e0 */
/* Ghidra symbol: FUN_019767e0 */


void FUN_019767e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(*(longlong *)(param_2 + 0xc0) + 0x238) = 0;
  *(undefined1 *)(*(longlong *)(param_2 + 0xc0) + 0x2c0) = 1;
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x240) + 0x48,
               *(undefined8 *)(param_2 + 0x90));
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x228);
  *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(param_2 + 0x84);
  *(undefined1 *)(lVar1 + 0x40) = *(undefined1 *)(param_2 + 0x83);
  FUN_0196f440(*(undefined8 *)(param_2 + 0xc0));
  return;
}

