/* Ghidra address: 0083ded0 */
/* Ghidra symbol: FUN_0083ded0 */


void FUN_0083ded0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x508);
  if (*(code **)(lVar1 + 1000) != (code *)0x0) {
    (**(code **)(lVar1 + 1000))
              (*(undefined8 *)(lVar1 + 0x3f0),lVar1,*(undefined8 *)(param_1 + 0x48),
               *(undefined2 *)(param_1 + 0x50));
  }
  return;
}

