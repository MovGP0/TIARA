/* Ghidra address: 00a0abd0 */
/* Ghidra symbol: FUN_00a0abd0 */


void FUN_00a0abd0(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 local_40c;
  ushort local_40a;
  undefined1 local_408 [1024];
  
  local_40c = 0x300;
  local_40a = *(ushort *)(param_1 + 0x9c);
  if (*(int *)(param_1 + 0x40) == 1) {
    iVar3 = 0;
    uVar5 = (uint)local_40a;
    if (-1 < (int)(uVar5 - 1)) {
      puVar4 = local_408;
      do {
        uVar1 = *(undefined1 *)(**(longlong **)(param_1 + 0xa0) + (longlong)iVar3);
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
        puVar4[2] = uVar1;
        puVar4[3] = 0;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    iVar3 = 0;
    uVar5 = (uint)local_40a;
    if (-1 < (int)(uVar5 - 1)) {
      puVar4 = local_408;
      do {
        plVar2 = *(longlong **)(param_1 + 0xa0);
        lVar6 = (longlong)iVar3;
        *puVar4 = *(undefined1 *)(plVar2[2] + lVar6);
        puVar4[1] = *(undefined1 *)(plVar2[1] + lVar6);
        puVar4[2] = *(undefined1 *)(*plVar2 + lVar6);
        puVar4[3] = 0;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  thunk_FUN_04123694(&local_40c);
  return;
}

