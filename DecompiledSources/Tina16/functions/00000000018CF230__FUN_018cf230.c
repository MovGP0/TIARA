/* Ghidra address: 018cf230 */
/* Ghidra symbol: FUN_018cf230 */


void FUN_018cf230(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0xf1) == '\0') {
    if ((*(char *)(param_1 + 0xd8) != '\0') &&
       (cVar2 = FUN_004113d0(param_2,&PTR_FUN_01933448), cVar2 == '\0')) {
      return;
    }
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0xf1) = 1;
    *(undefined8 *)(param_1 + 0xe8) = param_2;
    if (param_3 == 0) {
      param_3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xd0))
                          (*(longlong **)(param_1 + 0x38));
    }
    *(int *)(param_1 + 0x110) = param_3;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
    uVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
    *(undefined8 *)(param_1 + 0x108) = uVar4;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xd8))(*(longlong **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x58))(*(longlong **)(param_1 + 0x98));
  }
  return;
}

