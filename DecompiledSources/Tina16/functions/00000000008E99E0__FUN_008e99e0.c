/* Ghidra address: 008e99e0 */
/* Ghidra symbol: FUN_008e99e0 */


void FUN_008e99e0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  if ((int)param_2 == 10) {
    cVar1 = *(char *)((longlong)param_1 + 0xd);
    if (cVar1 == '\0') {
      FUN_008e6d60(param_1,&DAT_01e2881c,4);
      *param_3 = 4;
    }
    else if (cVar1 == '\x01') {
      FUN_008e6d60(param_1,&DAT_01e28820,4);
      *param_3 = 4;
    }
    else if (cVar1 == '\x02') {
      FUN_008e6d60(param_1,&DAT_01e28824,8);
      *param_3 = 8;
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  }
  return;
}

