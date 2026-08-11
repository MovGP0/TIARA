/* Ghidra address: 005fb9a0 */
/* Ghidra symbol: FUN_005fb9a0 */


void FUN_005fb9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 *local_40;
  undefined8 *local_38;
  char local_29;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  if (param_2 != (undefined8 *)0x0) {
    local_40 = param_1;
    local_38 = param_2;
    FUN_00427930(param_1 + 2);
    *(int *)(local_38 + 1) = *(int *)(local_38 + 1) + -1;
    local_29 = *(int *)(local_38 + 1) == 0;
    if ((bool)local_29) {
      puVar1 = (undefined8 *)param_1[1];
      if (param_2 == (undefined8 *)param_1[1]) {
        param_1[1] = *param_2;
      }
      else {
        do {
          local_28 = puVar1;
          puVar1 = (undefined8 *)*local_28;
        } while ((undefined8 *)*local_28 != param_2);
        *local_28 = *param_2;
      }
    }
    local_20 = param_1;
    FUN_00427ff0(param_1 + 2);
    if (local_29 != '\0') {
      if (local_38[2] != 0) {
        thunk_FUN_0416f828(local_38[2]);
      }
      (**(code **)*param_1)(param_1,param_2);
      FUN_004095f0(param_2);
    }
  }
  return;
}

