/* Ghidra address: 01550cd0 */
/* Ghidra symbol: FUN_01550cd0 */


void FUN_01550cd0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_00414b50(param_1 + 0x78,L"LIBRARY ieee");
  FUN_00416ad0(param_1 + 0x78,&LAB_01550d54);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x78));
  return;
}

