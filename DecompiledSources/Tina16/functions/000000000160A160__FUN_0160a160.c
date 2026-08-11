/* Ghidra address: 0160a160 */
/* Ghidra symbol: FUN_0160a160 */


undefined8 * FUN_0160a160(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_88;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = (longlong *)FUN_01b21480(L"FLASH_SIZE,SRAM_SIZE");
  (**(code **)(*local_20 + 0x18))(local_20,&local_38,0);
  FUN_0043f750(&local_40,*param_2);
  local_68 = (undefined *)local_40;
  local_60 = &LAB_0160a320;
  FUN_00416cd0(param_1,4,local_38,&DAT_0160a310);
  (**(code **)(*local_20 + 0x18))(local_20,&local_48,1);
  FUN_0043f750(&local_50,param_2[1]);
  local_68 = &DAT_0160a310;
  local_60 = (undefined1 *)local_50;
  FUN_00416cd0(param_1,4,*param_1,local_48);
  FUN_00410f20(local_20);
  FUN_00414560(&local_50,4);
  return param_1;
}

