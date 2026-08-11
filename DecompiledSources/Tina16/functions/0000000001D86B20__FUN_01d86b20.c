/* Ghidra address: 01d86b20 */
/* Ghidra symbol: FUN_01d86b20 */


undefined4 FUN_01d86b20(undefined8 param_1,char param_2)

{
  undefined1 uVar1;
  undefined4 unaff_EBX;
  
  if ((param_2 == '\0') || (*PTR_DAT_02003450 != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *PTR_DAT_02003450 = uVar1;
  if (*PTR_DAT_02003450 != '\0') {
    FUN_010db950();
  }
  return unaff_EBX;
}

