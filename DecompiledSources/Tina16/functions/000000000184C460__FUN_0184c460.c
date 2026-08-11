/* Ghidra address: 0184c460 */
/* Ghidra symbol: FUN_0184c460 */


void FUN_0184c460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x88) = *(undefined8 *)(param_1 + 0x30);
  iVar1 = FUN_01847410();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 0xa0),iVar4);
      plVar3 = (longlong *)FUN_0184b520(*(undefined8 *)(param_1 + 0xa8),iVar4);
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_40);
      (**(code **)(*plVar2 + 8))(plVar2,&local_40);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))(*(longlong **)(param_1 + 0xa0),param_2);
  FUN_00460ba0(&local_40);
  return;
}

