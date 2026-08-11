/* Ghidra address: 00a35ba0 */
/* Ghidra symbol: FUN_00a35ba0 */


void FUN_00a35ba0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined2 local_43c;
  undefined2 local_43a;
  undefined1 local_438 [1032];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((*(char *)(lVar2 + 0x491) == '\0') || (*(char *)(lVar2 + 0x491) == '\x04')) {
    uVar3 = 1 << (*(byte *)(lVar2 + 0x52) & 0x1f);
    FUN_0040d200(&local_43c,0x404,0);
    local_43c = 0x300;
    uVar8 = uVar3 & 0xffff;
    iVar6 = 0;
    local_43a = (short)uVar3;
    if (-1 < (int)(uVar8 - 1)) {
      puVar7 = local_438;
      do {
        iVar4 = thunk_FUN_03f3ed25(iVar6,0xff,(uVar3 & 0xffff) - 1);
        uVar1 = *(undefined1 *)(*(longlong *)(lVar2 + 0x18) + 0x169 + (longlong)iVar4);
        *puVar7 = uVar1;
        puVar7[1] = uVar1;
        puVar7[2] = *puVar7;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar5 = thunk_FUN_04123694(&local_43c);
    (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x78))(*(longlong **)(lVar2 + 0x18),uVar5);
  }
  return;
}

