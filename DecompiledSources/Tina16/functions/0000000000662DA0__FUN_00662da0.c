/* Ghidra address: 00662da0 */
/* Ghidra symbol: FUN_00662da0 */


void FUN_00662da0(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_00662d50(auStack_38,*(longlong *)(param_2 + 0x10));
    }
    if (*(longlong *)(param_2 + 0x30) == 0) {
      if (*(longlong *)(param_2 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10) = *(undefined8 *)(param_2 + 0x18);
      }
    }
    else {
      *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if (param_2 == *(longlong *)(param_1 + 0x90)) {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    FUN_00410f20(param_2);
  }
  return;
}

