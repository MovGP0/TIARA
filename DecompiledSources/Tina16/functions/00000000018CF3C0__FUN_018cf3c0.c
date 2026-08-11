/* Ghidra address: 018cf3c0 */
/* Ghidra symbol: FUN_018cf3c0 */


void FUN_018cf3c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(longlong *)(param_2 + 0x1c0) != 0) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x40) + 0x158,*(undefined8 *)(param_2 + 0x10));
    if (*(char *)(param_2 + 0x1ca) == '\0') {
      uVar2 = FUN_0040c770(*(double *)(param_1 + 0x90) - *(double *)(param_2 + 0xb0));
    }
    else {
      uVar2 = FUN_0040c770(*(double *)(param_1 + 0x90) - *(double *)(param_2 + 0x238));
    }
    if (*(char *)(param_2 + 0xc5) != '\0') {
      FUN_01970cf0(*(undefined8 *)(param_1 + 0x40),&local_38,*(undefined8 *)(param_2 + 0x1c0),0);
      FUN_0046c3f0(&local_20,&local_38);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
      (**(code **)(*plVar1 + 0x28))(plVar1,local_20,uVar2);
    }
  }
  FUN_00460ba0(&local_38);
  FUN_00414480(&local_20);
  return;
}

