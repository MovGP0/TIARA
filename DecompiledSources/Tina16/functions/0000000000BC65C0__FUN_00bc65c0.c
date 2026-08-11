/* Ghidra address: 00bc65c0 */
/* Ghidra symbol: FUN_00bc65c0 */


int FUN_00bc65c0(longlong param_1,ushort *param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (((longlong)param_3 - (longlong)param_2) / 2 + 1 < 9) {
    for (; param_2 <= param_3; param_2 = param_2 + 1) {
      iVar1 = iVar1 * 10 + (uint)*param_2 + -0x30;
    }
    if ((iVar1 == 0x7fffffff) || (iVar1 < 0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x7a);
    }
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x7a);
  }
  return iVar1;
}

