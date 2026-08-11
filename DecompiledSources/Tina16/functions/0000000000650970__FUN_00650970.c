/* Ghidra address: 00650970 */
/* Ghidra symbol: FUN_00650970 */


void FUN_00650970(longlong param_1,longlong param_2,undefined4 param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uStack_2c;
  
  if ((*(uint *)(param_1 + 0xa0) & 0x1000) == 0) {
    if ((*(int *)(param_1 + 0x98) < 0x8001) && (*(int *)(param_1 + 0x9c) < 0x8001)) {
      uVar1 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
      uVar2 = FUN_00647f40();
      pcVar4 = (code *)FUN_00411550(param_1,0xffd3);
      (*pcVar4)(param_1,param_3,uVar1 | param_4 | uVar2,(longlong)*(short *)(param_2 + 0x10),
                (int)*(short *)(param_2 + 0x12));
    }
    else {
      uVar3 = FUN_0064fb30(param_1);
      uVar1 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
      uVar2 = FUN_00647f40();
      pcVar4 = (code *)FUN_00411550(param_1,0xffd3);
      uStack_2c = (undefined4)(uVar3 >> 0x20);
      (*pcVar4)(param_1,param_3,uVar1 | param_4 | uVar2,uVar3 & 0xffffffff,uStack_2c);
    }
  }
  return;
}

