/* Ghidra address: 006510a0 */
/* Ghidra symbol: FUN_006510a0 */


void FUN_006510a0(longlong *param_1,longlong param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  
  if (*(char *)(DAT_020122b8 + 0x2c) == '\0') {
    *(undefined1 *)(DAT_020122b8 + 0x2c) = 1;
    FUN_00664ed0(DAT_020122b8,0x68);
  }
  uVar1 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
  *(undefined2 *)(param_2 + 8) = uVar1;
  pcVar2 = (code *)FUN_00411550(param_1,0xffc7);
  (*pcVar2)(param_1,param_2);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

