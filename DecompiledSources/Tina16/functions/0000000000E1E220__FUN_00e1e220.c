/* Ghidra address: 00e1e220 */
/* Ghidra symbol: FUN_00e1e220 */


undefined4
FUN_00e1e220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e960 == (code *)0x0) {
      DAT_0202e960 = (code *)FUN_00427c10(DAT_01edc8a0,L"SendPICOp");
    }
    if (DAT_0202e960 != (code *)0x0) {
      uVar1 = (*DAT_0202e960)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return uVar1;
}

