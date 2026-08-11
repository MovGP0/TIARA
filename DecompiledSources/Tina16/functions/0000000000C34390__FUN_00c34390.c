/* Ghidra address: 00c34390 */
/* Ghidra symbol: FUN_00c34390 */


void FUN_00c34390(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_00c34e10(param_1);
  (**(code **)(*param_1 + 0x78))(param_1,0);
  iVar1 = FUN_00c1aa10();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_00c2fce0(param_1[10],iVar4);
      FUN_00c29d30(uVar2,0);
      uVar2 = FUN_00c2fce0(param_1[10],iVar4);
      FUN_00c28940(uVar2,0);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(int *)(*(longlong *)(param_1[0xb] + 0x18) + 0x10) < 1) &&
     (iVar1 = FUN_00c1aa10(param_1[10]), iVar1 == 1)) {
    lVar3 = FUN_00c2fce0(param_1[10],0);
    (**(code **)(**(longlong **)(param_1[0xb] + 0x18) + 0x10))
              (*(longlong **)(param_1[0xb] + 0x18),*(undefined8 *)(lVar3 + 0x40));
    lVar3 = FUN_00c2fce0(param_1[10],0);
    FUN_00c22da0(*(undefined8 *)(lVar3 + 0x40));
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

