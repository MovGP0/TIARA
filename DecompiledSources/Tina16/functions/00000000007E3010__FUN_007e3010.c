/* Ghidra address: 007e3010 */
/* Ghidra symbol: FUN_007e3010 */


void FUN_007e3010(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar2 = FUN_007e2ef0(*(longlong *)(param_1 + 200));
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    iVar2 = FUN_007e2fe0(param_1);
    if (param_2 != iVar2) {
      uVar1 = *(undefined8 *)(param_1 + 200);
      FUN_007e34f0(uVar1,param_1);
      FUN_007e31e0(uVar1,param_2,param_1);
    }
  }
  return;
}

