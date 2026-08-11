/* Ghidra address: 008787b0 */
/* Ghidra symbol: FUN_008787b0 */


undefined8 FUN_008787b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  uint uVar2;
  undefined8 local_10;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_10 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  uVar1 = FUN_0086e810(&LAB_0086e608,param_2,&local_10,param_3,(ulonglong)uVar2 << 0x20);
  FUN_008785a0(param_1,local_10,0,uVar1,local_res20);
  FUN_00419430(&local_10,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return param_1;
}

