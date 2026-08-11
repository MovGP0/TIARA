/* Ghidra address: 01d7ca00 */
/* Ghidra symbol: FUN_01d7ca00 */


void FUN_01d7ca00(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 local_res20;
  undefined1 auStack_14b8 [4088];
  undefined8 auStack_4c0 [5];
  longlong alStack_498 [10];
  undefined1 local_444 [522];
  undefined1 local_23a [522];
  undefined8 *local_30;
  
  alStack_498[5] = 0;
  alStack_498[4] = 0;
  alStack_498[7] = 0;
  alStack_498[6] = 0;
  alStack_498[9] = 0;
  alStack_498[8] = 0;
  uVar5 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar5;
  uVar3 = uVar10 & 0xfff;
  alStack_498[3] = param_1;
  while ((longlong)uVar10 < (longlong)uVar3) {
    auStack_14b8[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar5;
  puVar7 = (undefined8 *)((longlong)alStack_498 + lVar2 + 0x10);
  puVar9 = puVar7;
  for (lVar6 = (longlong)param_3 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  local_30 = puVar7;
  *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cac8;
  local_res20 = param_4;
  FUN_00417a80(puVar7,&DAT_00401390,(longlong)param_3 + 1);
  *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cad4;
  FUN_00414610();
  if (-1 < param_3) {
    iVar8 = param_3 + 1;
    puVar7 = local_30;
    do {
      uVar1 = *puVar7;
      *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cb06;
      FUN_004414c0(alStack_498 + 8,uVar1,L".bak");
      uVar1 = *(undefined8 *)PTR_DAT_020049a0;
      *(longlong *)((longlong)alStack_498 + lVar2) = alStack_498[8];
      *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cb2e;
      FUN_00416cd0(alStack_498 + 9,3,uVar1,&DAT_01d7ccc8);
      lVar6 = alStack_498[9];
      *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cb39;
      cVar4 = FUN_00440a20(lVar6,1);
      if (cVar4 != '\0') {
        uVar1 = *puVar7;
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cb54;
        FUN_004414c0(alStack_498 + 6,uVar1,L".bak");
        uVar1 = *(undefined8 *)PTR_DAT_020049a0;
        *(longlong *)((longlong)alStack_498 + lVar2) = alStack_498[6];
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cb7c;
        FUN_00416cd0(alStack_498 + 7,3,uVar1,&DAT_01d7ccc8);
        lVar6 = alStack_498[7];
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cb8c;
        FUN_00442620(local_23a,lVar6);
        uVar1 = *(undefined8 *)(*(longlong *)(alStack_498[3] + 0x120) + 0x6b0);
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cba7;
        FUN_0064dd90(uVar1,alStack_498 + 4);
        lVar6 = alStack_498[4];
        *(undefined8 *)((longlong)alStack_498 + lVar2) = local_res20;
        *(undefined8 *)((longlong)alStack_498 + lVar2 + 8) = *puVar7;
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cbd4;
        FUN_00416cd0(alStack_498 + 5,4,lVar6,&DAT_01d7ccc8);
        lVar6 = alStack_498[5];
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cbe1;
        FUN_00442620(local_444,lVar6);
        *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cbf4;
        FUN_00427810(local_23a,local_444,0);
      }
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cc13;
  FUN_00414560(alStack_498 + 4,2);
  *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cc21;
  FUN_00414560(alStack_498 + 6,4);
  puVar7 = local_30;
  *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cc3f;
  FUN_00417840(puVar7,&DAT_00401390,(longlong)param_3 + 1);
  *(undefined8 *)((longlong)auStack_4c0 + lVar2) = 0x1d7cc4b;
  FUN_00414480(&local_res20);
  return;
}

