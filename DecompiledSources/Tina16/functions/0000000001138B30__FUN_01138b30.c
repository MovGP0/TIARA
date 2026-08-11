/* Ghidra address: 01138b30 */
/* Ghidra symbol: FUN_01138b30 */


void FUN_01138b30(longlong param_1,undefined4 param_2,double *param_3,double *param_4,
                 double *param_5,double *param_6)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x950),cVar1 == '\0');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x900),cVar1 == '\x01');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x8f8),cVar1 == '\x02');
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x908),cVar1 == '\x03');
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x118))(*(longlong **)(param_1 + 0xa18),param_2);
  if (1e+29 < *param_3 || *param_3 == 1e+29) {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xb8))(*(longlong **)(param_1 + 0xa18),param_3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xe0))(*(longlong **)(param_1 + 0xa18),param_3);
  }
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x98))(*(longlong **)(param_1 + 0xa18),*param_3);
  if (1e+29 < *param_4 || *param_4 == 1e+29) {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xc0))(*(longlong **)(param_1 + 0xa18),param_4);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xe8))
              (*(longlong **)(param_1 + 0xa18),param_4,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xa0))(*(longlong **)(param_1 + 0xa18),*param_4);
  if (1e+29 < *param_5 || *param_5 == 1e+29) {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 200))(*(longlong **)(param_1 + 0xa18),param_5);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))(*(longlong **)(param_1 + 0xa18),param_5);
  }
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xa8))(*(longlong **)(param_1 + 0xa18),*param_5);
  if (1e+29 < *param_6 || *param_6 == 1e+29) {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xd0))(*(longlong **)(param_1 + 0xa18),param_6);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf8))(*(longlong **)(param_1 + 0xa18),param_6);
  }
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xb0))(*(longlong **)(param_1 + 0xa18),*param_6);
  FUN_0113a780(param_1);
  FUN_011390d0(param_1);
  FUN_0113a9b0(param_1);
  return;
}

