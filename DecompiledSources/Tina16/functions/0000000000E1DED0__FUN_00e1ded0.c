/* Ghidra address: 00e1ded0 */
/* Ghidra symbol: FUN_00e1ded0 */


undefined8 FUN_00e1ded0(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e918 == (code *)0x0) {
      DAT_0202e918 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetHWInstrCount");
    }
    if (DAT_0202e918 != (code *)0x0) {
      uVar1 = (*DAT_0202e918)(param_1,param_2);
      return uVar1;
    }
  }
  *param_2 = 0;
  return 0;
}

