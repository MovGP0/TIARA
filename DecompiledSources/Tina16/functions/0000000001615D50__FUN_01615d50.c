/* Ghidra address: 01615d50 */
/* Ghidra symbol: FUN_01615d50 */


undefined4 FUN_01615d50(char param_1)

{
  undefined4 unaff_EBX;
  
  if (param_1 == '\x19') {
    unaff_EBX = 0x161;
  }
  else if (param_1 == '\x1a') {
    unaff_EBX = 0x160;
  }
  else if (param_1 == '\x1b') {
    unaff_EBX = 0x15d;
  }
  else if (param_1 == '\x1c') {
    unaff_EBX = 0x15f;
  }
  else {
    FUN_01613110(L"Op invalid");
  }
  return unaff_EBX;
}

