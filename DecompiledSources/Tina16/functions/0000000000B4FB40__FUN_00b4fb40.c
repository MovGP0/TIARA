/* Ghidra address: 00b4fb40 */
/* Ghidra symbol: FUN_00b4fb40 */


void FUN_00b4fb40(longlong param_1,undefined4 param_2,undefined2 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  undefined8 local_30;
  
  FUN_00b4fb10(auStack_58);
  lVar2 = FUN_00b4fa80(param_1,param_2,param_3);
  if (lVar2 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + -0x20))(plVar1,1);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_38 = param_3;
    uVar3 = FUN_00b4e500(&PTR_FUN_00b461c0,1,param_1,param_2);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}

