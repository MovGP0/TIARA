/* Ghidra address: 017b3700 */
/* Ghidra symbol: FUN_017b3700 */


undefined1 FUN_017b3700(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_017a0d18,1,param_2);
  FUN_004169a0(&local_38,param_1 + 0x40);
  FUN_0064de00(local_20[0xda],local_38);
  FUN_004169a0(&local_40,param_1 + 0x140);
  FUN_005fcd80(*(undefined8 *)(local_20[0xdc] + 0xd0),local_40);
  uVar2 = FUN_0040c770(*(double *)(param_1 + 0x240) * 14.0);
  FUN_005fce30(*(undefined8 *)(local_20[0xdc] + 0xd0),uVar2);
  FUN_005fce70(*(undefined8 *)(local_20[0xdc] + 0xd0),0);
  if (*(char *)(param_1 + 0x248) != '\0') {
    uVar1 = *(undefined8 *)(local_20[0xdc] + 0xd0);
    uVar3 = FUN_005fce60(uVar1);
    FUN_005fce70(uVar1,uVar3 | 1);
  }
  if (*(char *)(param_1 + 0x249) != '\0') {
    uVar1 = *(undefined8 *)(local_20[0xdc] + 0xd0);
    uVar3 = FUN_005fce60(uVar1);
    FUN_005fce70(uVar1,uVar3 | 2);
  }
  FUN_005fc860(*(undefined8 *)(local_20[0xdc] + 0xd0),*(undefined4 *)(param_1 + 0x24c));
  iVar4 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar4 == 1) {
    local_21 = 1;
    FUN_0064dd90(local_20[0xda],&local_48);
    FUN_00416910(param_1 + 0x40,local_48,0xff);
    FUN_005fccd0(*(undefined8 *)(local_20[0xdc] + 0xd0),&local_50);
    FUN_00416910(param_1 + 0x140,local_50,0xff);
    iVar4 = FUN_005fce00(*(undefined8 *)(local_20[0xdc] + 0xd0));
    *(double *)(param_1 + 0x240) = (double)iVar4 / 14.0;
    uVar5 = FUN_005fce60(*(undefined8 *)(local_20[0xdc] + 0xd0));
    *(bool *)(param_1 + 0x248) = (uVar5 & 1) != 0;
    uVar5 = FUN_005fce60(*(undefined8 *)(local_20[0xdc] + 0xd0));
    *(bool *)(param_1 + 0x249) = (uVar5 & 2) != 0;
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(*(longlong *)(local_20[0xdc] + 0xd0) + 0x28);
    (**(code **)(**(longlong **)(param_2 + 0x948) + 0x180))(*(longlong **)(param_2 + 0x948));
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,2);
  return local_21;
}

