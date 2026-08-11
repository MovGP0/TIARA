/* Ghidra address: 014f12b0 */
/* Ghidra symbol: FUN_014f12b0 */


undefined8 FUN_014f12b0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_68 [2];
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  FUN_004179d0(&local_30,&DAT_00e044a8);
  local_68[0] = (undefined4)local_30;
  local_60 = 0;
  local_58 = local_28;
  local_50 = 0x11;
  local_48 = local_20;
  local_40 = 0x11;
  FUN_00442f70(param_1,
               L"<jsappsettings settings=\"%d\" instructions=\"%s\" model=\"%s\"></jsappsettings>",
               local_68,2);
  FUN_00417740(&local_30,&DAT_00e044a8);
  return param_1;
}

