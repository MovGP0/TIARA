/* Ghidra address: 0177f210 */
/* Ghidra symbol: FUN_0177f210 */


undefined8 FUN_0177f210(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 *local_10;
  
  local_10 = (undefined2 *)0x0;
  FUN_00414b50(&local_10,param_2);
  FUN_00416e20(&local_10,1,1);
  FUN_0177f180(&local_10);
  while( true ) {
    cVar1 = FUN_0177f090(*local_10);
    if (cVar1 == '\0') break;
    FUN_00416e20(&local_10,1,1);
  }
  FUN_0177f180(&local_10);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

