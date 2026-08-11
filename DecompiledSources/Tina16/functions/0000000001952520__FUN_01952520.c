/* Ghidra address: 01952520 */
/* Ghidra symbol: FUN_01952520 */


void FUN_01952520(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x1f) != 0) {
    if (*(longlong *)(param_1 + 0x140) == 0) {
      uVar1 = FUN_0197c280(*(longlong *)(param_2 + 0x1f),param_1);
      *(undefined8 *)(param_1 + 0x140) = uVar1;
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_0197e4f0(*(longlong *)(param_1 + 0x140),param_1);
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_0197e550(*(longlong *)(param_1 + 0x140),*(undefined8 *)(param_2 + 0x2f),
                   *(undefined8 *)(param_2 + 0x37),*(undefined8 *)(param_2 + 0x3f));
    }
  }
  return;
}

