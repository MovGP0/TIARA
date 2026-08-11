/* Ghidra address: 0195d720 */
/* Ghidra symbol: FUN_0195d720 */


void FUN_0195d720(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xc0) + 0x2ac);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xc0) >> 8),1) <<
             (bVar1 & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((!bVar4) && (cVar2 = FUN_0195ce10(*(undefined8 *)(param_1 + 0xc0)), cVar2 != '\0')) {
    uVar3 = thunk_FUN_03976db5(0,0,10000,10000);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    thunk_FUN_0411a732(uVar3,*(undefined8 *)(param_1 + 0x38));
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    thunk_FUN_041cb0d4(uVar3);
    FUN_0195d280(param_1);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    thunk_FUN_039a9576(uVar3);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    thunk_FUN_039b1e03(uVar3,5);
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x2b8))(*(longlong **)(param_1 + 0xc0));
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),1);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    thunk_FUN_039bba01(uVar3,*(undefined8 *)(param_1 + 0x38));
    thunk_FUN_0416f828(*(undefined8 *)(param_1 + 0x38));
    FUN_0195d280(param_1);
    return;
  }
  FUN_0195d280(param_1);
  return;
}

