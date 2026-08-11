/* Ghidra address: 00f847d0 */
/* Ghidra symbol: FUN_00f847d0 */


void FUN_00f847d0(longlong param_1)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0xd20) = *(int *)(param_1 + 0xd20) + 1;
  *(longlong *)(param_1 + 0xd48) =
       (longlong)*(int *)(param_1 + 0xd20) * *(longlong *)(param_1 + 0x6c0);
  if (*(char *)(param_1 + 0x6b2) == '\0') {
    *(longlong *)(param_1 + 0xcf8) =
         *(longlong *)(param_1 + 0xd48) + *(longlong *)(param_1 + 0x6c8) * -2;
  }
  else {
    *(undefined8 *)(param_1 + 0xcf8) = 0xffffffffffffffff;
  }
  if ((((*(char *)(param_1 + 0xd40) == '\x01') && (*(char *)(param_1 + 0xd5a) != '\0')) &&
      (*(char *)(param_1 + 0xd5d) == '\0')) && (*(char *)(param_1 + 0xd5e) == '\0')) {
    uVar1 = FUN_0065b870();
    thunk_FUN_0413e052(uVar1,0x123c,0,0);
  }
  return;
}

