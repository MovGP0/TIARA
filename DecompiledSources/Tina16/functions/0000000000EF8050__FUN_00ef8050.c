/* Ghidra address: 00ef8050 */
/* Ghidra symbol: FUN_00ef8050 */


ushort * FUN_00ef8050(undefined8 *param_1,longlong param_2,int param_3,int param_4,
                     undefined8 param_5)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort *local_40 [2];
  
  iVar3 = 1;
  for (; (iVar3 <= param_3 / 500 && (param_2 != 0)); param_2 = *(longlong *)(param_2 + 0x3f0)) {
    iVar3 = iVar3 + 1;
  }
  for (local_40[0] = (ushort *)*param_1;
      (local_40[0] != (ushort *)0x0 && (*(longlong *)(local_40[0] + 0x1f8) != 0));
      local_40[0] = *(ushort **)(local_40[0] + 0x1f8)) {
  }
  iVar3 = 0;
  iVar4 = (param_4 - param_3) + 1;
  if ((0 < iVar4) && (local_40[0] == (ushort *)0x0)) {
    FUN_00ef7d90(local_40,param_5);
    *param_1 = local_40[0];
  }
  puVar2 = local_40[0];
  if (0 < iVar4) {
    do {
      if (*local_40[0] == 500) {
        FUN_00ef7d90(local_40[0] + 0x1f8,param_5);
        local_40[0] = *(ushort **)(local_40[0] + 0x1f8);
      }
      *local_40[0] = *local_40[0] + 1;
      uVar1 = *(ushort *)(param_2 + 2 + (longlong)(param_3 % 500) * 2);
      puVar2 = (ushort *)(ulonglong)uVar1;
      local_40[0][(longlong)(int)(*local_40[0] - 1) + 1] = uVar1;
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 1;
      if ((param_3 != 0) &&
         (puVar2 = (ushort *)((longlong)param_3 / 500 & 0xffffffff), param_3 % 500 == 0)) {
        param_2 = *(longlong *)(param_2 + 0x3f0);
      }
    } while (iVar3 < iVar4);
  }
  return puVar2;
}

