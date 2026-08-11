/* Ghidra address: 00a797b0 */
/* Ghidra symbol: FUN_00a797b0 */


undefined8 FUN_00a797b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar5 = (longlong)iVar4;
      lVar2 = FUN_00a79790(param_1,lVar5);
      if (*(longlong *)(lVar2 + 8) == param_2) {
        lVar2 = FUN_00a79790(param_1,lVar5);
        uVar1 = *(undefined8 *)(lVar2 + 0x10);
        lVar2 = FUN_00a79790(param_1,lVar5);
        *(undefined8 *)(lVar2 + 0x10) = param_3;
        return uVar1;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_00a79560(&DAT_00a79150,1,param_2,param_3);
  FUN_004ae7e0(uVar1,uVar3);
  return 0;
}

