/* Ghidra address: 01d85710 */
/* Ghidra symbol: FUN_01d85710 */


void FUN_01d85710(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_19 [9];
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x28) == '\0') {
    local_19[0] = *(char *)(param_1 + 0x29) == '\x01';
    puVar1 = auStack_58;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),local_19);
      puVar1 = local_30;
    }
    local_30 = puVar1;
    if (local_19[0] != '\0') {
      thunk_FUN_041cb702(*(undefined4 *)PTR_DAT_02005bd8,0x12,0,0);
    }
  }
  return;
}

