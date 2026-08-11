/* Ghidra address: 01c7d780 */
/* Ghidra symbol: FUN_01c7d780 */


void FUN_01c7d780(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  
  *(undefined4 *)(param_1 + 0x17f4) = param_2;
  lVar1 = FUN_012beda0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),
                       *(undefined2 *)(param_1 + 0x17f4));
  (**(code **)(**(longlong **)(param_1 + 0xf00) + 0x268))
            (*(longlong **)(param_1 + 0xf00),*(undefined4 *)(param_1 + 0x17f4));
  (**(code **)(**(longlong **)(param_1 + 0xf00) + 0x198))(*(longlong **)(param_1 + 0xf00));
  lVar3 = *(longlong *)(param_1 + 0x27a8);
  iVar4 = 0;
  iVar5 = *(int *)(lVar3 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar3,iVar4);
      FUN_01c7d720(auStack_48,uVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(lVar1 + 0x20) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x20),iVar4);
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x260))(*(longlong **)(lVar3 + 0x10),uVar2,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x17f4) == 0) {
    FUN_01b1cfa0(param_1,1,1);
    FUN_01b1cfa0(param_1,2,0);
  }
  else {
    FUN_01b1cfa0(param_1,2,1);
    FUN_01b1cfa0(param_1,1,0);
  }
  FUN_01c7cf40(param_1);
  if (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x17f8) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x17f8) = 0;
  }
  FUN_01c7e2a0(param_1);
  iVar5 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_007e2f10(*(undefined8 *)(param_1 + 0x11d8),iVar4);
      FUN_007e2da0(uVar2,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_007e2f10(*(undefined8 *)(param_1 + 0x1618),iVar4);
      FUN_007e2da0(uVar2,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

