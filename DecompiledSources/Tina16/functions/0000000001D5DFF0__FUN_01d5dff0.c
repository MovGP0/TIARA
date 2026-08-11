/* Ghidra address: 01d5dff0 */
/* Ghidra symbol: FUN_01d5dff0 */


void FUN_01d5dff0(undefined8 param_1)

{
  short sVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  int local_1c;
  
  local_38 = 0x3ff0000000000000;
  local_30 = FUN_016eb0a0(param_1,1);
  local_28 = FUN_016eb0a0(param_1,2);
  local_20 = FUN_016eacf0(param_1,3,2);
  sVar1 = FUN_016eaa90(param_1,4);
  local_1c = (int)sVar1;
  FUN_016ee260(param_1,&local_40,8,0);
  FUN_01d5ddc0(param_1,1,0,&local_38,local_40);
  return;
}

