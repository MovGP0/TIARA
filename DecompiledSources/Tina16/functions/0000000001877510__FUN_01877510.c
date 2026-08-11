/* Ghidra address: 01877510 */
/* Ghidra symbol: FUN_01877510 */


void FUN_01877510(longlong *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0x18))(param_1), param_2 < iVar1)) {
    return;
  }
  FUN_004141e0(L"Index out of bounds",L"C:\\AutoBuild\\_FRVCL\\Build\\D26RADx64\\frxStorage.pas",
               0x85a);
  return;
}

