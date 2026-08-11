/* Ghidra address: 01cfd660 */
/* Ghidra symbol: FUN_01cfd660 */


void FUN_01cfd660(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_01cfd450(param_1);
    }
    uVar1 = FUN_01cfd4d0(param_1,param_2);
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
  }
  return;
}

