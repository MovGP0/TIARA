/* Ghidra address: 008e6e20 */
/* Ghidra symbol: FUN_008e6e20 */


void FUN_008e6e20(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int local_2c [3];
  
  if ((int)param_2 == 10) {
    cVar1 = *(char *)((longlong)param_1 + 0xd);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,10,param_3);
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0x20))(param_1,0xd,param_3);
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*param_1 + 0x20))(param_1,0xd,param_3);
      (**(code **)(*param_1 + 0x20))(param_1,10,local_2c);
      *param_3 = *param_3 + local_2c[0];
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  }
  return;
}

