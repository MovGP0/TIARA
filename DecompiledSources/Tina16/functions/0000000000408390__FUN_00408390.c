/* Ghidra address: 00408390 */
/* Ghidra symbol: FUN_00408390 */


void FUN_00408390(LPCSTR param_1,LPCSTR param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_2c [12];
  
  if (DAT_020060a8 == '\0') {
    MessageBoxA((HWND)0x0,param_1,param_2,0x2010);
  }
  else {
    uVar1 = thunk_FUN_0415ef6d(0xfffffff4);
    uVar2 = FUN_00414ce0(param_2);
    thunk_FUN_041ac39f(uVar1,param_2,uVar2,local_2c,0);
    uVar1 = thunk_FUN_0415ef6d(0xfffffff4);
    uVar2 = FUN_00414ce0(PTR_DAT_01db90d8);
    thunk_FUN_041ac39f(uVar1,PTR_DAT_01db90d8,uVar2,local_2c,0);
    uVar1 = thunk_FUN_0415ef6d(0xfffffff4);
    uVar2 = FUN_00414ce0(param_1);
    thunk_FUN_041ac39f(uVar1,param_1,uVar2,local_2c,0);
  }
  return;
}

