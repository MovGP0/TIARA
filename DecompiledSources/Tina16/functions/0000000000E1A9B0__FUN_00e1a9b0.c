/* Ghidra address: 00e1a9b0 */
/* Ghidra symbol: FUN_00e1a9b0 */


undefined4
FUN_00e1a9b0(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  uVar1 = 0xffffffff;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5e8 == (code *)0x0) {
      DAT_0202e5e8 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadSACurve");
    }
    uVar1 = 0xffffffff;
    if (DAT_0202e5e8 != (code *)0x0) {
      uVar1 = (*DAT_0202e5e8)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9);
    }
  }
  return uVar1;
}

