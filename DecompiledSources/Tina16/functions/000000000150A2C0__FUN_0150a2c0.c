/* Ghidra address: 0150a2c0 */
/* Ghidra symbol: FUN_0150a2c0 */


void FUN_0150a2c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x6c8) + 0x4a8) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x6d0);
    lVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x6d8),&PTR_FUN_0150a9d8);
    FUN_00414ad0(lVar1 + 0x100,&DAT_0150a484);
    FUN_00414ad0(lVar1 + 0xe0,L"Digital data (*.dsg)|*.dsg");
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa8))(*(longlong **)(param_1 + 0x6d0));
    if (cVar2 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x6d0),&local_38);
      FUN_0043e1a0(local_30,local_38);
      FUN_00416910(local_138,local_30[0],0xff);
      FUN_00415020(lVar3 + 0xee8,local_138,0x50);
      if (*(char *)(lVar3 + 0xee8) != '\0') {
        FUN_01511720(lVar3,lVar3 + 0xee8);
      }
    }
  }
  else {
    uVar4 = FUN_004113f0(*(undefined8 *)(param_1 + 0x6d8),&PTR_FUN_0150a9d8);
    FUN_015103c0(uVar4);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

