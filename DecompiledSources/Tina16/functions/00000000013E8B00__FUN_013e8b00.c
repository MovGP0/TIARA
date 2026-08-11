/* Ghidra address: 013e8b00 */
/* Ghidra symbol: FUN_013e8b00 */


void FUN_013e8b00(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0xa8))(*(longlong **)(param_1 + 0x710));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x710),&local_38);
    FUN_0043e1a0(local_30,local_38);
    FUN_00414ad0(param_1 + 0x780,local_30[0]);
    uVar1 = *(undefined8 *)(param_1 + 0x6d0);
    FUN_008483b0(uVar1,0);
    FUN_00848a30(uVar1,1);
    uVar1 = *(undefined8 *)(param_1 + 0x6d0);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar4);
        FUN_004095f0(uVar3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x10))(*(longlong **)(param_1 + 0x788));
    FUN_00b0ae40(uVar1);
    FUN_00848a70(uVar1,*(undefined4 *)(param_1 + 0x778));
    FUN_00416910(local_138,*(undefined8 *)(param_1 + 0x780),0xff);
    FUN_013e8810(param_1,local_138);
    FUN_013e72b0(param_1);
    FUN_013e7620(param_1);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

