/* Ghidra address: 01876cf0 */
/* Ghidra symbol: FUN_01876cf0 */


undefined8 FUN_01876cf0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    uVar1 = FUN_004aeac0();
  }
  return uVar1;
}

