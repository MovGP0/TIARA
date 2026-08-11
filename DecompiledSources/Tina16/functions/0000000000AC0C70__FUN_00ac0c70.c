/* Ghidra address: 00ac0c70 */
/* Ghidra symbol: FUN_00ac0c70 */


void FUN_00ac0c70(longlong param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  (**(code **)(**(longlong **)(param_1 + 0x560) + 0x48))
            (*(longlong **)(param_1 + 0x560),param_2,&local_2c,&local_30,param_5,param_6);
  FUN_00a9cee0(param_1,param_2,&local_34,&local_38,param_5,param_6);
  if (local_2c < local_34) {
    local_2c = local_34;
  }
  *param_3 = local_2c;
  if (local_30 < local_38) {
    local_30 = local_38;
  }
  *param_4 = local_30;
  return;
}

