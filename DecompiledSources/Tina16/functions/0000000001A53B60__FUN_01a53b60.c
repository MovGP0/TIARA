/* Ghidra address: 01a53b60 */
/* Ghidra symbol: FUN_01a53b60 */


void FUN_01a53b60(undefined8 param_1,longlong param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_013b7990(PTR_DAT_02004010,&local_10,&local_18,&local_20);
  FUN_00414ad0(param_2 + 0x10,local_10);
  FUN_00414ad0(param_2 + 0x18,local_18);
  FUN_00414560(&local_20,3);
  return;
}

