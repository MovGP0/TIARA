/* Ghidra address: 019572e0 */
/* Ghidra symbol: FUN_019572e0 */


void FUN_019572e0(longlong param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_98 [112];
  
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),5);
  FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),4);
  dVar11 = (double)*(int *)(param_1 + 0x40);
  dVar13 = (double)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44));
  dVar12 = (double)*(int *)(param_1 + 0x4c);
  dVar14 = (double)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48));
  dVar9 = (double)*(int *)(param_1 + 0x44) / 510.0;
  dVar10 = (double)*(int *)(param_1 + 0x48) / 510.0;
  iVar8 = 0;
  do {
    dVar11 = dVar11 + dVar9;
    dVar13 = dVar13 - dVar9;
    dVar12 = dVar12 + dVar10;
    dVar14 = dVar14 - dVar10;
    cVar1 = thunk_FUN_03f3ed25(iVar8,param_5,0xff);
    cVar2 = thunk_FUN_03f3ed25(iVar8,param_6,0xff);
    cVar3 = thunk_FUN_03f3ed25(iVar8,param_7,0xff);
    uVar4 = FUN_0042a2a0(param_2 + cVar1,param_3 + cVar2,param_4 + cVar3);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),uVar4);
    uVar4 = FUN_0040c840(dVar11);
    uVar5 = FUN_0040c840(dVar12);
    uVar6 = FUN_0040c840(dVar13);
    uVar7 = FUN_0040c840(dVar14);
    FUN_00498350(local_98,uVar4,uVar5,uVar6,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))(*(longlong **)(param_1 + 0x78),local_98);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x100);
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),0);
  return;
}

