/* Ghidra address: 0146ff20 */
/* Ghidra symbol: FUN_0146ff20 */


void FUN_0146ff20(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0146fab0(param_1);
  FUN_014708e0(param_1);
  uVar1 = FUN_013b9a60(&DAT_013b8648,1,0,0,0);
  *(undefined8 *)(param_1 + 0x800) = uVar1;
  *(undefined1 *)(param_1 + 0x80a) = 0;
  *(undefined1 *)(param_1 + 0x808) = 0;
  *(undefined1 *)(param_1 + 0x809) = 0;
  FUN_00414ad0(param_1 + 0x7f8,&DAT_0146ffd0);
  *(undefined4 *)(param_1 + 0x80c) = 0;
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x7c0),1);
  FUN_00c08ff0(*(undefined8 *)(param_1 + 0x738),4);
  FUN_00c08ff0(*(undefined8 *)(param_1 + 0x750),4);
  return;
}

