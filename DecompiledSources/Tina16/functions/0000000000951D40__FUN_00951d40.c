/* Ghidra address: 00951d40 */
/* Ghidra symbol: FUN_00951d40 */


longlong FUN_00951d40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong local_30;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(uint *)(lVar2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8);
      iVar1 = FUN_00416420(*(undefined8 *)(lVar2 + 0x10),param_2);
      if ((iVar1 == 0) && (iVar1 = FUN_00416420(*(undefined8 *)(lVar2 + 0x18),param_3), iVar1 == 0))
      {
        return lVar2;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar2 = FUN_0094b090(&PTR_FUN_00907178,1,param_2,param_3,param_1);
  local_30 = lVar2;
  FUN_00597e50(*(longlong *)(param_1 + 0x90) + 8,&local_30);
  return lVar2;
}

