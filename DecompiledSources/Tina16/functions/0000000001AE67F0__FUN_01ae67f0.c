/* Ghidra address: 01ae67f0 */
/* Ghidra symbol: FUN_01ae67f0 */


void FUN_01ae67f0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  cVar1 = FUN_01acff30(param_1,&local_10);
  if (cVar1 == '\x02') {
    FUN_01ac8200(local_10);
    FUN_00410f20(local_10);
  }
  else {
    FUN_0041ddd0(local_20,&PTR_PTR_01acd590);
    FUN_0072d440(local_20[0],1,4,0);
    FUN_00410f20(local_10);
  }
  FUN_00414480(local_20);
  return;
}

