/* Ghidra address: 00c23250 */
/* Ghidra symbol: FUN_00c23250 */


undefined8 FUN_00c23250(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined2 local_40c;
  undefined2 local_40a;
  undefined1 local_408 [1024];
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_40c = 0x300;
    local_40a = *(undefined2 *)(param_1 + 0x10);
    iVar2 = 0;
    if (-1 < iVar5 + -1) {
      puVar4 = local_408;
      do {
        puVar1 = (undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 3);
        *puVar4 = *puVar1;
        puVar4[1] = puVar1[1];
        puVar4[2] = puVar1[2];
        puVar4[3] = 4;
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = thunk_FUN_04123694(&local_40c);
  }
  return uVar3;
}

