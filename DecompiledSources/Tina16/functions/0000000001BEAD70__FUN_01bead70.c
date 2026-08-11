/* Ghidra address: 01bead70 */
/* Ghidra symbol: FUN_01bead70 */


void FUN_01bead70(longlong *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  if ((param_1[100] == 0) || (*(longlong *)(param_1[100] + 0x30) == 0)) {
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0061c2b8);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1);
      if ((0 < *(int *)((longlong)plVar3 + 0xdc)) && (*(char *)((longlong)plVar3 + 0xca) == '\0')) {
        (**(code **)(*plVar3 + 0xe0))(plVar3,1);
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_0065b870(param_1[0xf]);
      thunk_FUN_0413e052(uVar2,0xb403,0,param_1);
    }
  }
  return;
}

