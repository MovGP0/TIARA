/* Ghidra address: 01407de0 */
/* Ghidra symbol: FUN_01407de0 */


void FUN_01407de0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_138 = 0;
  local_130 = 0;
  local_20[0] = 0;
  local_28 = 0;
  DAT_021084b2 = 0;
  DAT_021084c1 = 1;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0xa8))(*(longlong **)(param_1 + 0x720));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x720),&local_28);
    FUN_0043e1a0(local_20,local_28);
    FUN_00414ad0(param_1 + 0x7c8,local_20[0]);
    uVar1 = *(undefined8 *)(param_1 + 0x6d8);
    FUN_008483b0(uVar1,0);
    FUN_00848a30(uVar1,1);
    uVar1 = *(undefined8 *)(param_1 + 0x6d8);
    FUN_00b95290(*(undefined8 *)(param_1 + 0x7a8));
    FUN_00b0ae40(uVar1);
    FUN_00848a70(uVar1,*(undefined4 *)(param_1 + 0x7c0));
    FUN_00416910(local_128,*(undefined8 *)(param_1 + 0x7c8),0xff);
    FUN_01407990(param_1,local_128);
    if (DAT_021084b0 == '\0') {
      FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),1);
      if (DAT_021084b1 == '\0') {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_138);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_138);
      }
      else {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_130);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_130);
      }
    }
    else {
      FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),0);
    }
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
  }
  DAT_021084c1 = 0;
  FUN_00414560(&local_138,2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

