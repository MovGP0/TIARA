/* Ghidra address: 007048e0 */
/* Ghidra symbol: FUN_007048e0 */


void FUN_007048e0(longlong *param_1)

{
  char cVar1;
  undefined1 local_28 [16];
  
  FUN_0065a2f0(param_1);
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (*PTR_DAT_02003210 != '\0')) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_28);
    if (param_1[0xa9] != 0) {
      thunk_FUN_03a2fc9d(param_1[0xa9],local_28,0);
    }
    if (param_1[0x9f] != 0) {
      thunk_FUN_03a2fc9d(param_1[0x9f],local_28,0);
    }
  }
  return;
}

