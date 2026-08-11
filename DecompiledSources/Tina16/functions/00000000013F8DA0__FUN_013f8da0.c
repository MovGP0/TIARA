/* Ghidra address: 013f8da0 */
/* Ghidra symbol: FUN_013f8da0 */


void FUN_013f8da0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xa8))(*(longlong **)(param_1 + 0x6e8));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),&local_28);
    FUN_0043e1a0(local_20,local_28);
    FUN_00414ad0(param_1 + 0x780,local_20[0]);
    uVar1 = *(undefined8 *)(param_1 + 0x6e0);
    FUN_008483b0(uVar1,0);
    FUN_00848a30(uVar1,1);
    uVar1 = *(undefined8 *)(param_1 + 0x6e0);
    FUN_00b95290(*(undefined8 *)(param_1 + 0x750));
    FUN_00b0ae40(uVar1);
    FUN_00848a70(uVar1,*(undefined4 *)(param_1 + 0x778));
    FUN_00416910(local_128,*(undefined8 *)(param_1 + 0x780),0xff);
    FUN_013f8580(param_1,local_128);
    FUN_013f76a0(param_1);
    FUN_013f7aa0(param_1);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

