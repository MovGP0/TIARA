/* Ghidra address: 00bd4690 */
/* Ghidra symbol: FUN_00bd4690 */


void FUN_00bd4690(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 5) != param_2) {
    *(char *)(param_1 + 5) = param_2;
    FUN_00bd4800(param_1);
    (**(code **)*param_1)(param_1);
    plVar1 = (longlong *)param_1[3];
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    *(undefined4 *)(param_1 + 6) = uVar2;
  }
  return;
}

