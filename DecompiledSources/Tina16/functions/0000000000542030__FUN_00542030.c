/* Ghidra address: 00542030 */
/* Ghidra symbol: FUN_00542030 */


undefined8 FUN_00542030(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (*(ulonglong *)(param_2 + 0x40) < *(ulonglong *)(param_3 + 0x40)) {
    uVar1 = 0xffffffff;
  }
  else if (*(ulonglong *)(param_3 + 0x40) < *(ulonglong *)(param_2 + 0x40)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

