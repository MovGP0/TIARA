/* Ghidra address: 013ddd60 */
/* Ghidra symbol: FUN_013ddd60 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ddd60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined8 in_stack_fffffffffffffc18;
  undefined1 local_390 [16];
  undefined1 local_380 [88];
  undefined1 local_328 [88];
  undefined1 local_2d0 [48];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290 [2];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  char local_23e [41];
  undefined1 local_215 [41];
  undefined1 local_1ec [460];
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffc18 >> 0x20);
  local_2a0 = 0;
  local_298 = 0;
  local_278 = 0;
  local_280 = 0;
  puVar8 = &local_268;
  for (lVar7 = 0x48; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_1;
    param_1 = param_1 + 1;
    puVar8 = puVar8 + 1;
  }
  if (param_2 == 0) goto LAB_013de336;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013dde25:
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
    if (bVar9) goto LAB_013dde25;
  }
  local_290[0] = FUN_00498310(0,0);
  uVar10 = *(ulonglong *)(*(longlong *)PTR_DAT_02001e00 + 0x780);
  uVar5 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,uVar10,local_290);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar5;
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x790);
  if (lVar7 == 0) {
    FUN_013d2e10(&local_2a0,&local_268);
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar5,local_2a0,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    FUN_013d2e10(&local_298,&local_268);
    FUN_013d2480(lVar7,uVar5,local_298);
  }
  _DAT_01f45488 = _DAT_01f45488 + 1;
  local_270 = 0;
  uVar6 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
  if (local_268._1_1_ == '\0') {
    FUN_004169a0(&local_278,local_215);
  }
  else {
    FUN_00414ff0(local_2d0,local_215);
    FUN_00415110(local_2d0,&DAT_013de3a9,0x2b);
    FUN_00414ff0(local_328,local_2d0);
    FUN_00415110(local_328,(longlong)&local_268 + 1,0x53);
    FUN_00414ff0(local_380,local_328);
    FUN_00415110(local_380,&DAT_013de3ad,0x54);
    FUN_004169a0(&local_278,local_380);
  }
  if (local_23e[0] == '\0') {
    FUN_004169a0(&local_280,local_1ec);
  }
  else {
    FUN_00414ff0(local_2d0,local_1ec);
    FUN_00415110(local_2d0,&DAT_013de3a9,0x2b);
    FUN_00414ff0(local_328,local_2d0);
    FUN_00415110(local_328,local_23e,0x53);
    FUN_00414ff0(local_380,local_328);
    FUN_00415110(local_380,&DAT_013de3ad,0x54);
    FUN_004169a0(&local_280,local_380);
  }
  FUN_00f16900(uVar6,param_2,0,local_278,uVar10 & 0xffffffffffffff00,1,CONCAT44(uVar3,2),local_280,0
               ,1,2,&local_270,uVar5,1,0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar1 + 0x80))(plVar1,L"Interpreter Result 1",local_270);
  uVar5 = local_270;
  cVar2 = FUN_01ce8540(local_270);
  if (cVar2 != '\0') {
    uVar3 = FUN_01ce83f0(uVar5);
    FUN_01ce6ab0(uVar5,uVar3,0);
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_390);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_390);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
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
LAB_013de336:
  FUN_00414560(&local_2a0,2);
  FUN_00414560(&local_280,2);
  return;
}

