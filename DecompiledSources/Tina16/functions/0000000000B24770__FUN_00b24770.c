/* Ghidra address: 00b24770 */
/* Ghidra symbol: FUN_00b24770 */


undefined8 FUN_00b24770(undefined8 param_1,undefined2 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  short sVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ushort uVar15;
  uint uVar16;
  ushort local_42;
  ushort local_36;
  short local_30;
  ushort local_2e;
  
  FUN_00415d10(param_1,0x14,0);
  uVar12 = FUN_00414df0(param_1);
  FUN_0040d200(uVar12,0x14,0);
  puVar13 = (undefined2 *)FUN_00414df0(param_1);
  *puVar13 = *param_2;
  lVar14 = FUN_00414df0(param_1);
  *(undefined2 *)(lVar14 + 2) = param_2[1];
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = *(byte *)((longlong)param_2 + 5);
  local_2e = (ushort)(*(char *)((longlong)param_2 + 7) != '\0');
  bVar3 = *(byte *)(param_2 + 4);
  uVar4 = *(undefined1 *)((longlong)param_2 + 9);
  uVar5 = *(undefined1 *)(param_2 + 5);
  local_42 = (ushort)(*(char *)(param_2 + 0xb) != '\0');
  local_36 = (ushort)(*(char *)((longlong)param_2 + 0x15) != '\0');
  if (local_36 == 1) {
    local_30 = 0xfff;
  }
  else {
    local_30 = 0;
  }
  cVar6 = *(char *)((longlong)param_2 + 0xb);
  bVar7 = *(byte *)(param_2 + 3);
  bVar8 = *(byte *)(param_2 + 6);
  uVar15 = 0;
  uVar16 = 0;
  if (*(byte *)((longlong)param_2 + 0x11) != 0) {
    uVar15 = (ushort)*(byte *)((longlong)param_2 + 0x11);
    uVar10 = FUN_00b1ba40(*(undefined1 *)((longlong)param_2 + 0xd));
    uVar16 = (uint)uVar10;
  }
  if (*(byte *)(param_2 + 9) != 0) {
    uVar15 = uVar15 | (ushort)*(byte *)(param_2 + 9) << 4;
    uVar10 = FUN_00b1ba40(*(undefined1 *)(param_2 + 7));
    uVar16 = uVar16 | (uint)uVar10 << 7;
  }
  if (*(byte *)((longlong)param_2 + 0x13) != 0) {
    uVar15 = uVar15 | (ushort)*(byte *)((longlong)param_2 + 0x13) << 8;
    uVar10 = FUN_00b1ba40(*(undefined1 *)((longlong)param_2 + 0xf));
    uVar16 = uVar16 | (uint)uVar10 << 0x10;
  }
  if (*(byte *)(param_2 + 10) != 0) {
    uVar15 = uVar15 | (ushort)*(byte *)(param_2 + 10) << 0xc;
    uVar10 = FUN_00b1ba40(*(undefined1 *)(param_2 + 8));
    uVar16 = uVar16 | (uint)uVar10 << 0x17;
  }
  lVar14 = FUN_00414df0(param_1);
  *(ushort *)(lVar14 + 10) = uVar15;
  lVar14 = FUN_00414df0(param_1);
  *(uint *)(lVar14 + 0xc) = uVar16;
  lVar14 = FUN_00414df0(param_1);
  *(ushort *)(lVar14 + 4) = local_30 << 4 | local_42 | local_36 * 4;
  lVar14 = FUN_00414df0(param_1);
  *(ushort *)(lVar14 + 6) = (ushort)bVar1 | (ushort)bVar2 << 4 | local_2e * 8 | (ushort)bVar7 << 8;
  lVar14 = FUN_00414df0(param_1);
  *(ushort *)(lVar14 + 8) = (ushort)(cVar6 != '\0') << 5 | (ushort)(bVar8 & 0xf);
  lVar14 = FUN_00414df0(param_1);
  *(uint *)(lVar14 + 0xe) = *(uint *)(lVar14 + 0xe) | (uint)bVar3 << 0x1a;
  uVar9 = uVar4;
  if (bVar3 == 1) {
    uVar9 = uVar5;
    uVar5 = uVar4;
  }
  uVar15 = FUN_00b1ba40(uVar9);
  sVar11 = FUN_00b1ba40(uVar5);
  lVar14 = FUN_00414df0(param_1);
  *(ushort *)(lVar14 + 0x12) = uVar15 | sVar11 << 7;
  lVar14 = FUN_00414df0(param_1);
  *(ushort *)(lVar14 + 8) = *(ushort *)(lVar14 + 8) | 0x400;
  return param_1;
}

