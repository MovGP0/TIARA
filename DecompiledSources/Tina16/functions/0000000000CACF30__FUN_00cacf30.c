/* Ghidra address: 00cacf30 */
/* Ghidra symbol: FUN_00cacf30 */


void FUN_00cacf30(longlong *param_1,undefined2 param_2,char param_3)

{
  undefined2 local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = param_2;
  if (param_3 != '\0') {
    local_24 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x58))
                         (*(longlong **)PTR_DAT_020050b0,param_2);
  }
  FUN_00878200(local_20,local_24);
  (**(code **)(*param_1 + 0x130))(param_1,local_20[0],0xffffffff,0);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

