/* Ghidra address: 00c0efe0 */
/* Ghidra symbol: FUN_00c0efe0 */


void FUN_00c0efe0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x5e8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar3);
      if (*(int *)(lVar1 + 8) < param_2 + param_3) {
        lVar1 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar3);
        if (param_2 < *(int *)(lVar1 + 8)) {
          plVar2 = (longlong *)FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar3);
          (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        }
      }
      else {
        plVar2 = (longlong *)FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar3);
        lVar1 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar3);
        (**(code **)(*plVar2 + 0x18))(plVar2,*(int *)(lVar1 + 8) - param_3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x668) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x668),iVar3);
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

