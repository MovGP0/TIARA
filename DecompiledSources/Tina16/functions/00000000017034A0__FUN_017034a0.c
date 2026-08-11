/* Ghidra address: 017034a0 */
/* Ghidra symbol: FUN_017034a0 */


void FUN_017034a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1 + 0x740,*(undefined8 *)(param_1 + 0x748));
  }
  else {
    FUN_00414ad0(param_1 + 0x748,*(undefined8 *)(param_1 + 0x740));
    FUN_00414ad0(param_1 + 0x740,L"[All]");
  }
  FUN_01702bb0(param_1,0);
  return;
}

