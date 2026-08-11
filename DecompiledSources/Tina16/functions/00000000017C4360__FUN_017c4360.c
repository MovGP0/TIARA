/* Ghidra address: 017c4360 */
/* Ghidra symbol: FUN_017c4360 */


void FUN_017c4360(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_017c3740(param_1);
  if (cVar1 != '\0') {
    FUN_004169a0(&local_10,param_1 + 0x2d8);
    FUN_017c3f60(local_10,param_2);
  }
  FUN_00414480(&local_10);
  return;
}

