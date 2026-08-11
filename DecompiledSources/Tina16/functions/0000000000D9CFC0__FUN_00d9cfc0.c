/* Ghidra address: 00d9cfc0 */
/* Ghidra symbol: FUN_00d9cfc0 */


void FUN_00d9cfc0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined1 local_48 [24];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_78;
  local_1c = 0;
  puVar1 = auStack_78;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    local_1c = thunk_FUN_03b57162(*(undefined8 *)(param_1 + 0x70));
    local_58 = (wchar_t *)
               CONCAT44(local_58._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xc));
    FUN_00428be0(*(undefined8 *)(param_1 + 0x70),**(undefined4 **)(param_1 + 0x90),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 4),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8));
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00d83520(local_48,*(undefined8 *)(param_1 + 0x88),param_3,param_4);
  local_58 = L"default";
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x338))
            (*(longlong **)(param_1 + 0x48),param_2,
             *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),local_48);
  if (local_1c != 0) {
    thunk_FUN_0402759f(*(undefined8 *)(param_1 + 0x70),local_1c);
  }
  return;
}

