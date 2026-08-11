/* Ghidra address: 00d3c280 */
/* Ghidra symbol: FUN_00d3c280 */


void FUN_00d3c280(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_00d3ca40(*(undefined8 *)(param_2 + 0x120),param_2 + 0x58);
  *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(param_2 + 0x58);
  FUN_00d3ca40(*(undefined8 *)(param_2 + 0x120),param_2 + 0x58);
  *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = FUN_00d3ae30(*(undefined8 *)(param_2 + 0x120),param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = uVar3;
  FUN_00d3ca40(*(undefined8 *)(param_2 + 0x120),param_2 + 0xd8);
  uVar1 = FUN_004230a0(param_2 + 0xd8);
  FUN_00d3ca40(*(undefined8 *)(param_2 + 0x120),param_2 + 200);
  uVar2 = FUN_004230c0(param_2 + 200);
  uVar3 = FUN_00609e10(*(undefined8 *)(param_2 + 0xc0));
  uVar3 = FUN_005ffa40(uVar3);
  thunk_FUN_0415fcd2(*(undefined8 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 0xe8),
                     *(undefined4 *)(param_2 + 0xec),uVar1,uVar2,uVar3,0,0,0xcc0020);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xc0));
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x120) + 8),
                       *(undefined8 *)(param_2 + 0x128));
  }
  return;
}

