/* Ghidra address: 01499560 */
/* Ghidra symbol: FUN_01499560 */


void FUN_01499560(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint local_2c [3];
  
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_014754b8,1,*(undefined8 *)PTR_DAT_02004030);
  uVar1 = FUN_013b9740(PTR_DAT_02004010);
  uVar2 = FUN_013b9680(*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x20));
  FUN_01475b20(plVar3,PTR_DAT_02004808,*(undefined1 *)(*(longlong *)(param_1 + 0xbb0) + 0x28),
               uVar1 | uVar2);
  (**(code **)(*plVar3 + 0x2d0))(plVar3);
  uVar4 = FUN_01475ba0(plVar3,*(longlong *)(param_1 + 0xbb0) + 0x28,local_2c);
  *(undefined8 *)PTR_DAT_02004808 = uVar4;
  FUN_00410f20(plVar3);
  if ((uVar1 | uVar2) != local_2c[0]) {
    FUN_01499620(param_1,local_2c[0],1);
  }
  return;
}

