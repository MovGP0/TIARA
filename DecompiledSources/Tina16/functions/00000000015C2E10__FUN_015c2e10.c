/* Ghidra address: 015c2e10 */
/* Ghidra symbol: FUN_015c2e10 */


void FUN_015c2e10(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_b8 [19];
  int local_1c;
  
  puVar4 = local_b8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_015c2360(param_1);
  uVar1 = FUN_015c2df0(param_2);
  FUN_015c2ad0(param_1,uVar1);
  iVar2 = FUN_015c2df0();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_015c29e0(param_2,local_b8,local_1c);
      FUN_015c24e0(param_1,local_1c,local_b8);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00417740(local_b8,&DAT_015b9418);
  return;
}

