/* Ghidra address: 0077eae0 */
/* Ghidra symbol: FUN_0077eae0 */


bool FUN_0077eae0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_00416db0(param_2,L"#32768");
  if (iVar1 == 0) {
    bVar2 = (DAT_020125a1 & 1) != 0;
  }
  else {
    iVar1 = FUN_00416db0(param_2,L"tooltips_class32");
    if (iVar1 == 0) {
      bVar2 = (DAT_020125a1 & 4) != 0;
    }
    else {
      bVar2 = (DAT_020125a1 & 2) != 0;
    }
  }
  return bVar2;
}

