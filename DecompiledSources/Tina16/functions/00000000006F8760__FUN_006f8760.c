/* Ghidra address: 006f8760 */
/* Ghidra symbol: FUN_006f8760 */


void FUN_006f8760(longlong param_1,longlong param_2,undefined8 *param_3,undefined2 param_4)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_0064b230(*(undefined8 *)(param_1 + 0x498));
  if (*(longlong *)(param_1 + 0x6d0) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0xa8))
              (*(longlong **)(param_1 + 0x498),&local_38);
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x120))
              (*(longlong **)(param_1 + 0x498),(int)local_38 + 2,local_38._4_4_,
               *(undefined8 *)(param_2 + 0x30));
  }
  else {
    (**(code **)(param_1 + 0x6d0))
              (*(undefined8 *)(param_1 + 0x6d8),param_1,param_2,&local_38,param_4);
  }
  return;
}

