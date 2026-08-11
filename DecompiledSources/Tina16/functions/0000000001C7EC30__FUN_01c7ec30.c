/* Ghidra address: 01c7ec30 */
/* Ghidra symbol: FUN_01c7ec30 */


void FUN_01c7ec30(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 unaff_RDI;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  byte local_1dc;
  byte local_1db;
  byte local_1da;
  char local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x27a8) == 0) {
    return;
  }
  local_1e8 = param_1;
  FUN_017fb9f0();
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xa58),*PTR_DAT_020023b0 == '\0');
  cVar3 = FUN_01c8cee0(local_1e8);
  local_1dc = cVar3 == '\0';
  if ((bool)local_1dc) {
    local_e8 = *(undefined8 *)(local_1e8 + 0x788);
    local_e0 = *(undefined8 *)(local_1e8 + 0x790);
    local_d8 = *(undefined8 *)(local_1e8 + 0x7a0);
    local_d0 = *(undefined8 *)(local_1e8 + 0x7b0);
    local_c8 = *(undefined8 *)(local_1e8 + 0x7b8);
    local_c0 = *(undefined8 *)(local_1e8 + 0x7c8);
    local_b8 = *(undefined8 *)(local_1e8 + 2000);
    local_b0 = *(undefined8 *)(local_1e8 + 0x7d8);
    local_a8 = *(undefined8 *)(local_1e8 + 0x7e0);
    local_a0 = *(undefined8 *)(local_1e8 + 0xf50);
    local_98 = *(undefined8 *)(local_1e8 + 0x10b0);
    local_90 = *(undefined8 *)(local_1e8 + 0x7f0);
    local_88 = *(undefined8 *)(local_1e8 + 0x800);
    local_80 = *(undefined8 *)(local_1e8 + 0x808);
    local_78 = *(undefined8 *)(local_1e8 + 0xf28);
    local_70 = *(undefined8 *)(local_1e8 + 0x810);
    local_68 = *(undefined8 *)(local_1e8 + 0x818);
    local_60 = *(undefined8 *)(local_1e8 + 0x820);
    local_58 = *(undefined8 *)(local_1e8 + 0x828);
    local_50 = *(undefined8 *)(local_1e8 + 0xd80);
    local_48 = *(undefined8 *)(local_1e8 + 0xf48);
    local_40 = *(undefined8 *)(local_1e8 + 0xc90);
    local_38 = *(undefined8 *)(local_1e8 + 0xcd8);
    local_30 = *(undefined8 *)(local_1e8 + 0xd98);
    FUN_01c7eb30(auStack_208,&local_e8,0x17,1);
    (**(code **)(**(longlong **)(local_1e8 + 0x6c0) + 0x128))(*(longlong **)(local_1e8 + 0x6c0),1);
  }
  local_f0 = *(undefined8 *)(local_1e8 + 0x980);
  if (((*PTR_DAT_020023b0 == '\0') || (*PTR_DAT_02003b28 != '\0')) && (*PTR_DAT_02002210 != '\0')) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)PTR_DAT_02002210 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_01c7eb30(auStack_208,&local_f0,0,uVar7);
  local_138 = *(undefined8 *)(local_1e8 + 0x990);
  local_130 = *(undefined8 *)(local_1e8 + 0x998);
  local_128 = *(undefined8 *)(local_1e8 + 0xd00);
  local_120 = *(undefined8 *)(local_1e8 + 0x9a0);
  local_118 = *(undefined8 *)(local_1e8 + 0x9a8);
  local_110 = *(undefined8 *)(local_1e8 + 0xa00);
  local_108 = *(undefined8 *)(local_1e8 + 0xb38);
  local_100 = *(undefined8 *)(local_1e8 + 0xf90);
  local_f8 = *(undefined8 *)(local_1e8 + 0x9b8);
  puVar10 = PTR_DAT_020023b0;
  if ((*PTR_DAT_020023b0 == '\0') || (puVar10 = PTR_DAT_02003b28, *PTR_DAT_02003b28 != '\0')) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_01c7eb30(auStack_208,&local_138,8,uVar7);
  puVar10 = PTR_DAT_020023b0;
  if ((*PTR_DAT_020023b0 == '\0') || (puVar10 = PTR_DAT_02003b28, *PTR_DAT_02003b28 != '\0')) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xf90),uVar7);
  if ((*(longlong *)(local_1e8 + 0x2768) == 0) ||
     (*(char *)(*(longlong *)(local_1e8 + 0x2768) + 0x70) == '\x01')) {
    local_1db = 1;
  }
  else {
    local_1db = 0;
  }
  local_1d9 = '\0';
  if ((*(longlong *)(local_1e8 + 0x2768) != 0) &&
     ((cVar3 = *(char *)(*(longlong *)(local_1e8 + 0x2768) + 0x70), cVar3 == '\x03' ||
      (cVar3 == '\x04')))) {
    if ((*(longlong *)PTR_DAT_02005100 == 0) ||
       (iVar5 = FUN_00c0faf0(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740)), iVar5 == 0)) {
      local_1d9 = '\0';
    }
    else {
      local_1d9 = '\x01';
    }
  }
  cVar3 = FUN_01993e20(*(undefined8 *)(local_1e8 + 0x27a8));
  if ((cVar3 == '\0') || (*(char *)(*(longlong *)(local_1e8 + 0x780) + 0x81) == '\0')) {
    local_1da = 0;
  }
  else {
    local_1da = 1;
  }
  plVar8 = (longlong *)FUN_01993ec0(*(undefined8 *)(local_1e8 + 0x27a8));
  if ((plVar8 == (longlong *)0x0) || (*(char *)(*(longlong *)(local_1e8 + 0x780) + 0x81) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar12 = 0;
  if ((local_1d9 == '\0') &&
     ((((local_1dc & local_1db) == 0 || (local_1da == 0)) ||
      (lVar12 = local_1e8, *(longlong *)(local_1e8 + 7000) != 0)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7a0),uVar7);
  lVar12 = 0;
  if ((local_1d9 == '\0') &&
     (((local_1da & local_1db) == 0 || (lVar12 = local_1e8, *(longlong *)(local_1e8 + 7000) != 0))))
  {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7a8),uVar7);
  (**(code **)(**(longlong **)(local_1e8 + 0xbe8) + 0x128))
            (*(longlong **)(local_1e8 + 0xbe8),
             *(undefined1 *)(*(longlong *)(local_1e8 + 0x7a8) + 0x81));
  lVar12 = 0;
  if ((local_1d9 == '\0') &&
     ((((local_1dc & local_1db) == 0 || (local_1da == 0)) ||
      (lVar12 = local_1e8, *(longlong *)(local_1e8 + 7000) != 0)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7b8),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc58),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x7b8) + 0x81));
  (**(code **)(**(longlong **)(local_1e8 + 0x1310) + 0x128))
            (*(longlong **)(local_1e8 + 0x1310),
             *(undefined1 *)(*(longlong *)(local_1e8 + 0x7b8) + 0x81));
  if (((local_1dc & local_1db) == 0) || (local_1da == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7c8),uVar7);
  (**(code **)(**(longlong **)(local_1e8 + 0xba8) + 0x128))
            (*(longlong **)(local_1e8 + 0xba8),
             *(undefined1 *)(*(longlong *)(local_1e8 + 0x7c8) + 0x81));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc38),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x7c8) + 0x81));
  if (((local_1dc & local_1db) == 0) || (local_1da == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 2000),uVar7);
  (**(code **)(**(longlong **)(local_1e8 + 0xba0) + 0x128))
            (*(longlong **)(local_1e8 + 0xba0),
             *(undefined1 *)(*(longlong *)(local_1e8 + 2000) + 0x81));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc40),
               *(undefined1 *)(*(longlong *)(local_1e8 + 2000) + 0x81));
  if (((local_1dc & local_1db) == 0) || (local_1da == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7d8),uVar7);
  (**(code **)(**(longlong **)(local_1e8 + 0xb98) + 0x128))
            (*(longlong **)(local_1e8 + 0xb98),
             *(undefined1 *)(*(longlong *)(local_1e8 + 0x7d8) + 0x81));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc48),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x7d8) + 0x81));
  if (((local_1dc & local_1db) == 0) || (!bVar2)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7e0),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc50),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x7e0) + 0x81));
  if (((local_1dc & local_1db) == 0) || (uVar9 = FUN_0198a580(plVar8), (char)uVar9 != '\x04')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xf50),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1050),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0xf50) + 0x81));
  if (((local_1dc & local_1db) == 0) || (local_1da == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x17a0),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x17a8),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x17a0) + 0x81));
  if (((local_1da & local_1dc) == 0) || (*(longlong *)(local_1e8 + 7000) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x10b0),uVar7);
  cVar3 = FUN_0198a580(plVar8);
  if ((((cVar3 == '\x04') && (cVar3 = FUN_01d04d40(plVar8), cVar3 != '\0')) &&
      (*(char *)(plVar8[0x35] + 0x61) != '\0')) && (*(longlong *)(plVar8[0x35] + 0x30) == 0)) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)plVar8[0x35] >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xf60),uVar7);
  cVar3 = FUN_0198a580(plVar8);
  if (((cVar3 == '\x04') && (cVar3 = FUN_01d04d40(plVar8), cVar3 != '\0')) &&
     ((*(char *)(plVar8[0x35] + 0x61) != '\0' && (*(longlong *)(plVar8[0x35] + 0x30) != 0)))) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)plVar8[0x35] >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xf68),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xf80),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0xf68) + 0x81));
  if ((((local_1dc & local_1db) == 0) ||
      (*(char *)(*(longlong *)(local_1e8 + 0x780) + 0x81) == '\0')) ||
     (*(longlong *)(local_1e8 + 7000) != 0)) {
LAB_01c7f62d:
    if (local_1db == 0) {
      uVar9 = FUN_006a6030();
      puVar10 = (undefined *)FUN_006a5ff0(uVar9,1);
      if ((char)puVar10 != '\0') goto LAB_01c7f64f;
    }
    uVar7 = 0;
  }
  else {
    uVar9 = FUN_006a6030();
    cVar3 = FUN_006a5ff0(uVar9,*(undefined2 *)PTR_DAT_020027b8);
    if (cVar3 == '\0') {
      uVar9 = FUN_006a6030();
      cVar3 = FUN_006a5ff0(uVar9,1);
      if (cVar3 == '\0') {
        uVar9 = FUN_006a6030();
        cVar3 = FUN_006a5ff0(uVar9,DAT_01fe777a);
        if (cVar3 == '\0') {
          uVar9 = FUN_006a6030();
          cVar3 = FUN_006a5ff0(uVar9,0xe);
          if (cVar3 == '\0') {
            uVar9 = FUN_006a6030();
            cVar3 = FUN_006a5ff0(uVar9,3);
            if (cVar3 == '\0') {
              uVar9 = FUN_006a6030();
              cVar3 = FUN_006a5ff0(uVar9,2);
              if (cVar3 == '\0') goto LAB_01c7f62d;
            }
          }
        }
      }
    }
    puVar10 = PTR_DAT_02003b28;
    if (*PTR_DAT_02003b28 != '\0') goto LAB_01c7f62d;
LAB_01c7f64f:
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7b0),uVar7);
  (**(code **)(**(longlong **)(local_1e8 + 0xbe0) + 0x128))
            (*(longlong **)(local_1e8 + 0xbe0),
             *(undefined1 *)(*(longlong *)(local_1e8 + 0x7b0) + 0x81));
  if ((((*(longlong *)(local_1e8 + 7000) == 0) && (local_1db != 0)) &&
      (puVar10 = PTR_DAT_02003b28, *PTR_DAT_02003b28 == '\0')) ||
     (puVar10 = (undefined *)0x0, local_1db == 0)) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xa68),uVar7);
  if ((local_1db == 0) || (*PTR_DAT_02003b28 != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)PTR_DAT_02003b28 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xa58),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7f0),local_1db);
  if ((local_1dc == 0) || (*(char *)(*(longlong *)(local_1e8 + 0x780) + 0x81) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(local_1e8 + 0x780) >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc28),uVar7);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0xc98),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0xc90) + 0x80));
  if ((local_1dc == 0) || (*(char *)(*(longlong *)(local_1e8 + 0x780) + 0x81) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(local_1e8 + 0x780) >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc98),uVar7);
  if ((local_1dc == 0) || (*(char *)(*(longlong *)(local_1e8 + 0x780) + 0x81) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(local_1e8 + 0x780) >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xc20),uVar7);
  if (((*PTR_DAT_02002170 == '\0') || (*(longlong *)(local_1e8 + 7000) != 0)) ||
     (uVar9 = FUN_01c7eb70(auStack_208), (char)uVar9 != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x8a0),uVar7);
  if ((*(longlong *)(local_1e8 + 7000) == 0) &&
     (uVar9 = FUN_01c7eb70(auStack_208), (char)uVar9 == '\0')) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x978),uVar7);
  if ((*(longlong *)(local_1e8 + 7000) == 0) &&
     (uVar9 = FUN_01c7eb70(auStack_208), (char)uVar9 == '\0')) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xa98),uVar7);
  if ((*PTR_DAT_02002170 == '\0') || (*(longlong *)(local_1e8 + 7000) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x728),uVar7);
  if ((*PTR_DAT_02002170 == '\0') || (*(longlong *)(local_1e8 + 7000) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x730),uVar7);
  if ((*PTR_DAT_02002170 == '\0') || (*(longlong *)(local_1e8 + 7000) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x750),uVar7);
  (**(code **)(**(longlong **)(local_1e8 + 0xb70) + 0x128))
            (*(longlong **)(local_1e8 + 0xb70),*(longlong *)(local_1e8 + 7000) == 0);
  (**(code **)(**(longlong **)(local_1e8 + 0xb68) + 0x128))
            (*(longlong **)(local_1e8 + 0xb68),*(longlong *)(local_1e8 + 7000) == 0);
  if ((*PTR_DAT_020023b0 == '\0') && (*(longlong *)(local_1e8 + 7000) == 0)) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(longlong **)(local_1e8 + 0xd08) + 0x128))(*(longlong **)(local_1e8 + 0xd08),uVar7)
  ;
  if ((*(char *)(*(longlong *)(local_1e8 + 0xd08) + 0x328) == '\0') && (*PTR_DAT_020023b0 == '\0'))
  {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)PTR_DAT_020023b0 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0x128))(*(longlong **)(local_1e8 + 0xd40),uVar7)
  ;
  if ((*(char *)(*(longlong *)(local_1e8 + 0xd08) + 0x328) != '\0') &&
     (*(longlong *)(local_1e8 + 7000) == 0)) {
    if ((byte)PTR_DAT_02004010[0x813] < 8) {
      uVar6 = (int)CONCAT71((int7)((ulonglong)PTR_DAT_02004010 >> 8),1) <<
              (PTR_DAT_02004010[0x813] & 0x1f);
      bVar14 = (uVar6 & 0xf) != 0;
      uVar11 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar14);
    }
    else {
      uVar11 = 0;
      bVar14 = false;
    }
    if (bVar14) {
      uVar7 = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
      goto LAB_01c7fa31;
    }
  }
  uVar7 = 0;
