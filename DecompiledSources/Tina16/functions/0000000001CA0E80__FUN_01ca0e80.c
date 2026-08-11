/* Ghidra address: 01ca0e80 */
/* Ghidra symbol: FUN_01ca0e80 */


ulonglong FUN_01ca0e80(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x1508);
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = 0xffffffff;
  if ((((iVar1 < param_2) &&
       (uVar3 = uVar4, param_2 < *(int *)(*(longlong *)(param_1 + 0x1528) + 0x98) - iVar1)) &&
      (*(int *)(lVar2 + 0x94) < param_3)) &&
     (param_3 < *(int *)(lVar2 + 0x94) + *(int *)(lVar2 + 0x9c))) {
    iVar5 = *(int *)(lVar2 + 0x98) + 2;
    if ((param_2 - iVar1) % iVar5 < *(int *)(lVar2 + 0x98)) {
      uVar3 = (longlong)(param_2 - iVar1) / (longlong)iVar5 & 0xffffffff;
    }
  }
  return uVar3;
}

