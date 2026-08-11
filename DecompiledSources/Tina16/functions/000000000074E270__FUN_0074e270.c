/* Ghidra address: 0074e270 */
/* Ghidra symbol: FUN_0074e270 */


void FUN_0074e270(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043e210(*(undefined8 *)(param_1 + 0x80),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x80,param_2);
    FUN_00442660(*(longlong *)(param_1 + 0xa0) + 0x130,*(undefined8 *)(param_1 + 0x80),0xff);
    FUN_0074e130(param_1,1);
  }
  return;
}

