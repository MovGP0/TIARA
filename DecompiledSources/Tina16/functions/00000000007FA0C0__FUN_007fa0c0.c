/* Ghidra address: 007fa0c0 */
/* Ghidra symbol: FUN_007fa0c0 */


int FUN_007fa0c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
  uVar4 = thunk_FUN_04118143(uVar3,0xfffffff0);
  local_1c = (uint)((uVar4 & 0x840000) != 0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    iVar1 = FUN_0064d120(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_007fa040(auStack_48,0,0x15);
    iVar1 = iVar1 + iVar2;
  }
  else {
    iVar1 = FUN_0064d0b0(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_007fa040(auStack_48,1,0x14);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

