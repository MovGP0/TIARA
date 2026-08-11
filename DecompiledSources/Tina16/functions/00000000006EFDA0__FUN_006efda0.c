/* Ghidra address: 006efda0 */
/* Ghidra symbol: FUN_006efda0 */


void FUN_006efda0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_006efc90();
    thunk_FUN_041b2403(uVar1,0x102f,0,0);
  }
  else {
    uVar1 = FUN_006efc90();
    thunk_FUN_041b2403(uVar1,0x102f,(longlong)param_2,1);
  }
  return;
}

