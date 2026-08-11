/* Ghidra address: 0040d350 */
/* Ghidra symbol: FUN_0040d350 */


int FUN_0040d350(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c [3];
  
  if ((*(short *)(param_1 + 1) == -0x284f) || (*(short *)(param_1 + 1) == -0x284d)) {
    iVar1 = thunk_FUN_0411366f(*param_1,param_2,*(undefined4 *)((longlong)param_1 + 0xc),local_1c,0)
    ;
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_03ce33a6();
      FUN_00409930(uVar2);
    }
    else if (local_1c[0] != *(int *)((longlong)param_1 + 0xc)) {
      FUN_00409930(100);
    }
  }
  else {
    FUN_00409930(0x67);
    local_1c[0] = 0;
  }
  return local_1c[0];
}

