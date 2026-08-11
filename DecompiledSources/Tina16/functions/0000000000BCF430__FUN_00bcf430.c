/* Ghidra address: 00bcf430 */
/* Ghidra symbol: FUN_00bcf430 */


void FUN_00bcf430(longlong param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int local_res18;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  if (0 < param_3) {
    if ((param_2 < 0) || (puVar1 = auStack_58, *(int *)(param_1 + 0x40) <= param_2)) {
      FUN_00bceea0(param_2);
      puVar1 = local_30;
    }
    local_30 = puVar1;
    local_1c = *(int *)(param_1 + 0x40) - (param_2 + param_3);
    local_res18 = param_3;
    if (local_1c < 0) {
      local_res18 = *(int *)(param_1 + 0x40) - param_2;
    }
    local_38 = (longlong)param_2;
    FUN_00417840(*(longlong *)(param_1 + 0x38) + local_38 * 0x28,&DAT_00bcca10,(longlong)local_res18
                );
    if (0 < local_1c) {
      FUN_004b3260(param_1);
      FUN_00409a70(*(longlong *)(param_1 + 0x38) + (longlong)(param_2 + local_res18) * 0x28,
                   *(longlong *)(param_1 + 0x38) + local_38 * 0x28,(longlong)(local_1c * 0x28));
      FUN_004b3390(param_1);
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - local_res18;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1,param_2,local_res18);
    }
  }
  return;
}

