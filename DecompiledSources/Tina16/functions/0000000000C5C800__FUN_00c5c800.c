/* Ghidra address: 00c5c800 */
/* Ghidra symbol: FUN_00c5c800 */


void FUN_00c5c800(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10));
  FUN_00c5c520(lVar2,1);
  uVar1 = FUN_00c5c160(*(undefined1 *)(lVar2 + 0x18));
  *(undefined1 *)(lVar2 + 0x18) = uVar1;
  FUN_00611620(*(undefined8 *)(param_1 + 8),lVar2);
  return;
}

