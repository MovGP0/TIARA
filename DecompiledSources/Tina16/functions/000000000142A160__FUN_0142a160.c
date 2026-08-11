/* Ghidra address: 0142a160 */
/* Ghidra symbol: FUN_0142a160 */


void FUN_0142a160(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x708) = 1;
  FUN_00414480(param_1 + 0x730);
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x6e0) + 0xe0,
               L"Text File (*.txt)|*.txt|Dat File (*.dat)|*.dat|XSF File (*.xsf)|*.xsf|MIC File (*.mic)|*.mic"
              );
  FUN_00414ad0(*(longlong *)(param_1 + 0x6e0) + 0x100,&DAT_0142a2e8);
  FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0xe0,
               L"Text File (*.txt)|*.txt|Dat File (*.dat)|*.dat|XSF File (*.xsf)|*.xsf|MIC File (*.mic)|*.mic"
              );
  FUN_00414ad0(*(longlong *)(param_1 + 0x700) + 0x100,&DAT_0142a2e8);
  return;
}

