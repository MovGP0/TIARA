/* Ghidra address: 007f9730 */
/* Ghidra symbol: FUN_007f9730 */


undefined8 FUN_007f9730(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_2c [3];
  
  thunk_FUN_039b6ab1(param_1,local_2c);
  uVar2 = 0xffffffff;
  if (*param_2 == param_1) {
    iVar1 = thunk_FUN_0417a31e();
    uVar2 = 0xffffffff;
    if (iVar1 == local_2c[0]) {
      uVar2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  return uVar2;
}

