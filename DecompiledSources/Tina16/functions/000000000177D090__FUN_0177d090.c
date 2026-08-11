/* Ghidra address: 0177d090 */
/* Ghidra symbol: FUN_0177d090 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0177d090(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_1068 [4088];
  undefined8 auStack_70 [5];
  longlong local_48 [3];
  longlong *local_30;
  
  local_48[1] = 0;
  local_48[2] = 0;
  uVar8 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar13 = -uVar8;
  uVar4 = uVar13 & 0xfff;
  local_48[0] = param_1;
  while ((longlong)uVar13 < (longlong)uVar4) {
    auStack_1068[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  lVar3 = -uVar8;
  plVar12 = (longlong *)((longlong)local_48 + lVar3);
  plVar11 = plVar12;
  for (lVar9 = (longlong)param_3 + 1; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar11 = *param_2;
    param_2 = param_2 + 1;
    plVar11 = plVar11 + 1;
  }
  local_30 = plVar12;
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d12a;
  FUN_00417a80(plVar12,&DAT_00401390,(longlong)param_3 + 1);
  uVar1 = *(undefined8 *)(*(longlong *)(local_48[0] + 0x3f8) + 0x80);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d142;
  FUN_007e4130(uVar1);
  plVar12 = *(longlong **)(local_48[0] + 0x400);
  pcVar2 = *(code **)(*plVar12 + 0x90);
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d159;
  (*pcVar2)(plVar12);
  iVar10 = 0;
  if (-1 < param_3) {
    iVar14 = param_3 + 1;
    plVar12 = local_30;
    do {
      uVar1 = *(undefined8 *)(local_48[0] + 0x3f8);
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d191;
      lVar6 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,uVar1);
      lVar9 = *plVar12;
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d1a9;
      iVar5 = FUN_004170c0(&DAT_0177d308,lVar9,1);
      lVar9 = *plVar12;
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d1c2;
      FUN_00416dc0(local_48 + 1,lVar9,1,iVar5 + -1);
      lVar9 = local_48[1];
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d1ce;
      FUN_007e2c60(lVar6,lVar9);
      lVar9 = *plVar12;
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d1e3;
      iVar5 = FUN_004170c0(&DAT_0177d308,lVar9,1);
      uVar7 = 0;
      if (*plVar12 != 0) {
        uVar7 = *(undefined4 *)(*plVar12 + -4);
      }
      lVar9 = *plVar12;
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d213;
      FUN_00416dc0(local_48 + 2,lVar9,iVar5 + 1,uVar7);
      lVar9 = local_48[2];
      plVar11 = *(longlong **)(local_48[0] + 0x400);
      pcVar2 = *(code **)(*plVar11 + 0x78);
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d22b;
      (*pcVar2)(plVar11,lVar9);
      *(longlong *)(lVar6 + 0x18) = (longlong)iVar10;
      *(longlong *)(lVar6 + 0x118) = local_48[0];
      *(code **)(lVar6 + 0x110) = FUN_0177d390;
      *(undefined1 *)(lVar6 + 0x150) = 1;
      uVar1 = *(undefined8 *)(*(longlong *)(local_48[0] + 0x3f8) + 0x80);
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d26c;
      FUN_007e34c0(uVar1,lVar6);
      iVar10 = iVar10 + 1;
      plVar12 = plVar12 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d290;
  FUN_00414560(local_48 + 1,2);
  plVar12 = local_30;
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x177d2ab;
  FUN_00417840(plVar12,&DAT_00401390,(longlong)param_3 + 1);
  return;
}

