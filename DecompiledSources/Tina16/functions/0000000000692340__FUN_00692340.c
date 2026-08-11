/* Ghidra address: 00692340 */
/* Ghidra symbol: FUN_00692340 */


void FUN_00692340(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 == 0xb00c) {
    FUN_006922a0(param_1);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*param_2 - 0xbd32U < 7) {
    uVar2 = FUN_005fbf20(*(undefined4 *)((longlong)param_1 + 0x1c));
    thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar2);
    uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[1] + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar2);
    uVar3 = FUN_005fdb10(param_1[1]);
    *(undefined8 *)(param_2 + 6) = uVar3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    FUN_00786c80(param_1,param_2);
  }
  if (*param_2 == 5) {
    if ((*(byte *)(param_1[2] + 0x2c8) & 4) != 0) {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*param_2 == 0xb007) {
    plVar4 = (longlong *)FUN_007810f0();
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  return;
}

