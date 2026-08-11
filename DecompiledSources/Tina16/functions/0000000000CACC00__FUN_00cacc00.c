/* Ghidra address: 00cacc00 */
/* Ghidra symbol: FUN_00cacc00 */


void FUN_00cacc00(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = param_2;
  if (param_3 != '\0') {
    local_30 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x68))
                         (*(longlong **)PTR_DAT_020050b0,param_2);
  }
  FUN_008780c0(local_20,local_30);
  (**(code **)(*param_1 + 0x130))(param_1,local_20[0],0xffffffff,0);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

