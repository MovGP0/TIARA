/* Ghidra address: 015c2f10 */
/* Ghidra symbol: FUN_015c2f10 */


void FUN_015c2f10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_b8 [19];
  int local_20;
  int local_1c;
  
  puVar3 = local_b8;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_20 = FUN_015c2df0(param_1);
  iVar1 = FUN_015c2df0(param_2);
  FUN_015c2ad0(param_1,local_20 + iVar1);
  iVar1 = FUN_015c2df0();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_015c29e0(param_2,local_b8,local_1c);
      FUN_015c24e0(param_1,local_20 + local_1c,local_b8);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00417740(local_b8,&DAT_015b9418);
  return;
}

