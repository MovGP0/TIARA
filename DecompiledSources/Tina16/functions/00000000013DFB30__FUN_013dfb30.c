/* Ghidra address: 013dfb30 */
/* Ghidra symbol: FUN_013dfb30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013dfb30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 in_stack_fffffffffffffad8;
  uint uVar11;
  ulonglong uVar10;
  undefined1 local_4d0 [16];
  undefined1 local_4c0 [56];
  undefined8 local_488;
  undefined1 local_480 [56];
  undefined8 local_448;
  undefined1 local_440 [48];
  undefined1 local_410 [56];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [56];
  undefined1 local_390 [88];
  undefined1 local_338 [88];
  undefined1 local_2e0 [48];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [2];
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  char local_23e [41];
  undefined1 local_215 [41];
  undefined1 local_1ec [460];
  
  uVar11 = (uint)((ulonglong)in_stack_fffffffffffffad8 >> 0x20);
  local_488 = 0;
  local_448 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  puVar8 = &local_268;
  for (lVar7 = 0x48; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_1;
    param_1 = param_1 + 1;
    puVar8 = puVar8 + 1;
  }
  if (param_2 == 0) goto LAB_013e0415;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013dfc37:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) goto LAB_013dfc37;
  }
  local_2a0[0] = FUN_00498310(0,0);
  lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_2a0);
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x790);
  if (lVar7 == 0) {
    FUN_013d2e10(&local_2b0,&local_268);
    FUN_00416ad0(&local_2b0,L"_Bode");
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_2b0,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    FUN_013d2e10(&local_2a8,&local_268);
    FUN_013d2480(lVar7,lVar6,local_2a8);
  }
  _DAT_01f45490 = _DAT_01f45490 + 1;
  uVar5 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_2);
  local_270 = 0;
  if (local_268._1_1_ == '\0') {
    FUN_00414ff0(local_3c8,local_215);
    FUN_00415110(local_3c8,&DAT_013e04f4,0x30);
    FUN_004169a0(&local_278,local_3c8);
  }
  else {
    FUN_00414ff0(local_2e0,local_215);
    FUN_00415110(local_2e0,&DAT_013e04ec,0x2d);
    FUN_00414ff0(local_338,local_2e0);
    FUN_00415110(local_338,(longlong)&local_268 + 1,0x55);
    FUN_00414ff0(local_390,local_338);
    FUN_00415110(local_390,&DAT_013e04f2,0x56);
    FUN_004169a0(&local_278,local_390);
  }
  if (local_23e[0] == '\0') {
    FUN_00414ff0(local_410,local_1ec);
    FUN_00415110(local_410,&DAT_013e0518,0x33);
    FUN_004169a0(&local_280,local_410);
  }
  else {
    FUN_004169a0(&local_3d0,local_23e);
    FUN_01b21b80(local_3d0,0x7c,&local_288,&local_290);
    FUN_00414ff0(local_3c8,local_1ec);
    FUN_00415110(local_3c8,&DAT_013e04fd,0x30);
    FUN_004169a0(&local_3d8,local_3c8);
    FUN_00416cd0(&local_280,3,local_3d8,local_288,&DAT_013e0514);
  }
  uVar10 = (ulonglong)uVar11 << 0x20;
  FUN_00f16900(uVar5,param_2,0,local_278,2,1,uVar10,local_280,1,1,2,&local_270,lVar6,1,0);
  (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
            (*(longlong **)(lVar6 + 0xd8),L"Ipr Result 1",local_270);
  uVar5 = local_270;
  cVar2 = FUN_01ce8540(local_270);
  if (cVar2 != '\0') {
    uVar3 = FUN_01ce83f0(uVar5);
    FUN_01ce6ab0(uVar5,uVar3,0);
  }
  uVar5 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_2);
  local_270 = 0;
  if (local_268._1_1_ == '\0') {
    FUN_00414ff0(local_440,local_215);
    FUN_00415110(local_440,&DAT_013e054a,0x2f);
    FUN_004169a0(&local_278,local_440);
  }
  else {
    FUN_00414ff0(local_2e0,local_215);
    FUN_00415110(local_2e0,&DAT_013e04ec,0x2d);
    FUN_00414ff0(local_338,local_2e0);
    FUN_00415110(local_338,(longlong)&local_268 + 1,0x55);
    FUN_00414ff0(local_390,local_338);
    FUN_00415110(local_390,&DAT_013e04f2,0x56);
    FUN_004169a0(&local_278,local_390);
  }
  if (local_23e[0] == '\0') {
    FUN_00414ff0(local_4c0,local_1ec);
    FUN_00415110(local_4c0,&DAT_013e055c,0x35);
    FUN_004169a0(&local_280,local_4c0);
  }
  else {
    FUN_004169a0(&local_448,local_23e);
    FUN_01b21b80(local_448,0x7c,&local_288,&local_290);
    FUN_00414ff0(local_480,local_1ec);
    FUN_00415110(local_480,&DAT_013e0552,0x31);
    FUN_004169a0(&local_488,local_480);
    FUN_00416cd0(&local_280,3,local_488,local_290,&DAT_013e0514);
  }
  FUN_00f16900(uVar5,param_2,0,local_278,2,1,uVar10 & 0xffffffff00000000,local_280,0,1,2,&local_270,
               lVar6,1,0);
  (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
            (*(longlong **)(lVar6 + 0xd8),L"Ipr Result 1",local_270);
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_4d0);
  FUN_01acf9e0(lVar6,local_4d0);
  uVar5 = local_270;
  cVar2 = FUN_01ce8540(local_270);
  if (cVar2 != '\0') {
    uVar3 = FUN_01ce83f0(uVar5);
    FUN_01ce6ab0(uVar5,uVar3,0);
  }
  FUN_01ad0490(lVar6);
  FUN_01acfa60(lVar6);
  FUN_01adc0f0(lVar6,0,0);
  *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar6;
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar7 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar7,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x790) != 0);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013e0415:
  FUN_00414480(&local_488);
  FUN_00414480(&local_448);
  FUN_00414560(&local_3d8,2);
  FUN_00414560(&local_2b0,2);
  FUN_00414560(&local_290,4);
  return;
}

