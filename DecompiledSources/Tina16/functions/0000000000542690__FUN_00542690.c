/* Ghidra address: 00542690 */
/* Ghidra symbol: FUN_00542690 */


undefined8 FUN_00542690(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00542450(param_1,&local_30);
  uVar2 = 0;
  if (local_30 != 0) {
    uVar2 = *(undefined8 *)(local_30 + -8);
  }
  FUN_00419260(&local_38,&DAT_00542998,1,uVar2);
  iVar5 = 0;
  if (local_30 != 0) {
    iVar5 = (int)*(undefined8 *)(local_30 + -8);
  }
  iVar4 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      plVar1 = *(longlong **)(local_30 + (longlong)iVar4 * 8);
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
      FUN_004194b0(local_38 + (longlong)iVar4 * 8,local_40,&DAT_00534170);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar3 = 0;
  if (local_38 != 0) {
    lVar3 = *(longlong *)(local_38 + -8);
  }
  FUN_00564890(param_2,local_38,lVar3 + -1);
  FUN_00419430(&local_40,&DAT_00534170);
  FUN_00419430(&local_38,&DAT_00542998);
  FUN_00419430(&local_30,&DAT_005341c0);
  return param_2;
}

