/* Ghidra address: 012d0750 */
/* Ghidra symbol: FUN_012d0750 */


undefined8 FUN_012d0750(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_60 = param_3;
  local_50 = param_2;
  local_58 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  lVar1 = *(longlong *)(local_50 + 8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_01d347d0(lVar1,iVar4);
      if ((0 < *(int *)(lVar3 + 0x158)) && (*(char *)(lVar3 + 8) == '\0')) {
        FUN_01cc0ae0(lVar3,&local_38);
        FUN_012d06b0(auStack_88,&local_30,local_38);
        FUN_01cc0ae0(local_60,&local_48);
        FUN_012d06b0(auStack_88,&local_40,local_48);
        iVar2 = FUN_00416db0(local_30,local_40);
        if ((iVar2 == 0) && (*(int *)(lVar3 + 0x154) == *(int *)(local_60 + 0x154))) {
          FUN_004ae7e0(local_58,lVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,4);
  return local_58;
}

