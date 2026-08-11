/* Ghidra address: 006eadd0 */
/* Ghidra symbol: FUN_006eadd0 */


void FUN_006eadd0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != *(int *)(param_1 + 0x58c)) || ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0)) {
    if (param_2 < 0x65) {
      iVar1 = FUN_0040c770((double)param_2 * 0.63 + 1.0);
    }
    else {
      iVar1 = FUN_0040c770((double)param_2 * 0.64);
    }
    if ((1 < iVar1) && (iVar1 < 0x1000)) {
      *(int *)(param_1 + 0x58c) = param_2;
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x4e1,(longlong)iVar1,0x40);
    }
  }
  return;
}

