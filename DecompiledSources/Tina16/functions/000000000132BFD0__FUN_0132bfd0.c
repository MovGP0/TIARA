/* Ghidra address: 0132bfd0 */
/* Ghidra symbol: FUN_0132bfd0 */


undefined4 FUN_0132bfd0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_18 = 0;
  local_20[0] = param_2;
  FUN_00442f70(&local_10,local_res8[0],local_20,0);
  uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return local_24;
}

