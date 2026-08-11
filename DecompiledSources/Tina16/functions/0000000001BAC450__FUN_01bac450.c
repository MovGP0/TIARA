/* Ghidra address: 01bac450 */
/* Ghidra symbol: FUN_01bac450 */


void FUN_01bac450(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong in_stack_fffffffffffffd38;
  ulonglong uVar8;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [256];
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30;
  
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_290 = 0;
  local_288 = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_268 = 0;
  local_260 = 0;
  local_250 = 0;
  local_258 = 0;
  local_240 = 0;
  local_248 = 0;
  local_30 = 0;
  local_38 = 0;
  lVar4 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_0064de00(lVar4,L"Searching...");
  FUN_00c54370(lVar4,L"Searching in the library...");
  *(undefined1 *)(lVar4 + 0x6c1) = 0;
  FUN_008059a0(lVar4);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x30))
                        (*(longlong **)(param_1 + 0x718),iVar7);
      FUN_00418590(uVar5,&DAT_0170bbf8);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x90))(*(longlong **)(param_1 + 0x718));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_38);
  FUN_0043e130(&local_30,local_38);
  FUN_00416910(local_138,local_30,0xff);
  FUN_00416910(local_238,*(undefined8 *)PTR_DAT_02001f18,0xff);
  uVar8 = *(ulonglong *)(param_1 + 0x730);
  FUN_0172ece0(local_138,local_238,*(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8),
               *(undefined8 *)(param_1 + 0x718),in_stack_fffffffffffffd38 & 0xffffffffffffff00,uVar8
              );
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_248);
  FUN_0043e130(&local_240,local_248);
  FUN_00416910(local_138,local_240,0xff);
  FUN_00416910(local_238,*(undefined8 *)PTR_DAT_02001f18,0xff);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_017189e0(*(undefined8 *)(param_1 + 0x730),local_138,local_238,
               *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8),
               *(undefined8 *)(param_1 + 0x718),uVar8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_258);
  FUN_0043e130(&local_250,local_258);
  FUN_00416910(local_138,local_250,0xff);
  FUN_00416910(local_238,*(undefined8 *)PTR_DAT_02001f18,0xff);
  FUN_01bab4e0(*(undefined8 *)PTR_DAT_02002a68,local_138,local_238,
               *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8),
               *(undefined8 *)(param_1 + 0x718),uVar8 & 0xffffffffffffff00);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x278))(*(longlong **)(param_1 + 0x700));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar6 = FUN_006efb70(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x4e0));
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x718),&local_260,iVar7);
      FUN_006ef050(lVar6,local_260);
      FUN_004b5390(*(undefined8 *)(param_1 + 0x718),&local_268,iVar7);
      (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x78))(*(longlong **)(lVar6 + 0x10),local_268);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x30))
                        (*(longlong **)(param_1 + 0x718),iVar7);
      FUN_006ef160(lVar6,uVar5);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x28))(*(longlong **)(param_1 + 0x718));
  if ((iVar2 < 1) || (lVar6 = FUN_019a4600(), *(char *)(lVar6 + 0x218) != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),uVar3);
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1);
  FUN_00688430(plVar1,uVar3);
  FUN_00688430(*(undefined8 *)(param_1 + 0x6c8),
               *(char *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8) == '\0');
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x28))(*(longlong **)(param_1 + 0x718));
  if (iVar2 == 0) {
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_278,0x3ea);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_280);
    FUN_00416cd0(&local_270,4,local_278,&DAT_01bacc50,local_280,&DAT_01bacc64);
    FUN_016fd940(local_270);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x6d8);
    FUN_0064dd90(lVar6,&local_288);
    plVar1 = *(longlong **)(lVar6 + 0x4f0);
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_288);
    if (iVar2 == -1) {
      lVar6 = *(longlong *)(param_1 + 0x6d8);
      FUN_0064dd90(lVar6,&local_290);
      plVar1 = *(longlong **)(lVar6 + 0x4f0);
      (**(code **)(*plVar1 + 200))(plVar1,0,local_290);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x700);
  iVar2 = FUN_006efc30(plVar1[0x9c]);
  iVar7 = FUN_006f6890(plVar1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),iVar7 < iVar2);
  iVar2 = FUN_006efc30(plVar1[0x9c]);
  if (0 < iVar2) {
    (**(code **)(*plVar1 + 0x268))(plVar1,0);
  }
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  FUN_0043f750(&local_2a0,iVar2 + 1);
  uVar3 = FUN_006efc30(plVar1[0x9c]);
  FUN_0043f750(&local_2a8,uVar3);
  FUN_00416cd0(&local_298,3,local_2a0,&DAT_01bacc78,local_2a8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_298);
  FUN_00410f20(lVar4);
  FUN_00414560(&local_2a8,3);
  FUN_00414560(&local_290,3);
  FUN_00414560(&local_278,4);
  FUN_00414480(&local_258);
  FUN_00414480(&local_250);
  FUN_00414480(&local_248);
  FUN_00414480(&local_240);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  return;
}

