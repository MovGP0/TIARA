/* Ghidra address: 0109f4b0 */
/* Ghidra symbol: FUN_0109f4b0 */


void FUN_0109f4b0(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *local_30;
  
  local_30 = (short *)0x0;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x998) + 0x990) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x998) + 0x990);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,iVar5);
      iVar6 = 0;
      if (local_30 != (short *)0x0) {
        iVar6 = *(int *)(local_30 + -2);
      }
      sVar1 = *local_30;
      iVar4 = FUN_004170c0(&LAB_0109f5e4,local_30,1);
      FUN_00416dc0(&local_30,local_30,iVar4 + 1,iVar6 - iVar4);
      if (sVar1 == 0x30) {
        FUN_010b2e30(*(undefined8 *)(param_1 + 0x1650),local_30);
        FUN_0109ce70(param_1,local_30,1);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

