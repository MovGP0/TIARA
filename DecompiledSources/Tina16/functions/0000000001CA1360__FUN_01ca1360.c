/* Ghidra address: 01ca1360 */
/* Ghidra symbol: FUN_01ca1360 */


void FUN_01ca1360(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  *(undefined1 *)(param_1 + 0x27d0) = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0x488);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0xf10) == 0)) ||
     (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 0xf10) + 8) + 0xa9) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x27d1) = uVar2;
  return;
}

