/* Ghidra address: 00650ef0 */
/* Ghidra symbol: FUN_00650ef0 */


void FUN_00650ef0(longlong param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  if ((*(uint *)(param_1 + 0xa0) & 0x1000) == 0) {
    uVar1 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
    uVar2 = FUN_00647f40();
    pcVar3 = (code *)FUN_00411550(param_1,0xffd1);
    (*pcVar3)(param_1,param_3,uVar1 | uVar2,(longlong)*(short *)(param_2 + 0x10),
              (int)*(short *)(param_2 + 0x12));
  }
  return;
}

