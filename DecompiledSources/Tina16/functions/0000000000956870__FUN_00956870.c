/* Ghidra address: 00956870 */
/* Ghidra symbol: FUN_00956870 */


undefined8 FUN_00956870(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_40 [2];
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x128) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x128);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      iVar2 = FUN_00416420(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8) +
                            0x10),param_2);
      if (iVar2 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x128);
        if (*(uint *)(lVar1 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        return *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = FUN_0094ab70(&PTR_FUN_00906eb0,1,param_2,param_1);
  local_40[0] = uVar3;
  FUN_00597e50(*(longlong *)(param_1 + 0x128) + 8,local_40);
  return uVar3;
}

