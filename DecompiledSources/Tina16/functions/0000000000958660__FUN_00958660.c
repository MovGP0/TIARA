/* Ghidra address: 00958660 */
/* Ghidra symbol: FUN_00958660 */


undefined1 FUN_00958660(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8));
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x28);
  }
  return uVar1;
}

