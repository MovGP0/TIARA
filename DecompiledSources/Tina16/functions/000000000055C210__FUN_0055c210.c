/* Ghidra address: 0055c210 */
/* Ghidra symbol: FUN_0055c210 */


undefined8 FUN_0055c210(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0055c290(param_1);
  if (*(short *)(lVar1 + 1) == -1) {
    uVar2 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      FUN_0055c0d0(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  return uVar2;
}

