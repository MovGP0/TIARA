/* Ghidra address: 00c8d560 */
/* Ghidra symbol: FUN_00c8d560 */


void FUN_00c8d560(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 == (longlong *)0x0) {
    if ((*(int *)(param_1 + 200 + (param_2 & 0xff) * 0x18) == 1) &&
       (*(longlong *)(param_1 + 0xa8) != 0)) {
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1,param_2 & 0xffffffff);
    }
    piVar1 = (int *)(param_1 + 200 + (param_2 & 0xff) * 0x18);
    *piVar1 = *piVar1 + -1;
  }
  else {
    (**(code **)(*plVar2 + 0xa0))(plVar2);
  }
  return;
}

