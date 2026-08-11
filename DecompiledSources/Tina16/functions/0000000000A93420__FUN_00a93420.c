/* Ghidra address: 00a93420 */
/* Ghidra symbol: FUN_00a93420 */


undefined8 FUN_00a93420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong local_20 [2];
  
  cVar1 = FUN_00a93390(param_1,param_3,local_20);
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(local_20[0] + 0x28));
  }
  return param_2;
}

