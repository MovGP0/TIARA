/* Ghidra address: 004c2e50 */
/* Ghidra symbol: FUN_004c2e50 */


longlong FUN_004c2e50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *in_stack_ffffffffffffff98;
  longlong local_38;
  undefined1 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  FUN_00414b50(&local_28,param_2);
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_20[0] = FUN_004d3a80(*(longlong *)(param_1 + 0x38),local_28);
  }
  if (local_20[0] == 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      in_stack_ffffffffffffff98 = local_20;
      (**(code **)(param_1 + 0xb0))
                (*(undefined8 *)(param_1 + 0xb8),param_1,local_28,param_3,in_stack_ffffffffffffff98)
      ;
    }
    if (local_20[0] == 0) {
      local_38 = local_28;
      local_30 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_00471c70,1,PTR_PTR_020028d0,&local_38,
                           (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000);
      FUN_004134c0(uVar1);
    }
  }
  FUN_00414480(&local_28);
  return local_20[0];
}

