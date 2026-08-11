/* Ghidra address: 019dd540 */
/* Ghidra symbol: FUN_019dd540 */


int FUN_019dd540(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int local_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [48];
  undefined8 local_58 [7];
  
  local_a0 = 0;
  puVar4 = local_58;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004179d0(local_58,&DAT_00ea5ae8);
  FUN_00417580(local_88,&DAT_00ea5ae8);
  local_a4 = -1;
  FUN_00ea7520(local_58,local_88);
  cVar1 = FUN_00ea74f0(local_88);
  if (cVar1 != '\0') {
    FUN_00ea7500(local_88,&local_a0);
    local_90 = local_a0;
    local_98 = param_1 + 8;
    FUN_00595db0(local_98,&local_90);
    local_a4 = FUN_00ea74d0(local_88);
    iVar2 = FUN_00ea74e0(local_88);
    local_a4 = local_a4 + iVar2;
  }
  FUN_00414480(&local_a0);
  FUN_00417840(local_88,&DAT_00ea5ae8,2);
  return local_a4;
}

