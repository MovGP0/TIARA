/* Ghidra address: 00419be0 */
/* Ghidra symbol: FUN_00419be0 */


undefined8 FUN_00419be0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_222 [530];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    thunk_FUN_041b94f3(*(undefined8 *)(param_1 + 8),local_222,0x20a);
    uVar1 = FUN_0041b420(local_222,1);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
    }
  }
  return *(undefined8 *)(param_1 + 0x20);
}

