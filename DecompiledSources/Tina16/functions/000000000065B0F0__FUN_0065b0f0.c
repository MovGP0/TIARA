/* Ghidra address: 0065b0f0 */
/* Ghidra symbol: FUN_0065b0f0 */


void FUN_0065b0f0(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 0x468) == 0) ||
     (iVar3 = thunk_FUN_0419e3da(*(longlong *)(param_1 + 0x468)), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    thunk_FUN_0418ab71(*(undefined8 *)(param_1 + 0x468),param_2,param_3,0,0);
  }
  iVar3 = FUN_00654c00();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00654bc0(param_1,iVar5);
      cVar2 = FUN_004113d0(lVar4,&PTR_FUN_00640c18);
      if ((cVar2 == '\0') || (*(longlong *)(lVar4 + 0x468) == 0)) {
        *(int *)(lVar4 + 0x90) = *(int *)(lVar4 + 0x90) + param_2;
        *(int *)(lVar4 + 0x94) = *(int *)(lVar4 + 0x94) + param_3;
      }
      else if (!bVar1) {
        thunk_FUN_041cc6e2(*(undefined8 *)(lVar4 + 0x468),0,*(int *)(lVar4 + 0x90) + param_2,
                           *(int *)(lVar4 + 0x94) + param_3,*(undefined4 *)(lVar4 + 0x98),
                           *(undefined4 *)(lVar4 + 0x9c),0x14);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00654320(param_1,0);
  return;
}

