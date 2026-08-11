/* Ghidra address: 01550c40 */
/* Ghidra symbol: FUN_01550c40 */


undefined8 FUN_01550c40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong local_10;
  
  local_10 = 0;
  FUN_01571920(param_3,&local_10);
  if ((local_10 == 0) || (*(char *)(param_3 + 0x99) != '\0')) {
    FUN_01571a60(param_3,param_2);
  }
  else {
    FUN_01571960(param_3,param_2);
  }
  FUN_00414480(&local_10);
  return param_2;
}

