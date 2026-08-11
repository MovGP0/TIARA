/* Ghidra address: 01a493e0 */
/* Ghidra symbol: FUN_01a493e0 */


undefined1 FUN_01a493e0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  local_29 = 0;
  iVar4 = *(int *)(param_1 + 0x2b54);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2b08) + (longlong)iVar3 * 8);
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (uVar2 == param_2) {
        local_29 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_20);
  return local_29;
}

