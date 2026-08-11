/* Ghidra address: 004c2d70 */
/* Ghidra symbol: FUN_004c2d70 */


void FUN_004c2d70(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_20 [7];
  undefined1 local_19 [9];
  
  local_38 = 0;
  local_30[0] = 0;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,local_19,local_20);
    FUN_004c1d80(param_1,local_30);
    FUN_004c1d80(param_1,&local_38);
  }
  while( true ) {
    cVar1 = FUN_004be290(param_1);
    if (cVar1 != '\0') break;
    FUN_004c2d10(param_1);
  }
  FUN_004be030(param_1,0);
  while( true ) {
    cVar1 = FUN_004be290(param_1);
    if (cVar1 != '\0') break;
    FUN_004c2d70(param_1,1);
  }
  FUN_004be030(param_1,0);
  FUN_00414560(&local_38,2);
  return;
}

