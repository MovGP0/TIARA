/* Ghidra address: 00744c20 */
/* Ghidra symbol: FUN_00744c20 */


void FUN_00744c20(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    param_2 = FUN_0065acb0(param_1,0);
  }
  if (param_2 != *(int *)(param_1 + 0x2cc)) {
    iVar3 = 0;
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),iVar3);
        uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar2 + 0x28),param_2,
                                   *(undefined4 *)(param_1 + 0x2cc));
        lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),iVar3);
        *(undefined4 *)(lVar2 + 0x28) = uVar1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar3 = 0;
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b8),iVar3);
        uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar2 + 0x28),param_2,
                                   *(undefined4 *)(param_1 + 0x2cc));
        lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b8),iVar3);
        *(undefined4 *)(lVar2 + 0x28) = uVar1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_00747090(*(undefined8 *)(param_1 + 0x4c0),iVar3);
        if (*(longlong *)(lVar2 + 0x18) != 0) {
          lVar2 = FUN_00747090(*(undefined8 *)(param_1 + 0x4c0),iVar3);
          (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x170))(*(longlong **)(lVar2 + 0x18),param_2)
          ;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0065abb0(param_1,param_2);
  }
  return;
}

