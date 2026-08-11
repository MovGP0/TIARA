/* Ghidra address: 013e7620 */
/* Ghidra symbol: FUN_013e7620 */


void FUN_013e7620(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_00848790(*(undefined8 *)(param_1 + 0x6d0),1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_30);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),0,0,local_30);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_38);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,0,local_38);
  puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),0);
  *(undefined8 **)(param_1 + 0x7a8) = puVar1;
  *puVar1 = 0;
  if (*(char *)(param_1 + 0x798) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
              (*(longlong **)(param_1 + 0x770),&local_40,1);
    uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,*(longlong *)(param_1 + 0x7a8) + 8,0);
    FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6d0),local_40,uVar2);
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1;
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar3);
      *(undefined8 *)(param_1 + 0x7a8) = uVar2;
      (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
                (*(longlong **)(param_1 + 0x770),&local_48,iVar4);
      uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,*(undefined8 *)(param_1 + 0x7a8),0);
      FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6d0),local_48,uVar2);
      (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
                (*(longlong **)(param_1 + 0x770),&local_50,iVar4 + 1);
      uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,*(longlong *)(param_1 + 0x7a8) + 8);
      FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6d0),local_50,uVar2);
      iVar4 = iVar4 + 2;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
  iVar3 = iVar4 * 2;
  iVar5 = *(int *)(param_1 + 0x778) + -1;
  if (iVar3 <= iVar5) {
    iVar4 = iVar5 + iVar4 * -2 + 1;
    do {
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),0,iVar3,&DAT_013e792c);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,iVar3,&DAT_013e792c);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_38,2);
  return;
}

