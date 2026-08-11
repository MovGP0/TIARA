/* Ghidra address: 004b1090 */
/* Ghidra symbol: FUN_004b1090 */


void FUN_004b1090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  local_40 = 0;
  local_10 = 0;
  if (param_2 == (undefined8 *)0x0) {
    FUN_00414b50(&local_10,&LAB_004b1184);
  }
  else {
    FUN_00410ae0(*param_2,&local_10);
  }
  local_38 = local_10;
  local_30 = 0x11;
  FUN_00410ae0(*param_1,&local_40);
  local_28 = local_40;
  local_20 = 0x11;
  uVar1 = FUN_0044d8d0(&PTR_FUN_00436080,1,PTR_PTR_02003220,&local_38,1);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_40);
  FUN_00414480(&local_10);
  return;
}

