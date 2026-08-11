/* Ghidra address: 018678d0 */
/* Ghidra symbol: FUN_018678d0 */


void FUN_018678d0(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_4);
  if ((cVar1 == '\0') || ((*param_2 & 0x10) == 0)) {
    FUN_01868030(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    FUN_01853670(param_3,param_5,param_4,param_2[5]);
  }
  return;
}

