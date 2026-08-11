/* Ghidra address: 01126a70 */
/* Ghidra symbol: FUN_01126a70 */


void FUN_01126a70(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01116978,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01117680(plVar2,*(undefined8 *)(param_1 + 0xde0));
  FUN_011173b0(plVar2,*(undefined4 *)(param_1 + 0xb48));
  sVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  FUN_00410f20(plVar2);
  if (sVar1 == 1) {
    if (*(int *)(param_1 + 0xb48) == 8) {
      FUN_01126b30(param_1);
    }
    else {
      FUN_01127350(param_1);
    }
    FUN_01125620(param_1);
    uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x310));
    thunk_FUN_04015890(uVar3,0);
  }
  return;
}

