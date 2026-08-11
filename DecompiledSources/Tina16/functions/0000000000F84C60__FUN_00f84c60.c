/* Ghidra address: 00f84c60 */
/* Ghidra symbol: FUN_00f84c60 */


void FUN_00f84c60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_30[0] = 0;
  local_38 = 0;
  local_10 = 0;
  FUN_015fa560();
  if (((*(int *)(param_1 + 0xd28) == 2) && (*(char *)(param_1 + 0xd5a) != '\0')) &&
     (*(char *)(param_1 + 0x6b1) != '\0')) {
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    uVar2 = _get_next_event_time(*(undefined8 *)(param_1 + 0xd68),local_20,local_18);
    *(undefined8 *)(param_1 + 0x6e0) = uVar2;
    FUN_00f84bb0();
  }
  if ((*(int *)(param_1 + 0xd28) == 2) && (*(char *)(param_1 + 0xd5a) != '\0')) {
    *(undefined1 *)(param_1 + 0xd40) = 0;
    *(undefined1 *)(param_1 + 0x6b0) = 0;
    while (((*(longlong *)(param_1 + 0x6d0) < *(longlong *)(param_1 + 0xd48) &&
            (*(int *)(param_1 + 0xd28) == 2)) &&
           ((*(int *)(param_1 + 0xd28) != 0 &&
            ((*(char *)(param_1 + 0xd59) == '\0' && (*(longlong *)(param_1 + 0xd68) != 0))))))) {
      *(longlong *)(param_1 + 0x6d0) =
           *(longlong *)(param_1 + 0x6d0) + *(longlong *)(param_1 + 0x6c8);
      if (*(longlong *)(param_1 + 0x6e0) < *(longlong *)(param_1 + 0x6d0)) {
        uVar1 = _step_simulation_new
                          (*(undefined8 *)(param_1 + 0xd68),param_1 + 0x6b0,1,
                           *(undefined8 *)(param_1 + 0xcf8),*(undefined1 *)(param_1 + 0xd5d));
        *(undefined4 *)(param_1 + 0xd28) = uVar1;
        uVar2 = __get_simulation_time(*(undefined8 *)(param_1 + 0xd68));
        *(undefined8 *)(param_1 + 0x6d0) = uVar2;
        uVar2 = _get_next_event_time(*(undefined8 *)(param_1 + 0xd68),local_20,local_18);
        *(undefined8 *)(param_1 + 0x6e0) = uVar2;
        FUN_00f84bb0();
      }
      uVar2 = FUN_00f81cf0(*(undefined8 *)(param_1 + 0x6d0));
      *(undefined8 *)(param_1 + 0xd30) = uVar2;
    }
    if (*(char *)(param_1 + 0xd59) != '\0') {
      *(undefined4 *)(param_1 + 0xd28) = 1;
    }
    *(undefined1 *)(param_1 + 0xd40) = 1;
    if (*(char *)(param_1 + 0xd59) != '\0') {
      thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0xd70),0x1241,0,0);
    }
  }
  if (*(int *)(param_1 + 0xd28) == 0) {
    *(undefined1 *)(param_1 + 0xd5a) = 0;
    FUN_015f8f20(local_30,*(undefined8 *)(param_1 + 0xd68));
    FUN_00416880(&local_38,local_30[0]);
    FUN_016fd940(local_38);
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0xd70),0x123f,0,0);
  }
  FUN_00414480(&local_38);
  FUN_004144d0(local_30);
  FUN_00414480(&local_10);
  return;
}

