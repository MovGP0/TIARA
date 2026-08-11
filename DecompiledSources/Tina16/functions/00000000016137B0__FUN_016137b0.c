/* Ghidra address: 016137b0 */
/* Ghidra symbol: FUN_016137b0 */


undefined8 FUN_016137b0(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  
  sVar1 = FUN_01d03160(param_2);
  if (sVar1 == 0x85) {
    FUN_00414ad0(param_1,L"SPICE_VC_VS_");
  }
  else if (sVar1 == 0x37) {
    FUN_00414ad0(param_1,L"SPICE_CC_VS_");
  }
  else if (sVar1 == 0x84) {
    FUN_00414ad0(param_1,L"SPICE_VC_CS_");
  }
  else if (sVar1 == 0x36) {
    FUN_00414ad0(param_1,L"SPICE_CC_CS_");
  }
  else if (sVar1 == 0xd) {
    FUN_00414ad0(param_1,L"CSOUR_");
  }
  else if (sVar1 == 0xe) {
    FUN_00414ad0(param_1,L"VSOUR_");
  }
  else if (sVar1 == 0x10) {
    FUN_00414ad0(param_1,L"VGEN_");
  }
  else if (sVar1 == 9) {
    FUN_00414ad0(param_1,L"RES_");
  }
  else {
    FUN_00414ad0(param_1,L"Undefined");
  }
  return param_1;
}

