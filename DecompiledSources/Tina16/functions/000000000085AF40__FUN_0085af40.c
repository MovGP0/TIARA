/* Ghidra address: 0085af40 */
/* Ghidra symbol: FUN_0085af40 */


void FUN_0085af40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           FUN_00742540(&PTR_FUN_00732f28,1,*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x88));
  (**(code **)(*plVar2 + 0x130))(plVar2,*(undefined8 *)(param_1 + 0x2d8));
  if ((*(longlong *)(param_1 + 0x2c0) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x94) +
      *(int *)(*(longlong *)(param_1 + 0x2c0) + 0x9c) <= *(int *)(param_1 + 0x2cc))) {
    iVar1 = 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2d0);
  }
  (**(code **)(*plVar2 + 400))
            (plVar2,iVar1,*(undefined4 *)(param_1 + 0x2cc),(*(int *)(param_1 + 0x368) - iVar1) + -2,
             2);
  *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + 0x10;
  return;
}

