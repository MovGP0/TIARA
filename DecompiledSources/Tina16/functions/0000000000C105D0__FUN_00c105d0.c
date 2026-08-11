/* Ghidra address: 00c105d0 */
/* Ghidra symbol: FUN_00c105d0 */


void FUN_00c105d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x538);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00bdbcc0);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  if (*(longlong *)(param_1 + 2000) != 0) {
    (**(code **)(param_1 + 2000))
              (*(undefined8 *)(param_1 + 0x7d8),param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

