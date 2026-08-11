/* Ghidra address: 013df540 */
/* Ghidra symbol: FUN_013df540 */


void FUN_013df540(undefined8 *param_1,undefined1 param_2,longlong param_3)

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
  undefined8 in_stack_fffffffffffffbd8;
  uint uVar10;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [56];
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
  undefined1 local_215 [41];
  undefined1 local_1ec [460];
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffffbd8 >> 0x20);
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
  if (param_3 == 0) goto LAB_013dfa64;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013df60b:
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
    if (bVar9) goto LAB_013df60b;
  }
  local_290[0] = FUN_00498310(0,0);
  lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_290);
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x790);
  if (lVar7 == 0) {
    FUN_013d2e10(&local_2a0,&local_268);
    FUN_00416ad0(&local_2a0,L"_Noise");
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_2a0,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    FUN_013d2e10(&local_298,&local_268);
    FUN_013d2480(lVar7,lVar6,local_298);
  }
  uVar5 = FUN_01abc400(param_2,param_3);
  local_270 = 0;
  if (local_268._1_1_ == '\0') {
    FUN_00414ff0(local_3b8,local_215);
    FUN_00415110(local_3b8,&DAT_013dfafe,0x30);
    FUN_004169a0(&local_278,local_3b8);
  }
  else {
    FUN_00414ff0(local_2d0,local_215);
    FUN_00415110(local_2d0,&DAT_013dfaf6,0x2d);
    FUN_00414ff0(local_328,local_2d0);
    FUN_00415110(local_328,(longlong)&local_268 + 1,0x55);
    FUN_00414ff0(local_380,local_328);
    FUN_00415110(local_380,&DAT_013dfafc,0x56);
    FUN_004169a0(&local_278,local_380);
  }
  FUN_004169a0(&local_280,local_1ec);
  FUN_00f16900(uVar5,param_3,0,local_278,2,1,(ulonglong)uVar10 << 0x20,local_280,0,1,2,&local_270,
               lVar6,1,0);
  (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
            (*(longlong **)(lVar6 + 0xd8),L"Ipr Result 1",local_270);
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_3c8);
  FUN_01acf9e0(lVar6,local_3c8);
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
  FUN_01cec9c0(lVar7,iVar4 + -2,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
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
LAB_013dfa64:
  FUN_00414560(&local_2a0,2);
  FUN_00414560(&local_280,2);
  return;
}

