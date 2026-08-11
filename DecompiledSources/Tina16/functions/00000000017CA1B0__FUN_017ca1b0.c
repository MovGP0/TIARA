/* Ghidra address: 017ca1b0 */
/* Ghidra symbol: FUN_017ca1b0 */


longlong * FUN_017ca1b0(uint param_1,longlong param_2)

{
  ushort uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *local_40;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = (longlong *)0x0;
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  plVar2 = local_40;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_2,iVar3);
      uVar1 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (param_1 == uVar1) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      plVar2 = local_40;
    } while (iVar4 != 0);
  }
  local_40 = plVar2;
  FUN_00414480(local_30);
  return local_40;
}

