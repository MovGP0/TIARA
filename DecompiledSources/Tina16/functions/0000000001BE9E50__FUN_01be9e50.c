/* Ghidra address: 01be9e50 */
/* Ghidra symbol: FUN_01be9e50 */


void FUN_01be9e50(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  (**(code **)(*param_1 + 600))(param_1,1);
  *(undefined1 *)(param_1 + 0x6e) = 0;
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1);
    if ((0 < *(int *)((longlong)plVar3 + 0xdc)) && (*(char *)((longlong)plVar3 + 0xca) == '\0')) {
      (**(code **)(*plVar3 + 0xe0))(plVar3,1);
    }
  }
  if (param_1[0xf] != 0) {
    uVar2 = FUN_0065b870(param_1[0xf]);
    thunk_FUN_0413e052(uVar2,0xb404,0,param_1);
  }
  return;
}

