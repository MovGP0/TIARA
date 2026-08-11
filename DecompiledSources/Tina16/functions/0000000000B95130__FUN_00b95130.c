/* Ghidra address: 00b95130 */
/* Ghidra symbol: FUN_00b95130 */


void FUN_00b95130(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30[0] = 0xd4 - param_2;
  FUN_00442f70(local_20,L"OCollection error: %d",local_30,0);
  FUN_0072d440(local_20[0],1,4,0);
  local_28 = 0;
  local_30[0] = 0xd4 - param_2;
  FUN_00442f70(&local_38,L"OCollection error: %d",local_30,0);
  uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_38);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

