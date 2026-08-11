/* Ghidra address: 00f702c0 */
/* Ghidra symbol: FUN_00f702c0 */


void FUN_00f702c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar2 = DAT_0202eec0;
  lVar3 = FUN_00f6f040(param_1);
  uVar4 = FUN_00f6e210(lVar3,1);
  cVar1 = *(char *)(lVar3 + 0x93);
  local_30 = (int)uVar4;
  uStack_2c = (int)(uVar4 >> 0x20);
  if (cVar1 == '\x02') {
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 - iVar2 / 2,uStack_2c - iVar2);
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 + iVar2 / 2,uStack_2c - iVar2);
  }
  else if (cVar1 == '\x03') {
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 - iVar2 / 2,uStack_2c + iVar2);
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 + iVar2 / 2,uStack_2c + iVar2);
  }
  else if (cVar1 == '\0') {
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 - iVar2,uStack_2c - iVar2 / 2);
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 - iVar2,uStack_2c + iVar2 / 2);
  }
  else if (cVar1 == '\x01') {
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 + iVar2,uStack_2c - iVar2 / 2);
    FUN_00f6edd0(param_1,uVar4 & 0xffffffff,uStack_2c,local_30 + iVar2,uStack_2c + iVar2 / 2);
  }
  lVar3 = FUN_00f65130(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  iVar2 = *(int *)(lVar3 + 0x94);
  *(undefined4 *)(lVar3 + 0x44 + (longlong)iVar2 * 8) = *(undefined4 *)(param_1 + 0x140);
  *(undefined1 *)(lVar3 + 0x48 + (longlong)iVar2 * 8) = *(undefined1 *)(param_1 + 0x144);
  *(int *)(lVar3 + 0x94) = *(int *)(lVar3 + 0x94) + 1;
  return;
}

