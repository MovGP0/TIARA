/* Ghidra address: 01503530 */
/* Ghidra symbol: FUN_01503530 */


void FUN_01503530(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x23) = 0x6c61757472695607;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))(*(longlong **)(param_1 + 0x58),L"Step");
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))(*(longlong **)(param_1 + 0x58),L"Burst");
  *(undefined4 *)(param_1 + 0x98) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))(*(longlong **)(param_1 + 0x60),L"Internal");
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))
            (*(longlong **)(param_1 + 0x60),L"Ext.-Logic Analyzer");
  *(undefined4 *)(param_1 + 0x9c) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),L"Internal");
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
            (*(longlong **)(param_1 + 0x68),L"Ext.-Logic Analyzer");
  *(undefined4 *)(param_1 + 0xa0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
            (*(longlong **)(param_1 + 0x70),&DAT_015036d0);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),L"CMOS");
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x3f847ae147ae147b;
  *(undefined4 *)(param_1 + 0xa8) = 100;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}

