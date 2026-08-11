/* Ghidra address: 006eee10 */
/* Ghidra symbol: FUN_006eee10 */


ulonglong FUN_006eee10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if ((*(char *)(lVar1 + 0x510) == '\0') && (cVar2 = FUN_0065be20(lVar1), cVar2 != '\0')) {
    uVar4 = FUN_0065b870(lVar1);
    iVar3 = FUN_006ef6e0(param_1);
    uVar5 = thunk_FUN_041b2403(uVar4,0x102c,(longlong)iVar3,0xf000);
    lVar1 = (uVar5 >> 0xc) - 1;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),(int)lVar1 != 0);
  }
  return (ulonglong)*(byte *)(param_1 + 0x3a);
}

