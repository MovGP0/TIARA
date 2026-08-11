/* Ghidra address: 00667f40 */
/* Ghidra symbol: FUN_00667f40 */


void FUN_00667f40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (param_2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      FUN_004d2d90(plVar1,*(undefined8 *)(param_1 + 8));
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))
                (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (param_2 != (longlong *)0x0) {
      FUN_004d26c0(param_2,*(undefined8 *)(param_1 + 8));
      (**(code **)(*param_2 + 200))(param_2,*(undefined8 *)(param_1 + 8));
    }
    *(longlong **)(param_1 + 0x18) = param_2;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar3);
        FUN_0064fca0(uVar2,0xb054,0,0);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

