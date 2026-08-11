/* Ghidra address: 01517340 */
/* Ghidra symbol: FUN_01517340 */


void FUN_01517340(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x23) = 0x6c61757472695607;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
            (*(longlong **)(param_1 + 0x58),L"Conditional");
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
            (*(longlong **)(param_1 + 0x58),L"Sequential");
  *(undefined4 *)(param_1 + 0x80) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))(*(longlong **)(param_1 + 0x60),L"Internal");
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))
            (*(longlong **)(param_1 + 0x60),L"Ext - Dig.Sig.Ge.");
  *(undefined4 *)(param_1 + 0x84) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),L"Internal");
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
            (*(longlong **)(param_1 + 0x68),L"Ext - Dig.Sig.Ge.");
  *(undefined4 *)(param_1 + 0x88) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
            (*(longlong **)(param_1 + 0x70),&DAT_01517500);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),L"CMOS");
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3f847ae147ae147b;
  *(undefined2 *)(param_1 + 0x98) = 100;
  *(undefined2 *)(param_1 + 0x9a) = 2000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return;
}

