/* Ghidra address: 00789550 */
/* Ghidra symbol: FUN_00789550 */


void FUN_00789550(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  *(undefined1 *)(param_1 + 8) = 0;
  cVar1 = FUN_00788df0(param_1);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x2a) != '\0')) {
    local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    uVar2 = thunk_FUN_0411fe47(*(undefined8 *)(param_1[3] + 0x18));
    FUN_005ffb10(local_20,uVar2);
    if (param_1[9] != 0) {
      (**(code **)(**(longlong **)(local_20 + 0x70) + 0x10))
                (*(longlong **)(local_20 + 0x70),param_1[9]);
    }
    (**(code **)(*param_1 + 0x18))(param_1,local_20);
    (**(code **)(*param_1 + 0x28))(param_1,local_20);
    uVar2 = FUN_005ffa40(local_20);
    thunk_FUN_041a9b5c(param_1[1],uVar2);
    FUN_005ffb10(local_20,0);
    FUN_00410f20(local_20);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

