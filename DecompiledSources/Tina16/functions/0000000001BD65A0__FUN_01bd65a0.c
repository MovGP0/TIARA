/* Ghidra address: 01bd65a0 */
/* Ghidra symbol: FUN_01bd65a0 */


void FUN_01bd65a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar1 = 0;
  local_40 = param_3;
  local_3c = param_4;
  lVar3 = FUN_01c01390(param_1,&local_40);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 800) != 0)) {
    uVar1 = FUN_004b1870(*(undefined8 *)(lVar3 + 800));
  }
  iVar2 = FUN_01bfee50();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x498));
      uVar4 = FUN_004b23b0(uVar4,uVar1);
      uVar5 = FUN_01bfee10(param_2,iVar6);
      FUN_01bfde30(uVar4,uVar5);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

