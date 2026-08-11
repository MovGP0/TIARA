/* Ghidra address: 0040ca40 */
/* Ghidra symbol: FUN_0040ca40 */


undefined8 FUN_0040ca40(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  iVar1 = thunk_FUN_0411366f(*param_1,param_1[3],*(undefined4 *)((longlong)param_1 + 0xc),
                             (longlong)param_1 + 0x14,0);
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_03ce33a6();
    if ((int)uVar2 == 0x6d) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

