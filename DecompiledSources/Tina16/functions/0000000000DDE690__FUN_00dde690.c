/* Ghidra address: 00dde690 */
/* Ghidra symbol: FUN_00dde690 */


void FUN_00dde690(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x4f0) & 0x400) == 0) {
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x468),0xfffffffc,*(undefined8 *)(param_1 + 0x460))
    ;
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x30))(*(longlong **)(param_1 + 0x4b0),1);
    }
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  else {
    FUN_006557d0(param_1);
  }
  return;
}

