/* Ghidra address: 00f32e60 */
/* Ghidra symbol: FUN_00f32e60 */


undefined1 FUN_00f32e60(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_39 = 1;
  cVar1 = *param_2;
  if (((cVar1 == '\x05') || ((byte)(cVar1 - 10U) < 2)) || (cVar1 == '\x12')) {
    FUN_00536420(&local_38,0);
    FUN_00417c40(param_3,&local_38,&DAT_00527bf8);
  }
  else {
    local_39 = FUN_00f2e820(param_1,param_2,param_3);
  }
  FUN_00417740(&local_38,&DAT_00527bf8);
  return local_39;
}

