/* Ghidra address: 00974540 */
/* Ghidra symbol: FUN_00974540 */


void FUN_00974540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  longlong local_98;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_b0 = auStack_d8;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      local_20 = FUN_0096fb60(&PTR_FUN_0091dac8,1,param_2,param_3);
      FUN_00414b90(local_20 + 0x88,*(undefined8 *)(param_1 + 0x80));
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))(*(longlong **)(param_1 + 0x88),local_20)
      ;
      FUN_00410f20(local_20);
      while (local_30 = *(longlong *)(param_1 + 0x78), 0 < *(int *)(local_30 + 0x10)) {
        if (*(int *)(local_30 + 0x10) == 0) {
          FUN_00594f90();
        }
        local_48 = **(undefined8 **)(local_30 + 8);
        local_40 = *(longlong *)(param_1 + 0x78);
        local_98 = local_40 + 8;
        local_38 = local_48;
        FUN_00596200(local_98,&local_48,&local_50);
        local_28 = local_50;
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))
                  (*(longlong **)(param_1 + 0x88),local_50);
        FUN_00410f20(local_28);
      }
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}

