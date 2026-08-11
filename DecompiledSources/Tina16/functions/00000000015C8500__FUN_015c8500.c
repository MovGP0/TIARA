/* Ghidra address: 015c8500 */
/* Ghidra symbol: FUN_015c8500 */


int FUN_015c8500(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_148 [4];
  short local_126;
  undefined8 local_b8 [5];
  int local_8e;
  int local_1c;
  
  puVar2 = local_148;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_b8;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1c = 0;
  lVar1 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
  if (*(int *)(lVar1 + 0x18) == -1) {
    local_1c = local_1c + 8;
  }
  lVar1 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
  if (*(int *)(lVar1 + 0x14) == -1) {
    local_1c = local_1c + 8;
  }
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),local_b8,param_2);
  if (local_8e == -1) {
    local_1c = local_1c + 8;
  }
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),local_148,param_2);
  if (local_126 == -1) {
    local_1c = local_1c + 4;
  }
  if (0 < local_1c) {
    local_1c = local_1c + 4;
  }
  FUN_00417840(local_148,&DAT_015b9418,2);
  return local_1c;
}

