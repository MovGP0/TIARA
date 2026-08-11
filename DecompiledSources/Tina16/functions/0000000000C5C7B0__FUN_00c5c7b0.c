/* Ghidra address: 00c5c7b0 */
/* Ghidra symbol: FUN_00c5c7b0 */


void FUN_00c5c7b0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8));
  FUN_00c5c520(lVar2,0);
  uVar1 = FUN_00c5c160(*(undefined1 *)(lVar2 + 0x18));
  *(undefined1 *)(lVar2 + 0x18) = uVar1;
  FUN_00611620(*(undefined8 *)(param_1 + 0x10),lVar2);
  return;
}

