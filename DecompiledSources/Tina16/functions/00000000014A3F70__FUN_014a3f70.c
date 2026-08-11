/* Ghidra address: 014a3f70 */
/* Ghidra symbol: FUN_014a3f70 */


void FUN_014a3f70(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 local_bf0;
  undefined1 local_be8 [200];
  undefined8 local_b20 [19];
  double local_a88;
  double local_a20;
  undefined8 local_990;
  undefined1 local_2b0 [152];
  double local_218;
  undefined8 local_1a8 [50];
  
  local_c00 = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  FUN_00417580(local_be8,&DAT_01d0d0b8);
  lVar3 = *(longlong *)(*param_1 + 0x48);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x490) == '\0')) {
    puVar4 = PTR_DAT_02004010;
    FUN_00417c40(local_be8,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    puVar4 = (undefined *)(lVar3 + 0x492);
    FUN_00417c40(local_be8,puVar4,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    FUN_004168e0(&local_bf0,local_990);
    iVar2 = FUN_01d31290(local_bf0);
    FUN_01d31180(*param_1,0xf28c,0x24,iVar2 + 400);
    puVar5 = local_b20;
    puVar6 = local_1a8;
    for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_01d311c0(*param_1,local_1a8,400);
    FUN_01d31630(*param_1,local_990);
  }
  else if (bVar1 == 2) {
    FUN_00415dd0(&local_bf8,local_990,0);
    iVar2 = FUN_01d31230(local_bf8);
    FUN_01d31180(*param_1,0xf28c,0x23,iVar2 + 400);
    puVar5 = local_b20;
    puVar6 = local_1a8;
    for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_01d311c0(*param_1,local_1a8,400);
    FUN_00415dd0(&local_c00,local_990,0);
    FUN_01d315a0(*param_1,local_c00);
  }
  else {
    FUN_01d31180(*param_1,0xf28c,0x20,0x108);
    FUN_00409a70(local_b20,local_2b0,0x108);
    if (local_a20 != 0.0) {
      lVar3 = FUN_0040c770(local_a88 / DAT_01f510f8);
      local_218 = (double)lVar3;
    }
    FUN_01d311c0(*param_1,local_2b0,0x108);
  }
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00414590(&local_c00,2);
  FUN_00414520(&local_bf0);
  FUN_00417740(local_be8,&DAT_01d0d0b8);
  return;
}

