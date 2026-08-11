/* Ghidra address: 018734a0 */
/* Ghidra symbol: FUN_018734a0 */


undefined1 FUN_018734a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  FUN_00410ae0(param_1,&local_28);
  local_20 = local_28;
  local_18 = 0x11;
  FUN_00442f70(&local_10,L"Method LoadBy in %s",&local_20,0);
  uVar1 = FUN_0044d490(&PTR_FUN_00436b60,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return local_29;
}

