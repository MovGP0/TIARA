/* Ghidra address: 00f2cfc0 */
/* Ghidra symbol: FUN_00f2cfc0 */


void FUN_00f2cfc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_30 = 0;
  local_38 = 0;
  FUN_00410ae0(*param_2,&local_30);
  local_28 = local_30;
  local_20 = 0x11;
  FUN_00410ae0(*param_1,&local_38);
  local_18 = local_38;
  local_10 = 0x11;
  uVar1 = FUN_0044d8d0(&PTR_FUN_00f214b0,1,PTR_PTR_02004500,&local_28,1);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_38,2);
  return;
}

