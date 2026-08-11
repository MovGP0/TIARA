/* Ghidra address: 00650dc0 */
/* Ghidra symbol: FUN_00650dc0 */


void FUN_00650dc0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uStack_3c;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(uint *)(param_1 + 0x14) & 0x1000) == 0) {
    if (((int)param_1[0x13] < 0x8001) && (*(int *)((longlong)param_1 + 0x9c) < 0x8001)) {
      uVar1 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
      uVar2 = FUN_00647f40();
      pcVar4 = (code *)FUN_00411550(param_1,0xffd2);
      (*pcVar4)(param_1,uVar1 | uVar2,(longlong)*(short *)(param_2 + 0x10),
                (longlong)*(short *)(param_2 + 0x12));
    }
    else {
      uVar3 = FUN_0064fb30(param_1);
      uVar1 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
      uVar2 = FUN_00647f40();
      pcVar4 = (code *)FUN_00411550(param_1,0xffd2);
      uStack_3c = (undefined4)(uVar3 >> 0x20);
      (*pcVar4)(param_1,uVar1 | uVar2,uVar3 & 0xffffffff,uStack_3c);
    }
  }
  return;
}

