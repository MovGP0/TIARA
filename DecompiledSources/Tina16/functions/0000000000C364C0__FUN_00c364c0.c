/* Ghidra address: 00c364c0 */
/* Ghidra symbol: FUN_00c364c0 */


void FUN_00c364c0(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  DAT_02019b44 = DAT_02019b44 + -1;
  puVar1 = auStack_58;
  if (DAT_02019b44 == -1) {
    FUN_0041ddd0(&local_28,PTR_PTR_02001990);
    FUN_00604dd0(&DAT_005f7500,&DAT_00c36628,local_28,&PTR_FUN_00c17678);
    FUN_0041ddd0(&local_30,PTR_PTR_02001990);
    uVar4 = FUN_00416740(local_30);
    DAT_01e9f530 = thunk_FUN_03d4bee8(uVar4);
    FUN_00604e50(&DAT_005f7500,DAT_01e9f530,&PTR_FUN_00c17678);
    DAT_02019b48 = thunk_FUN_040ef593(0);
    iVar2 = thunk_FUN_03e5bd07(DAT_02019b48,0xc);
    iVar3 = thunk_FUN_03e5bd07(DAT_02019b48,0xe);
    DAT_01e9f544 = iVar2 * iVar3 < 9;
    DAT_01e9f545 = DAT_01e9f544;
    thunk_FUN_041a9b5c(0,DAT_02019b48);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00414560(&local_30,2);
  return;
}

