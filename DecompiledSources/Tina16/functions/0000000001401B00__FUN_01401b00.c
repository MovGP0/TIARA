/* Ghidra address: 01401b00 */
/* Ghidra symbol: FUN_01401b00 */


void FUN_01401b00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_30;
  
  local_30 = 0;
  iVar6 = 0;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x6f0),iVar5);
      if (cVar2 != '\0') {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x710);
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x8c0));
    *(undefined8 *)(param_1 + 0x8c0) = 0;
  }
  if (iVar6 < 1) {
    FUN_01401f60(param_1,param_2);
  }
  else {
    uVar4 = FUN_00409570((longlong)(iVar6 * 2));
    *(undefined8 *)(param_1 + 0x8c0) = uVar4;
    iVar3 = *(int *)(param_1 + 0x890);
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_014002c0(param_1,&local_30,*(undefined8 *)(param_1 + 0x8c0),iVar5 + 1,iVar6);
        FUN_0084e3e0(uVar1,0,iVar5,local_30);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x700),iVar6);
  FUN_00414480(&local_30);
  return;
}

