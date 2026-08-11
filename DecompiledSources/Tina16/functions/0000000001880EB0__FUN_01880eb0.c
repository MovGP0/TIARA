/* Ghidra address: 01880eb0 */
/* Ghidra symbol: FUN_01880eb0 */


void FUN_01880eb0(longlong param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_01880030(param_1);
  FUN_0041ddd0(&local_20,PTR_PTR_02001250);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_20);
  iVar2 = 0x6c;
  puVar1 = &DAT_01fb0d42;
  do {
    FUN_007dc700(&local_28,*puVar1);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_28);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00414560(&local_28,2);
  return;
}

