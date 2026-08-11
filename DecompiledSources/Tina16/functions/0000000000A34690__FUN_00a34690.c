/* Ghidra address: 00a34690 */
/* Ghidra symbol: FUN_00a34690 */


char FUN_00a34690(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = FUN_00a34a40(param_1,param_2,param_3,param_4);
  if ((cVar2 != '\0') && (3 < param_4)) {
    FUN_00415430(param_1 + 0x28,*(undefined8 *)(param_1 + 8),0);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      cVar3 = **(char **)(param_1 + 8);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      iVar5 = 0;
      if (lVar1 != 0) {
        iVar5 = *(int *)(lVar1 + -4);
      }
      cVar3 = *(char *)(lVar1 + iVar5);
    }
    FUN_004144d0(param_1 + 0x30);
    if (cVar3 == '\0') {
      local_28 = 0;
      lVar1 = *(longlong *)(param_1 + 0x28);
      iVar5 = 0;
      if (lVar1 != 0) {
        iVar5 = *(int *)(lVar1 + -4);
      }
      iVar6 = 0;
      if (lVar1 != 0) {
        iVar6 = *(int *)(lVar1 + -4);
      }
      cVar3 = FUN_00a33390(*(longlong *)(param_1 + 8) + 2 + (longlong)iVar5,(param_4 - iVar6) + -2,
                           &local_28,&local_2c,local_20);
      if (cVar3 != '\0') {
        FUN_00415d10(param_1 + 0x30,local_2c,0);
        uVar4 = FUN_00414df0(param_1 + 0x30);
        FUN_00409a70(local_28,uVar4,(longlong)local_2c);
      }
      FUN_004095f0(local_28);
    }
  }
  FUN_00414480(local_20);
  return cVar2;
}

