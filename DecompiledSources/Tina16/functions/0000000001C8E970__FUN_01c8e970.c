/* Ghidra address: 01c8e970 */
/* Ghidra symbol: FUN_01c8e970 */


void FUN_01c8e970(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x27d0) = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0x488);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xf10) != 0)) {
    FUN_0080c630(*(undefined8 *)PTR_DAT_02004030,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xf10) + 8) + 0x7d8));
    if (*(char *)(param_1 + 0x27d1) != '\0') {
      FUN_01af2ae0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2788) + 0x488) + 0xf10));
    }
  }
  return;
}

