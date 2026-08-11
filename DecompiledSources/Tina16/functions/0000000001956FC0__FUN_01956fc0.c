/* Ghidra address: 01956fc0 */
/* Ghidra symbol: FUN_01956fc0 */


void FUN_01956fc0(longlong param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_8c;
  
  uVar8 = thunk_FUN_03976db5(0,0,10000,10000);
  uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
  thunk_FUN_0411a732(uVar9,uVar8);
  uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
  FUN_00428be0(uVar9,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),
               *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44),
               *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48));
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),5);
  dVar12 = (double)*(int *)(param_1 + 0x40) - (double)*(int *)(param_1 + 0x44) / 4.0;
  dVar14 = (double)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44)) +
           (double)*(int *)(param_1 + 0x44) / 4.0;
  dVar13 = (double)*(int *)(param_1 + 0x4c) - (double)*(int *)(param_1 + 0x48) / 4.0;
  dVar15 = (double)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48)) +
           (double)*(int *)(param_1 + 0x48) / 4.0;
  dVar10 = ((double)*(int *)(param_1 + 0x44) / 4.0 + (double)*(int *)(param_1 + 0x44) / 2.0) / 155.0
  ;
  dVar11 = ((double)*(int *)(param_1 + 0x48) / 4.0 + (double)*(int *)(param_1 + 0x48) / 2.0) / 155.0
  ;
  local_8c = 0;
  do {
    dVar12 = dVar12 + dVar10;
    dVar14 = dVar14 - dVar10;
    dVar13 = dVar13 + dVar11;
    dVar15 = dVar15 - dVar11;
    cVar1 = thunk_FUN_03f3ed25(local_8c,param_5,0x9b);
    cVar2 = thunk_FUN_03f3ed25(local_8c,param_6,0x9b);
    cVar3 = thunk_FUN_03f3ed25(local_8c,param_7,0x9b);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),
                 (ulonglong)CONCAT12(param_4 + cVar3,CONCAT11(param_3 + cVar2,param_2 + cVar1)));
    uVar4 = FUN_0040c840(dVar12);
    uVar5 = FUN_0040c840(dVar13);
    uVar6 = FUN_0040c840(dVar14);
    uVar7 = FUN_0040c840(dVar15);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa0))
              (*(longlong **)(param_1 + 0x78),uVar4,uVar5,uVar6,uVar7);
    local_8c = local_8c + 1;
  } while (local_8c != 0x9c);
  uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
  thunk_FUN_039bba01(uVar9,uVar8);
  thunk_FUN_0416f828(uVar8);
  return;
}

