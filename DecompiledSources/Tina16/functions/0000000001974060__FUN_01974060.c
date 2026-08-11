/* Ghidra address: 01974060 */
/* Ghidra symbol: FUN_01974060 */


undefined8 FUN_01974060(longlong param_1,undefined8 param_2)

{
  undefined8 in_stack_00000030;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_0046cb70(&local_30,in_stack_00000030,1,&DAT_01974150);
  FUN_00467e90(&local_38,&local_30);
  FUN_0046cb70(&local_50,in_stack_00000030,1,&LAB_01974154);
  FUN_018164f0(*(undefined8 *)(param_1 + 0x298),local_38,&local_50);
  FUN_00460ba0(&local_50);
  FUN_00414480(&local_38);
  FUN_00460ba0(&local_30);
  return param_2;
}

