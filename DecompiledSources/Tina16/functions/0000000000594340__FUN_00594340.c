/* Ghidra address: 00594340 */
/* Ghidra symbol: FUN_00594340 */


bool FUN_00594340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_00461840(&local_30,param_2);
  FUN_00461840(&local_48,param_3);
  cVar1 = FUN_0046c5b0(&local_30,&local_48);
  FUN_00417840(&local_48,&DAT_004013d8,2);
  return cVar1 == '\0';
}

