/* Ghidra address: 0130a410 */
/* Ghidra symbol: FUN_0130a410 */


void FUN_0130a410(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20));
  FUN_00418590(*(undefined8 *)(param_1 + 0x18),&DAT_01307478);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),iVar2);
        (**(code **)(*plVar1 + -0x20))(plVar1,1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))(*(longlong **)(param_1 + 0x60));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

