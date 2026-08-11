/* Ghidra address: 01ae94a0 */
/* Ghidra symbol: FUN_01ae94a0 */


undefined8 FUN_01ae94a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01ae91c0();
  if (lVar1 == 0) {
    FUN_00414ad0(param_2,L"noname");
  }
  else {
    FUN_005894c0(param_2,&DAT_01cb2e28,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x434));
  }
  return param_2;
}

