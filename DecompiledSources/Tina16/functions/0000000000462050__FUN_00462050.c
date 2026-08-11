/* Ghidra address: 00462050 */
/* Ghidra symbol: FUN_00462050 */


void FUN_00462050(undefined8 param_1,short *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *local_30 [2];
  
  if (*param_2 == 0x101) {
    FUN_00461d00(param_1,param_2,param_3);
  }
  else {
    cVar1 = FUN_0046eed0(*param_2,local_30);
    if (cVar1 == '\0') {
      cVar1 = FUN_0046eed0(param_3,local_30);
      if (cVar1 == '\0') {
        FUN_00461fb0(param_1,param_2,param_3);
      }
      else {
        (**(code **)(*local_30[0] + 0x30))(local_30[0],param_1,param_2);
      }
    }
    else {
      (**(code **)(*local_30[0] + 0x38))(local_30[0],param_1,param_2,param_3);
    }
  }
  return;
}

