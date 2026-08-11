/* Ghidra address: 00f040f0 */
/* Ghidra symbol: FUN_00f040f0 */


undefined8 FUN_00f040f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x100) == 0) {
    lVar2 = FUN_00f03ff0(param_1);
    lVar3 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0x18));
    lVar4 = FUN_005fc8c0(lVar2);
    if ((lVar3 != lVar4) ||
       (*(int *)(*(longlong *)(param_1 + 0x18) + 0x28) != *(int *)(lVar2 + 0x28))) {
      plVar1 = *(longlong **)(param_1 + 0x18);
      lVar2 = plVar1[1];
      lVar3 = plVar1[2];
      plVar1[1] = 0;
      plVar1[2] = 0;
      uVar5 = FUN_00f03ff0(param_1);
      (**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
      lVar4 = *(longlong *)(param_1 + 0x18);
      *(longlong *)(lVar4 + 8) = lVar2;
      *(longlong *)(lVar4 + 0x10) = lVar3;
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}

