/* Ghidra address: 00a35250 */
/* Ghidra symbol: FUN_00a35250 */


void FUN_00a35250(longlong param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 local_42c;
  ushort local_42a;
  undefined1 local_428 [1024];
  
  if (param_2 == 0x10) {
    param_2 = 8;
  }
  FUN_0040d200(&local_42c,0x404,0);
  local_42c = 0x300;
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  local_42a = (ushort)uVar2;
  uVar2 = uVar2 & 0xffff;
  iVar4 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    puVar5 = local_428;
    do {
      iVar3 = thunk_FUN_03f3ed25(iVar4,0xff,local_42a - 1);
      uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (longlong)iVar3);
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = *puVar5;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  thunk_FUN_04123694(&local_42c);
  return;
}

