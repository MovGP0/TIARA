/* Ghidra address: 016631c0 */
/* Ghidra symbol: FUN_016631c0 */


void FUN_016631c0(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) +
           (longlong)((param_2 + param_3) / 2) * 0x10);
  iVar6 = param_3;
  iVar7 = param_2;
  do {
    while (*(ulonglong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) + (longlong)iVar7 * 0x10) < uVar5)
    {
      iVar7 = iVar7 + 1;
    }
    while (uVar5 < *(ulonglong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) + (longlong)iVar6 * 0x10))
    {
      iVar6 = iVar6 + -1;
    }
    if (iVar7 <= iVar6) {
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) + (longlong)iVar7 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) + (longlong)iVar7 * 0x10);
      puVar2 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) + (longlong)iVar6 * 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1f0) + (longlong)iVar6 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    }
  } while (iVar7 <= iVar6);
  if (param_2 < iVar6) {
    FUN_016631c0(param_1,param_2);
  }
  if (iVar7 < param_3) {
    FUN_016631c0(param_1,iVar7,param_3);
  }
  return;
}

