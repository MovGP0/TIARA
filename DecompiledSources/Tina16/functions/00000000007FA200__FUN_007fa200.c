/* Ghidra address: 007fa200 */
/* Ghidra symbol: FUN_007fa200 */


int FUN_007fa200(longlong param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_34;
  undefined4 local_30;
  int local_1c;
  
  local_34 = 0x1c;
  local_30 = 0x10;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x60) + 0x20);
  sVar2 = *(short *)(*(longlong *)(param_1 + 0x68) + 10);
  uVar4 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8));
  iVar3 = thunk_FUN_041195b2(uVar4,cVar1 == '\x01',&local_34);
  iVar5 = (int)sVar2;
  if (iVar3 != 0) {
    iVar5 = local_1c;
  }
  return iVar5;
}

