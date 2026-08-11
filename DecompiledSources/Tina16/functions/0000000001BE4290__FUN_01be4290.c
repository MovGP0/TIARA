/* Ghidra address: 01be4290 */
/* Ghidra symbol: FUN_01be4290 */


void FUN_01be4290(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1[0xb5] != param_2) && (param_1[0xb5] = param_2, param_2 != 0)) {
    *(longlong **)(param_2 + 0x630) = param_1;
    (**(code **)(*param_1 + 0x330))(param_1,*(undefined1 *)(param_2 + 0x4f8));
    lVar1 = param_1[0xb5];
    if (*(longlong *)(lVar1 + 0x4d8) != 0) {
      param_1[0x9b] = *(longlong *)(lVar1 + 0x4d8);
      param_1[0x9c] = *(longlong *)(lVar1 + 0x4e0);
    }
    *(undefined1 *)((longlong)param_1 + 0x579) = *(undefined1 *)(param_1[0xb5] + 0x579);
  }
  return;
}

