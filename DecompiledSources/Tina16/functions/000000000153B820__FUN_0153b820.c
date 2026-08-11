/* Ghidra address: 0153b820 */
/* Ghidra symbol: FUN_0153b820 */


bool FUN_0153b820(undefined8 param_1,undefined1 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12,
                 undefined4 param_13,undefined1 param_14)

{
  char cVar1;
  longlong local_38;
  
  FUN_00414610(param_5);
  *(undefined8 *)PTR_DAT_02005a60 = param_1;
  local_38 = param_3;
  if (param_3 == 0) {
    local_38 = FUN_019a4600();
  }
  cVar1 = FUN_01349310(1,0,local_38,0,0,0,0,0,0,param_4,param_5,param_6,param_7,param_8,param_7,
                       param_8,param_9,param_10,param_11,param_12,param_13,param_14,0,0);
  if (param_3 != 0) {
    FUN_0153af00(param_2,local_38);
  }
  else {
    FUN_0153af00(param_2,0);
  }
  *(undefined8 *)PTR_DAT_02005a60 = 0;
  FUN_00414480(&param_5);
  return cVar1 == '\0';
}

