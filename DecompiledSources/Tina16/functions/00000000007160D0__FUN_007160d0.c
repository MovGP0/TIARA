/* Ghidra address: 007160d0 */
/* Ghidra symbol: FUN_007160d0 */


undefined8
FUN_007160d0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
            undefined8 param_5)

{
  short sVar1;
  
  sVar1 = (short)param_4;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
  }
  if (sVar1 == 1) {
    FUN_00715890(param_1,(undefined4)param_5,param_3);
  }
  else if (sVar1 == 2) {
    FUN_00715100(param_1);
  }
  else if (sVar1 == 3) {
    FUN_00715da0(param_1);
  }
  else if (sVar1 == 8) {
    FUN_00715890(param_1,(undefined4)param_5,param_3);
  }
  else {
    FUN_00715170(param_1,param_2,param_3,param_4,param_5);
  }
  return 1;
}