LAB_01c7fa31:
  (**(code **)(**(longlong **)(local_1e8 + 0x12d0) + 0x128))
            (*(longlong **)(local_1e8 + 0x12d0),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd08) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd08));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x11e0),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd40));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x11f8),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd40));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1200),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd40));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1208),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd40));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1210),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd40));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1218),uVar7);
  uVar7 = (**(code **)(**(longlong **)(local_1e8 + 0xd40) + 0xf0))
                    (*(longlong **)(local_1e8 + 0xd40));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1228),uVar7);
  if (((((local_1dc == 0) || (!bVar2)) || (*PTR_DAT_020023b0 != '\0')) ||
      ((cVar3 = FUN_0198a580(plVar8), cVar3 != '\x04' ||
       (sVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8), sVar4 != 0x39)))) ||
     ((cVar3 = FUN_01d04d40(plVar8), cVar3 == '\0' || (*PTR_DAT_020023b0 != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)PTR_DAT_020023b0 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xd98),uVar7);
  if (((bVar2) && (*PTR_DAT_020023b0 == '\0')) &&
     ((cVar3 = FUN_0198a580(plVar8), cVar3 == '\x04' &&
      ((sVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8), sVar4 == 0x39 &&
       (uVar9 = FUN_01d04d40(plVar8), (char)uVar9 != '\0')))))) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xda8),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xdb0),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0xda8) + 0x81));
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xdc8),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0xdb0) + 0x81));
  if ((*(char *)(*(longlong *)(local_1e8 + 0xd98) + 0x81) == '\0') ||
     (*(longlong *)(local_1e8 + 0x2770) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xdb8),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xdd8),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0xdb8) + 0x81));
  if (*(longlong *)(local_1e8 + 0x27a8) == 0) {
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xe08),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xe00),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xde8),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xdf0),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x788),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x790),0);
    FUN_0082a6c0(*(undefined8 *)(local_1e8 + 0xb90),0);
    FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x868),0);
    FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x870),0);
  }
  else {
    if (((local_1dc & *(longlong *)(local_1e8 + 7000) == 0) == 0) ||
       ((((*PTR_DAT_020052b8 != '\0' ||
          (cVar3 = FUN_019a4e30(*(undefined8 *)(local_1e8 + 0x27a8)), cVar3 == '\0')) &&
         ((*PTR_DAT_020052b8 == '\0' ||
          (cVar3 = FUN_0135b8e0(*(undefined8 *)PTR_DAT_02005a38), cVar3 == '\0')))) ||
        ((*(int *)(local_1e8 + 0x17f4) != 0 || (*(char *)(local_1e8 + 0x27c1) != '\0')))))) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
    }
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x788),uVar7);
    if ((((local_1dc & *(longlong *)(local_1e8 + 7000) == 0) == 0) ||
        (((*PTR_DAT_020052b8 != '\0' ||
          (cVar3 = FUN_019a4e70(*(undefined8 *)(local_1e8 + 0x27a8)), cVar3 == '\0')) &&
         ((*PTR_DAT_020052b8 == '\0' ||
          (cVar3 = FUN_0135b900(*(undefined8 *)PTR_DAT_02005a38), cVar3 == '\0')))))) ||
       ((*(int *)(local_1e8 + 0x17f4) != 0 || (*(char *)(local_1e8 + 0x27c1) != '\0')))) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)local_1e8 >> 8),1);
    }
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x790),uVar7);
    uVar7 = FUN_01995280(*(undefined8 *)(local_1e8 + 0x27a8));
    FUN_0082a6c0(*(undefined8 *)(local_1e8 + 0xb90),uVar7);
    uVar7 = FUN_01995280(*(undefined8 *)(local_1e8 + 0x27a8));
    FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x868),uVar7);
    lVar12 = FUN_0198d430(*(undefined8 *)(local_1e8 + 0x27a8));
    if ((lVar12 == 0) ||
       (lVar12 = FUN_0198d430(*(undefined8 *)(local_1e8 + 0x27a8)), *(char *)(lVar12 + 299) != '\0')
       ) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
    }
    FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x870),uVar7);
  }
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0xe20),PTR_DAT_02004010[0x814]);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x1150),PTR_DAT_02004010[0x815]);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1150),PTR_DAT_02004010[0x814]);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x15c8),*PTR_DAT_020037e8);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x15c8),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x1150) + 0x81));
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x10a0),PTR_DAT_02004010[0x816] == '\0');
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x10a8),*PTR_DAT_02001ca0);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x1268),*PTR_DAT_02003038);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x6e8),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x6c8) + 0xa9));
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x890),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x6e8) + 0x80));
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x6f0),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x6c0) + 0xa9));
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x898),
               *(undefined1 *)(*(longlong *)(local_1e8 + 0x6f0) + 0x80));
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x1290),PTR_DAT_02004010[0x817]);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x1688),PTR_DAT_02004010[0x818]);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x12f8),*PTR_DAT_020030c0);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x1610),PTR_DAT_020030c0[1]);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x15f8),PTR_DAT_020030c0[5]);
  lVar12 = FUN_01c8a330(local_1e8,*(undefined8 *)(local_1e8 + 0x27a8));
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x978) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
  }
  uVar9 = FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x15a0),uVar7);
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x978) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x16e0),uVar7);
  uVar7 = FUN_01602fb0();
  FUN_007e2f80(*(undefined8 *)(local_1e8 + 0x1760),uVar7);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1760),0);
  if ((*(longlong *)(local_1e8 + 0x2788) != 0) &&
     (*(char *)(*(longlong *)(local_1e8 + 0x2788) + 0x218) != '\0')) {
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x800),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x808),0);
    FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x7b0),0);
    uVar13 = 0;
    (**(code **)(**(longlong **)(local_1e8 + 0x700) + 0x128))(*(longlong **)(local_1e8 + 0x700),0);
  }
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x738),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x740),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xfc0),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x750),0);
  (**(code **)(**(longlong **)(local_1e8 + 0xbf0) + 0x128))(*(longlong **)(local_1e8 + 0xbf0),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xab8),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1760),0);
  (**(code **)(**(longlong **)(local_1e8 + 0x1798) + 0x128))(*(longlong **)(local_1e8 + 0x1798),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x748),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x760),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0xce8),0);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x768),0);
  FUN_007e2d20(*(undefined8 *)(local_1e8 + 0x1140),*PTR_DAT_02003f60);
  (**(code **)(**(longlong **)(local_1e8 + 0x6d8) + 0x128))
            (*(longlong **)(local_1e8 + 0x6d8),uVar13 & 0xffffffff);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x11b8),*PTR_DAT_02001560);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x16f0),*(longlong *)(local_1e8 + 0x27e8) != 0);
  (**(code **)(**(longlong **)(local_1e8 + 0x16f8) + 0x128))
            (*(longlong **)(local_1e8 + 0x16f8),
             *(undefined1 *)(*(longlong *)(local_1e8 + 0x16f0) + 0x81));
  uVar9 = FUN_019a4600();
  uVar7 = FUN_01477030(uVar9);
  FUN_007e2da0(*(undefined8 *)(local_1e8 + 0x1758),uVar7);
  if (local_1dc == 0) {
    local_1d8 = *(undefined8 *)(local_1e8 + 0x788);
    local_1d0 = *(undefined8 *)(local_1e8 + 0x790);
    local_1c8 = *(undefined8 *)(local_1e8 + 0x7c8);
    local_1c0 = *(undefined8 *)(local_1e8 + 2000);
    local_1b8 = *(undefined8 *)(local_1e8 + 0x7d8);
    local_1b0 = *(undefined8 *)(local_1e8 + 0x7e0);
    local_1a8 = *(undefined8 *)(local_1e8 + 0xf50);
    local_1a0 = *(undefined8 *)(local_1e8 + 0x7f0);
    local_198 = *(undefined8 *)(local_1e8 + 0x800);
    local_190 = *(undefined8 *)(local_1e8 + 0x808);
    local_188 = *(undefined8 *)(local_1e8 + 0xf28);
    local_180 = *(undefined8 *)(local_1e8 + 0x810);
    local_178 = *(undefined8 *)(local_1e8 + 0x818);
    local_170 = *(undefined8 *)(local_1e8 + 0x820);
    local_168 = *(undefined8 *)(local_1e8 + 0x828);
    local_160 = *(undefined8 *)(local_1e8 + 0xd80);
    local_158 = *(undefined8 *)(local_1e8 + 0xf48);
    local_150 = *(undefined8 *)(local_1e8 + 0xc90);
    local_148 = *(undefined8 *)(local_1e8 + 0xcd8);
    local_140 = *(undefined8 *)(local_1e8 + 0xd98);
    FUN_01c7eb30(auStack_208,&local_1d8,0x13,0);
    (**(code **)(**(longlong **)(local_1e8 + 0x6c0) + 0x128))(*(longlong **)(local_1e8 + 0x6c0),0);
  }
  puVar1 = *(undefined8 **)(local_1e8 + 7000);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  uVar9 = FUN_00b89270();
  FUN_00b897e0(uVar9,*(undefined8 *)(local_1e8 + 0x718));
  return;
}

