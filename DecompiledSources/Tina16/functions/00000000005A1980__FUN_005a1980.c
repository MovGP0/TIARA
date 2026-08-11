/* Ghidra address: 005a1980 */
/* Ghidra symbol: FUN_005a1980 */


void FUN_005a1980(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong local_30 [2];
  
  cVar2 = FUN_005a46d0(param_1[1],param_2,local_30);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(local_30[0] + 8);
    lVar4 = 0;
    if (lVar1 != 0) {
      lVar4 = *(longlong *)(lVar1 + -8);
    }
    iVar3 = FUN_005a1ad0(*param_1,lVar1,lVar4 + -1,param_3,0,*(int *)(local_30[0] + 0x10) + -1);
    if (-1 < iVar3) {
      FUN_005a1c80(local_30[0],iVar3,param_4);
    }
  }
  return;
}

