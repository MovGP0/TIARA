/* Ghidra address: 00e01b00 */
/* Ghidra symbol: FUN_00e01b00 */


undefined8 FUN_00e01b00(char param_1)

{
  undefined8 unaff_RBX;
  
  if (param_1 == -0x23) {
    unaff_RBX = FUN_00e01f50(&PTR_FUN_00e01998,1);
  }
  else if (param_1 == -0x22) {
    unaff_RBX = FUN_00e01e80(&PTR_FUN_00e017a8,1);
  }
  else {
    FUN_016fd940(L"TINA Invalid typ: interf_classes.create_class");
  }
  return unaff_RBX;
}

