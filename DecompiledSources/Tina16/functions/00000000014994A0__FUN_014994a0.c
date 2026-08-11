/* Ghidra address: 014994a0 */
/* Ghidra symbol: FUN_014994a0 */


void FUN_014994a0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  undefined6 uVar5;
  ulonglong uVar4;
  
  uVar5 = (undefined6)((ulonglong)unaff_RSI >> 0x10);
  if (*(char *)(*(longlong *)(param_1 + 0x930) + 0x62b) == '\0') {
    uVar4 = CONCAT62(uVar5,0x69);
  }
  else {
    uVar4 = CONCAT62(uVar5,0x6a);
  }
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01475d38,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01476a00(plVar2,*(undefined8 *)(param_1 + 0x930));
  (**(code **)(*plVar2 + 0x2d0))(plVar2);
  uVar3 = FUN_00410f20(plVar2);
  uVar5 = (undefined6)((ulonglong)uVar3 >> 0x10);
  if (*(char *)(*(longlong *)(param_1 + 0x930) + 0x62b) == '\0') {
    uVar1 = (undefined4)CONCAT62(uVar5,0x69);
  }
  else {
    uVar1 = (undefined4)CONCAT62(uVar5,0x6a);
  }
  FUN_013b37d0(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4e8),uVar4 & 0xffffffff,uVar1);
  if (*(longlong *)(param_1 + 0x930) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x930) + 0x890);
    (**(code **)(*plVar2 + 0x90))(plVar2);
    FUN_01115c40(*(undefined8 *)(param_1 + 0x930));
  }
  return;
}

