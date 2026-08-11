/* Ghidra address: 017dcac0 */
/* Ghidra symbol: FUN_017dcac0 */


undefined8 FUN_017dcac0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0));
  }
  else if (*(char *)(param_1 + 0x18) == '\x02') {
    FUN_017dcb20(param_1,param_3,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

