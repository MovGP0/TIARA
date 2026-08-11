/* Ghidra address: 00413ed0 */
/* Ghidra symbol: FUN_00413ed0 */


void FUN_00413ed0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_c [4];
  
  if (DAT_020060a8 == '\0') {
    if (DAT_01db9054 == '\0') {
      MessageBoxA((HWND)0x0,&DAT_01dbc02c,s_Error_01dbbf3c,0);
    }
  }
  else {
    if ((DAT_020063b8 == -0x284e) && (DAT_020063c0 != 0)) {
      (*DAT_020063d8)(&DAT_020063b0);
    }
    uVar1 = thunk_FUN_0415ef6d(0xfffffff5);
    thunk_FUN_041ac39f(uVar1,&DAT_01dbc02c,0x25,local_c,0);
    uVar1 = thunk_FUN_0415ef6d(0xfffffff5);
    uVar2 = FUN_00415ab0(&LAB_00413fa0);
    thunk_FUN_041ac39f(uVar1,uVar2,2,local_c,0);
  }
  return;
}

