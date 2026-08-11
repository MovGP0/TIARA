/* Ghidra address: 01c021a0 */
/* Ghidra symbol: FUN_01c021a0 */


void FUN_01c021a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_40 = param_3;
  local_3c = param_4;
  uVar3 = FUN_01c01390(param_1,&local_40);
  iVar1 = FUN_01bff8e0(param_1,uVar3,param_3,param_4);
  iVar2 = FUN_01bfee50(param_2);
  if (iVar2 != 0) {
    iVar2 = FUN_01bfee50();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x498));
        uVar3 = FUN_004b23b0(uVar3,iVar1);
        uVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x498));
        uVar4 = FUN_01bfb960(uVar4,iVar1);
        uVar5 = FUN_01bfee10(param_2,iVar6);
        FUN_01bfde30(uVar4,uVar5);
        iVar1 = FUN_004b1870(uVar3);
        iVar1 = iVar1 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

