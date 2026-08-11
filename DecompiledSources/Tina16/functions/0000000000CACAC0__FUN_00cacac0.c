/* Ghidra address: 00cacac0 */
/* Ghidra symbol: FUN_00cacac0 */


void FUN_00cacac0(longlong *param_1,undefined4 param_2,char param_3)

{
  undefined4 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = param_2;
  if (param_3 != '\0') {
    local_28 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x60))
                         (*(longlong **)PTR_DAT_020050b0,param_2);
  }
  FUN_00878180(local_20,local_28);
  (**(code **)(*param_1 + 0x130))(param_1,local_20[0],0xffffffff,0);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

