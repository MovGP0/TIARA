/* Ghidra address: 017cc620 */
/* Ghidra symbol: FUN_017cc620 */


void FUN_017cc620(longlong param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,char param_6,undefined1 param_7)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_017cc0e0(param_1,param_2,param_3,local_res20,param_5,param_7);
  if ((param_6 != '\0') && (*(char *)(param_1 + 0x108) != '\x03')) {
    FUN_017cc3c0(param_2,param_3,local_res20,param_5,param_7);
  }
  FUN_00414560(&local_res20,2);
  return;
}

