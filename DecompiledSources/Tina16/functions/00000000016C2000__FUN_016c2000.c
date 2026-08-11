/* Ghidra address: 016c2000 */
/* Ghidra symbol: FUN_016c2000 */


longlong FUN_016c2000(longlong param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                     undefined4 param_6,int *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 local_640 [256];
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined1 local_518 [256];
  byte local_418 [256];
  byte local_318 [256];
  byte local_218 [256];
  byte local_118 [256];
  
  local_530 = 0;
  local_538 = 0;
  local_540 = 0;
  local_520 = 0;
  local_528 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_218;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_4 + 1;
  pbVar3 = local_318;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_4;
    param_4 = param_4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_5 + 1;
  pbVar3 = local_418;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_5;
    param_5 = param_5 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_004169a0(&local_520,local_118);
  FUN_0043f750(&local_528,*param_7);
  FUN_00416ad0(&local_520,local_528);
  FUN_00416910(local_518,local_520,0xff);
  *param_7 = *param_7 + 1;
  FUN_004154b0(&local_538,local_218,0);
  FUN_004154b0(&local_540,local_518,0);
  FUN_00415980(&local_530,3,local_538,&LAB_016c2304,local_540);
  FUN_00415560(local_640,local_530,0xff);
  lVar2 = FUN_016bce40(&PTR_FUN_016b3548,1,local_640);
  FUN_016bd1e0(param_1,lVar2);
  uVar1 = FUN_00b95c80(param_1 + 0xa80);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  uVar1 = FUN_00b95c80(local_118);
  *(undefined8 *)(lVar2 + 0x58) = uVar1;
  uVar1 = FUN_01d34560(&PTR_FUN_016a0250,1,0x32,0x32);
  *(undefined8 *)(param_1 + 0xa30) = uVar1;
  uVar1 = FUN_01d34560(&PTR_FUN_016a1b98,1,100,100);
  *(undefined8 *)(param_1 + 0xa40) = uVar1;
  *(undefined4 *)(lVar2 + 0x68) = param_6;
  *(undefined4 *)(lVar2 + 0x6c) = 1;
  if (local_418[0] == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  else {
    uVar1 = FUN_00b95c80(local_418);
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
  }
  uVar1 = FUN_00b95c80(local_318);
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_1 + 0xa30);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 0xa40);
  FUN_00414590(&local_540,3);
  FUN_00414560(&local_528,2);
  return lVar2;
}

