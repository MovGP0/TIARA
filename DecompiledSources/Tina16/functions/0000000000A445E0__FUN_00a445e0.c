/* Ghidra address: 00a445e0 */
/* Ghidra symbol: FUN_00a445e0 */


longlong * FUN_00a445e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar1 = thunk_FUN_04137b5f(0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xe8))(*(longlong **)(param_1 + 0x40));
  uVar2 = thunk_FUN_041a19a1(uVar1,uVar2);
  uVar3 = thunk_FUN_0418f5de(uVar1,*(undefined8 *)PTR_DAT_020036e8,0);
  thunk_FUN_03a5de49(uVar1);
  uVar4 = FUN_00a46db0(&DAT_00a44278,1,uVar1,*(undefined8 *)(param_1 + 0x40));
  uVar5 = FUN_00a47220(uVar4);
  FUN_00410f20(uVar4);
  thunk_FUN_0418f5de(uVar1,uVar3,0);
  thunk_FUN_041a19a1(uVar1,uVar2);
  thunk_FUN_041a2fd8(uVar1);
  plVar6 = (longlong *)
           FUN_009ec850(&PTR_FUN_009eb620,1,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x78));
  uVar1 = FUN_009ec7c0(*(undefined8 *)(param_1 + 0x40));
  FUN_009ec9b0(plVar6,uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_0060b650(plVar6,uVar5);
  if (*PTR_DAT_020026b8 == '\b') {
    lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
    if (lVar7 == 0) {
      uVar1 = FUN_00608880(*(undefined8 *)PTR_DAT_020036e8);
      (**(code **)(*plVar6 + 0x78))(plVar6,uVar1);
    }
  }
  return plVar6;
}

