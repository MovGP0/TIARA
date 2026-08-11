/* Ghidra address: 00789300 */
/* Ghidra symbol: FUN_00789300 */


void FUN_00789300(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  *(undefined1 *)(param_1 + 8) = 0;
  cVar1 = FUN_00788df0(param_1);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((char)param_1[5] != '\0') {
    if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
      local_28 = *(longlong *)(param_2 + 8);
      local_2c = 0;
      if (local_28 == 0) {
        local_28 = thunk_FUN_040ef593(param_1[1]);
      }
      else {
        local_2c = thunk_FUN_03b57162(local_28);
      }
      local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      FUN_005ffb10(local_20,local_28);
      if (param_1[9] != 0) {
        (**(code **)(**(longlong **)(local_20 + 0x70) + 0x10))
                  (*(longlong **)(local_20 + 0x70),param_1[9]);
      }
      if ((*(char *)((longlong)param_1 + 0x41) == '\0') ||
         (lVar2 = FUN_00788c30(param_1), lVar2 == 0)) {
        (**(code **)(*param_1 + 0x20))(param_1,local_20);
      }
      else {
        uVar3 = FUN_005ffa40(local_20);
        FUN_007892c0(param_1,uVar3);
      }
      if ((*(char *)((longlong)param_1 + 0x2d) != '\0') && (*(longlong *)(param_2 + 0x10) != 0x93))
      {
        (**(code **)(*param_1 + 0x10))(param_1,local_20);
      }
      FUN_005ffb10(local_20,0);
      FUN_00410f20(local_20);
      if (*(longlong *)(param_2 + 8) == 0) {
        thunk_FUN_041a9b5c(param_1[1],local_28);
      }
      else if (local_2c != 0) {
        thunk_FUN_0402759f(local_28,local_2c);
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined8 *)(param_2 + 0x18) = 1;
    return;
  }
  return;
}

