/* Ghidra address: 01b5e280 */
/* Ghidra symbol: FUN_01b5e280 */


void FUN_01b5e280(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x23) = 0x6c61757472695607;
  *(undefined1 *)(param_1 + 0xb0) = 10;
  *(undefined1 *)(param_1 + 0xb1) = 10;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x68) = 8;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Momentary")
  ;
  return;
}

