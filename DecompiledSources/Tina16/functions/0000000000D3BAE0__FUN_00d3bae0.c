/* Ghidra address: 00d3bae0 */
/* Ghidra symbol: FUN_00d3bae0 */


void FUN_00d3bae0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_00d3c580(*(undefined8 *)(param_2 + 0x130),param_2 + 0x58);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_2 + 0x58);
  FUN_00d3c580(*(undefined8 *)(param_2 + 0x130),param_2 + 0x58);
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = FUN_00d3ae30(*(undefined8 *)(param_2 + 0x130),param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf8) = uVar3;
  FUN_00d3c580(*(undefined8 *)(param_2 + 0x130),param_2 + 0xe8);
  uVar1 = FUN_004230a0(param_2 + 0xe8);
  FUN_00d3c580(*(undefined8 *)(param_2 + 0x130),param_2 + 0xd8);
  uVar2 = FUN_004230c0(param_2 + 0xd8);
  uVar3 = FUN_00609e10(*(undefined8 *)(param_2 + 0xd0));
  uVar3 = FUN_005ffa40(uVar3);
  thunk_FUN_0415fcd2(*(undefined8 *)(param_2 + 0x138),*(undefined4 *)(param_2 + 0xf8),
                     *(undefined4 *)(param_2 + 0xfc),uVar1,uVar2,uVar3,0,0,0xcc0020);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd0));
  if (*(longlong *)(param_2 + 200) == 0) {
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 8),
                       *(undefined8 *)(param_2 + 0x138));
  }
  return;
}

