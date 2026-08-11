/* Ghidra address: 01168110 */
/* Ghidra symbol: FUN_01168110 */


longlong FUN_01168110(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar2 = FUN_00410920(param_1,local_res10);
  if (lVar2 != -1) {
    FUN_01167ab0(lVar2,0,param_3,param_4);
    *(undefined4 *)(lVar2 + 0x3c) = param_6;
    *(undefined4 *)(lVar2 + 0x40) = param_7;
    uVar3 = FUN_011680b0(param_6);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    uVar3 = FUN_011680b0(param_7);
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    *(undefined4 *)(lVar2 + 0x58) = param_8;
    *(undefined4 *)(lVar2 + 0x5c) = param_9;
    *(undefined4 *)(lVar2 + 0x28) = param_5;
    *(undefined4 *)(lVar2 + 0x30) = param_10;
    uVar1 = FUN_0040c770(DAT_0203aeb0 * 8.0);
    *(undefined4 *)(lVar2 + 0x20) = uVar1;
    *(undefined4 *)(lVar2 + 0x24) = 0;
    uVar1 = FUN_0040c770(DAT_0203aeb0 * 8.0);
    *(undefined4 *)(lVar2 + 0x2c) = uVar1;
    *(undefined4 *)(lVar2 + 0x28) = param_5;
    *(undefined4 *)(lVar2 + 0x60) = 1;
    param_1 = lVar2;
  }
  return param_1;
}

