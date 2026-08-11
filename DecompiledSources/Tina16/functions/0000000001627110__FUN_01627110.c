/* Ghidra address: 01627110 */
/* Ghidra symbol: FUN_01627110 */


undefined4 FUN_01627110(int param_1,int param_2)

{
  undefined4 unaff_EBX;
  
  if ((param_2 == 0x3f7) || (param_2 == 0x401)) {
    if (param_1 == 3) {
      unaff_EBX = 0;
    }
    else if (param_1 == 2) {
      unaff_EBX = 1;
    }
    else if (param_1 == 1) {
      unaff_EBX = 2;
    }
    else if (param_1 == 5) {
      unaff_EBX = 3;
    }
    else if (param_1 == 4) {
      unaff_EBX = 4;
    }
    else if (param_1 == 0) {
      unaff_EBX = 5;
    }
  }
  else {
    FUN_01613110(L"SpiceToTinaPins");
  }
  return unaff_EBX;
}

