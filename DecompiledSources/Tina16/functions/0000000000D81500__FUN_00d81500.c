/* Ghidra address: 00d81500 */
/* Ghidra symbol: FUN_00d81500 */


void FUN_00d81500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulonglong *param_5)

{
  undefined4 local_4c;
  
  local_4c = (undefined4)(*param_5 >> 0x20);
  FUN_00d58810(param_5[2],param_3,*param_5 & 0xffffffff,local_4c);
  return;
}

