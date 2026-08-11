/* Ghidra address: 00e01bc0 */
/* Ghidra symbol: FUN_00e01bc0 */


void FUN_00e01bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_820 [2];
  undefined1 local_80d [2049];
  int local_c;
  
  local_820[0] = 0;
  FUN_004b84c0(param_2,&local_c,4);
  FUN_004b84c0(param_2,local_80d,(longlong)local_c);
  FUN_00442ae0(local_820,local_80d);
  FUN_00414bf0(param_1,local_820[0]);
  FUN_004144d0(local_820);
  return;
}

