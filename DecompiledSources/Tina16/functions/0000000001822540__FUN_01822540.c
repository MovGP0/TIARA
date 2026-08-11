/* Ghidra address: 01822540 */
/* Ghidra symbol: FUN_01822540 */


undefined8 FUN_01822540(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      uVar1 = (longlong)(iVar4 + iVar5) / 2;
      iVar3 = (int)uVar1;
      iVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8),uVar1 & 0xffffffff);
      if (iVar2 == *(int *)(param_1 + 0x84)) {
        iVar2 = 0;
      }
      else if (*(int *)(param_1 + 0x84) < iVar2) {
        iVar2 = 1;
      }
      else {
        iVar2 = -1;
      }
      if (iVar2 < 0) {
        iVar4 = iVar3 + 1;
      }
      else {
        iVar5 = iVar3 + -1;
        if (iVar2 == 0) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 <= iVar5);
  }
  iVar2 = 1;
  iVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8),iVar4 + -1);
  while (iVar5 = iVar5 + 1, iVar5 < *(int *)(param_1 + 0x84)) {
    iVar2 = iVar2 + 1;
  }
  FUN_0043f750(&local_30,iVar4);
  FUN_0043f750(&local_38,iVar2);
  FUN_00416cd0(param_2,3,local_30,&LAB_01822698,local_38);
  FUN_00414560(&local_38,2);
  return param_2;
}

