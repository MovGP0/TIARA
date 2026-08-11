/* Ghidra address: 007847e0 */
/* Ghidra symbol: FUN_007847e0 */


void FUN_007847e0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,uint param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined4 param_10)

{
  ulonglong in_stack_ffffffffffffff98;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_8 == (undefined8 *)0x0) {
    FUN_00423010(&local_38,0,0,0,in_stack_ffffffffffffff98 & 0xffffffff00000000);
    *param_9 = local_38;
    param_9[1] = uStack_30;
  }
  else {
    *param_9 = *param_8;
    param_9[1] = param_8[1];
  }
  (**(code **)(*param_2 + 0x1e8))(param_2,local_48,param_5);
  FUN_00778f70(param_2,param_3,local_48,param_6,param_9,param_7 | 2,param_10,0);
  return;
}

