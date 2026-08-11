/* Ghidra address: 00c76780 */
/* Ghidra symbol: FUN_00c76780 */


longlong FUN_00c76780(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong local_res8;
  undefined1 auStack_178 [40];
  code *local_150;
  longlong local_148;
  undefined1 *local_140;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  int local_1c;
  
  local_140 = auStack_178;
  local_res8 = param_1;
  puVar1 = auStack_178;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_140;
  }
  local_140 = puVar1;
  uVar3 = 0;
  FUN_00723990(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x170) = 1;
  uVar6 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  uVar3 = FUN_00c648c0(&PTR_FUN_00c63270,uVar6);
  *(undefined8 *)(local_res8 + 0x210) = uVar3;
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  uVar3 = FUN_00c6e5a0(&PTR_FUN_00c6c400,uVar6);
  *(undefined8 *)(local_res8 + 0x220) = uVar3;
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  uVar3 = FUN_00c6f4c0(&PTR_FUN_00c6e098,uVar6,local_res8);
  *(undefined8 *)(local_res8 + 0x1c8) = uVar3;
  *(longlong *)(*(longlong *)(local_res8 + 0x210) + 0xa0) = local_res8;
  *(undefined1 *)(local_res8 + 0x2a0) = 0;
  local_148 = local_res8;
  local_150 = FUN_00c77640;
  uVar3 = FUN_004d6210(&local_150);
  *(undefined8 *)(local_res8 + 0x288) = uVar3;
  local_148 = local_res8;
  local_150 = FUN_00c77970;
  uVar3 = FUN_004d6210(&local_150);
  *(undefined8 *)(local_res8 + 0x278) = uVar3;
  local_148 = local_res8;
  local_150 = FUN_00c79d00;
  uVar3 = FUN_004d6210(&local_150);
  *(undefined8 *)(local_res8 + 600) = uVar3;
  local_148 = local_res8;
  local_150 = FUN_00c7a7c0;
  uVar3 = FUN_004d6210(&local_150);
  *(undefined8 *)(local_res8 + 0x268) = uVar3;
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  uVar3 = FUN_00c6e3a0(&PTR_FUN_00c6c950,uVar7);
  *(undefined8 *)(local_res8 + 0x218) = uVar3;
  local_1c = 0;
  do {
    uVar2 = *(ushort *)(local_res8 + 0x388);
    if ((byte)local_1c < 0x10) {
      uVar5 = (int)CONCAT62((int6)(uVar7 >> 0x10),1) << ((byte)local_1c & 0x1f);
      uVar7 = (ulonglong)uVar5;
      uVar2 = uVar2 | (ushort)uVar5;
    }
    *(ushort *)(local_res8 + 0x388) = uVar2;
    local_1c = local_1c + 1;
  } while (local_1c != 10);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x390) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x398) = uVar3;
  *(undefined8 *)(local_res8 + 0x1d8) = 0;
  *(undefined8 *)(local_res8 + 0x1e0) = 0;
  lVar4 = FUN_00c6e790(&PTR_FUN_00c6dae0,1);
  *(longlong *)(local_res8 + 0x1d0) = lVar4;
  *(longlong *)(lVar4 + 0x40) = local_res8;
  *(undefined4 *)(local_res8 + 0x180) = 0;
  *(undefined4 *)(local_res8 + 0x184) = 0;
  uVar3 = FUN_00c668b0(&PTR_FUN_00c66708,1);
  *(undefined8 *)(local_res8 + 0x1b8) = uVar3;
  uVar3 = FUN_0041b800(local_res8 + 0x3a8);
  thunk_FUN_03c61602(uVar3);
  uVar3 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x3d0) = uVar3;
  FUN_00742ed0(uVar3,0x1e);
  FUN_00742eb0(*(undefined8 *)(local_res8 + 0x3d0),0);
  local_148 = local_res8;
  local_150 = FUN_00c7b330;
  FUN_00742ef0(*(undefined8 *)(local_res8 + 0x3d0),&local_150);
  *(undefined1 *)(local_res8 + 0x3dc) = 6;
  *(undefined1 *)(local_res8 + 0x3d8) = 0;
  *(undefined1 *)(local_res8 + 0x3d9) = 0;
  local_130 = 0x114;
  thunk_FUN_03ed3ad2(&local_130);
  if (((local_12c == 5) && (local_128 != 0)) || (5 < local_12c)) {
    *(undefined1 *)(local_res8 + 0x3d8) = 1;
  }
  if (5 < local_12c) {
    *(undefined1 *)(local_res8 + 0x3d9) = 1;
  }
  if (((local_12c == 6) && (local_128 != 0)) || (6 < local_12c)) {
    *(undefined1 *)(local_res8 + 0x3da) = 1;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

