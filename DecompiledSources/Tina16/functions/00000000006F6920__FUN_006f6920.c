/* Ghidra address: 006f6920 */
/* Ghidra symbol: FUN_006f6920 */


undefined8 FUN_006f6920(longlong param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (*(byte *)(param_1 + 0x4a1) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x4a1) & 0x1f)
            & 3U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar2 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_041b2403(uVar2,0x1027,0,0);
    if (iVar1 != -1) {
      uVar3 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar1);
    }
  }
  return uVar3;
}

