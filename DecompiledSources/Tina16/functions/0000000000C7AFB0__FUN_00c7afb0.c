/* Ghidra address: 00c7afb0 */
/* Ghidra symbol: FUN_00c7afb0 */


undefined8 FUN_00c7afb0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_218 [512];
  
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x298),0x467,0,
                             *(undefined8 *)(param_1 + 0x3a0));
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    thunk_FUN_0398fb79(*(longlong *)(param_1 + 0x3a0));
  }
  uVar2 = thunk_FUN_04183578(iVar1);
  *(undefined8 *)(param_1 + 0x3a0) = uVar2;
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x298),0x467,(longlong)iVar1,
                     *(undefined8 *)(param_1 + 0x3a0));
  thunk_FUN_0413df99(*(undefined8 *)(param_1 + 0x3a0),local_218);
  return *(undefined8 *)(param_1 + 0x3a0);
}

