/* Ghidra address: 00aacb00 */
/* Ghidra symbol: FUN_00aacb00 */


void FUN_00aacb00(longlong param_1,int param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    uVar1 = FUN_00610ca0(&PTR_FUN_00a8da78,1);
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
  }
  if (9999 < param_2) {
    param_2 = 10000;
  }
  if (-1 < param_2 + -1) {
    do {
      uVar1 = *(undefined8 *)(param_1 + 0xd8);
      uVar2 = FUN_00ac4a80(&DAT_00a8d778,1,param_3,param_5,param_4);
      FUN_004ae7e0(uVar1,uVar2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

