/* Ghidra address: 00ea72c0 */
/* Ghidra symbol: FUN_00ea72c0 */


undefined8 FUN_00ea72c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468530(&local_30,*(undefined4 *)(param_1 + 0x18),0xfffffffffffffffc);
  FUN_00ea6fb0(param_1 + 8,param_2,&local_30);
  FUN_00460ba0(&local_30);
  return param_2;
}

