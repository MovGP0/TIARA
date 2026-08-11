/* Ghidra address: 00c7b080 */
/* Ghidra symbol: FUN_00c7b080 */


void FUN_00c7b080(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 1) {
    uVar1 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),1);
    thunk_FUN_041b2403(uVar1,0xf5,0,0);
  }
  if (param_2 == 2) {
    uVar1 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),2);
    thunk_FUN_041b2403(uVar1,0xf5,0,0);
  }
  return;
}

