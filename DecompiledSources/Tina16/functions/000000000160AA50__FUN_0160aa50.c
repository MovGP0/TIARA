/* Ghidra address: 0160aa50 */
/* Ghidra symbol: FUN_0160aa50 */


undefined8 * FUN_0160aa50(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_b8;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = (longlong *)FUN_01b21480(L"FLASH_SIZE,SRAM_SIZE,TEMP_RANGE,PERIPHERALS");
  (**(code **)(*local_20 + 0x18))(local_20,&local_38,0);
  FUN_0043f750(&local_40,*param_2);
  local_98 = (undefined *)local_40;
  local_90 = &DAT_0160ad6c;
  FUN_00416cd0(param_1,4,local_38,&DAT_0160ad5c);
  (**(code **)(*local_20 + 0x18))(local_20,&local_48,1);
  FUN_0043f750(&local_50,param_2[1]);
  local_98 = &DAT_0160ad5c;
  local_90 = (undefined *)local_50;
  local_88 = &DAT_0160ad6c;
  FUN_00416cd0(param_1,5,*param_1,local_48);
  (**(code **)(*local_20 + 0x18))(local_20,&local_58,2);
  FUN_01609fe0(&local_60,param_2[2]);
  local_98 = &DAT_0160ad5c;
  local_90 = (undefined *)local_60;
  local_88 = &DAT_0160ad6c;
  FUN_00416cd0(param_1,5,*param_1,local_58);
  (**(code **)(*local_20 + 0x18))(local_20,&local_68,3);
  FUN_0043fbc0(&local_70,param_2[3],8);
  local_98 = &DAT_0160ad5c;
  local_90 = (undefined *)local_70;
  FUN_00416cd0(param_1,4,*param_1,local_68);
  FUN_00410f20(local_20);
  FUN_00414560(&local_70,8);
  return param_1;
}

