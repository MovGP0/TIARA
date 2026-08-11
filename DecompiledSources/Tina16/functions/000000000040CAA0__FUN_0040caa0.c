/* Ghidra address: 0040caa0 */
/* Ghidra symbol: FUN_0040caa0 */


undefined8 FUN_0040caa0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_1c [12];
  
  if (*(int *)(param_1 + 2) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = thunk_FUN_041ac39f(*param_1,param_1[3],*(int *)(param_1 + 2),local_1c,0);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_03ce33a6();
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar2;
}

