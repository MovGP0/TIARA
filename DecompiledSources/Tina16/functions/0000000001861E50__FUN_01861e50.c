/* Ghidra address: 01861e50 */
/* Ghidra symbol: FUN_01861e50 */


void FUN_01861e50(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x10) < param_2) || (param_2 < 1)) {
    FUN_004141e0(L"Frame index out of range",L"C:\\AutoBuild\\_FRVCL\\Build\\D26RADx64\\frxGif2.pas"
                 ,0xf9);
  }
  FUN_004aeac0(param_1,param_2 + -1);
  return;
}

