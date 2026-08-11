/* Ghidra address: 019eb120 */
/* Ghidra symbol: FUN_019eb120 */


int FUN_019eb120(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int local_8c;
  undefined1 local_88 [48];
  undefined8 local_58 [7];
  
  puVar4 = local_58;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004179d0(local_58,&DAT_00ea5ae8);
  FUN_00417580(local_88,&DAT_00ea5ae8);
  local_8c = -1;
  FUN_00ea7520(local_58,local_88);
  cVar1 = FUN_00ea74f0(local_88);
  if (cVar1 != '\0') {
    local_8c = FUN_00ea74d0(local_88);
    iVar2 = FUN_00ea74e0(local_88);
    local_8c = local_8c + iVar2;
  }
  FUN_00417840(local_88,&DAT_00ea5ae8,2);
  return local_8c;
}

