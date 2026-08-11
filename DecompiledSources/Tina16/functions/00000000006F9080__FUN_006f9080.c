/* Ghidra address: 006f9080 */
/* Ghidra symbol: FUN_006f9080 */


void FUN_006f9080(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0xa4) & 0x8000) == 0) || (*(char *)(param_1 + 0x5ac) != '\0')) {
    uVar1 = FUN_0065b870();
    uVar1 = thunk_FUN_03e425c0(uVar1,*param_2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x5ac) = 1;
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x538),0xb04d,0,0);
  }
  return;
}

