/* Ghidra address: 00786630 */
/* Ghidra symbol: FUN_00786630 */


void FUN_00786630(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  if (*(char *)((longlong)param_1 + 0x22) != '\0') {
    if (*(char *)((longlong)param_1 + 0x19) == '\0') {
      local_28 = *(undefined8 *)(param_2 + 8);
      local_2c = thunk_FUN_03b57162(local_28);
      local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      FUN_005ffb10(local_20,local_28);
      (**(code **)(*param_1 + 0x28))(param_1,local_20);
      if (*(char *)((longlong)param_1 + 0x25) != '\0') {
        (**(code **)(*param_1 + 0x20))(param_1,local_20);
      }
      FUN_005ffb10(local_20,0);
      FUN_00410f20(local_20);
      thunk_FUN_0402759f(local_28,local_2c);
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

