/* Ghidra address: 013e7930 */
/* Ghidra symbol: FUN_013e7930 */


void FUN_013e7930(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x790) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_004095c0(0x10);
      *(undefined8 *)(param_1 + 0x7a8) = uVar2;
      puVar4 = *(undefined8 **)(param_1 + 0x7a8);
      puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x790),iVar5);
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x788),puVar4);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x790),0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x750),*puVar4);
  DAT_02108468 = 0;
  FUN_00414ad0(param_1 + 0x780,L"noname.cpl");
  uVar2 = FUN_00b89270();
  FUN_00b8ac60(uVar2,param_1,*(undefined8 *)(param_1 + 0x730));
  uVar2 = FUN_00b89270();
  FUN_00b8ac60(uVar2,param_1,*(undefined8 *)(param_1 + 0x738));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),local_40);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),0,0,local_40[0]);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_48);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,0,local_48);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0);
  *(undefined4 *)(param_1 + 0x778) = uVar1;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d0),uVar1);
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d0),*(int *)(*(longlong *)(param_1 + 0x788) + 0x10) * 2)
  ;
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) <= *(int *)(param_1 + 0x778)) {
    FUN_00848a70(*(longlong *)(param_1 + 0x6d0),*(int *)(param_1 + 0x778));
  }
  FUN_013e72b0(param_1);
  FUN_013e7620(param_1);
  if (*(char *)(param_1 + 0x798) == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),0);
  }
  FUN_0064cf60(param_1,0x480);
  FUN_00414560(&local_48,2);
  return;
}

