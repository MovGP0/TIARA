/* Ghidra address: 00741db0 */
/* Ghidra symbol: FUN_00741db0 */


void FUN_00741db0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  
  if ((param_5 & *(byte *)((longlong)param_1 + 0x342)) != 0) {
    cVar1 = FUN_00741cd0(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1a8))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x198))(param_1);
    }
  }
  if (param_1[100] != 0) {
    (*(code *)param_1[100])(param_1[0x65],param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

