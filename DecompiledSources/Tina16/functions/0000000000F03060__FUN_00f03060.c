/* Ghidra address: 00f03060 */
/* Ghidra symbol: FUN_00f03060 */


undefined8 FUN_00f03060(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(ushort *)(param_1 + 0x4f) & 4) == 0) {
    lVar3 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0x28));
    uVar4 = FUN_00f02f00(param_1);
    lVar5 = FUN_005fc8c0(uVar4);
    if (lVar3 != lVar5) {
      plVar1 = *(longlong **)(param_1 + 0x28);
      lVar3 = plVar1[1];
      lVar5 = plVar1[2];
      plVar1[1] = 0;
      plVar1[2] = 0;
      uVar4 = FUN_00f02f00(param_1);
      (**(code **)(*plVar1 + 0x10))(plVar1,uVar4);
      lVar2 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(lVar2 + 8) = lVar3;
      *(longlong *)(lVar2 + 0x10) = lVar5;
    }
  }
  return *(undefined8 *)(param_1 + 0x28);
}

