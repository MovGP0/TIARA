/* Ghidra address: 012a4710 */
/* Ghidra symbol: FUN_012a4710 */


void FUN_012a4710(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa1) = 10;
  *(undefined1 *)(param_1 + 0xa2) = 8;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))(*(longlong **)(param_1 + 0x88),L"Single");
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))(*(longlong **)(param_1 + 0x88),L"Normal");
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))(*(longlong **)(param_1 + 0x88),L"Auto");
  *(undefined4 *)(param_1 + 0xe0) = 2;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))
            (*(longlong **)(param_1 + 0x80),L"Ext.-Func.Gen.");
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0x6c61757472695607;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  return;
}

