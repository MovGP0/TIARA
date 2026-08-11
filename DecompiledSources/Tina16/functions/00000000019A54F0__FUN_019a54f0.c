/* Ghidra address: 019a54f0 */
/* Ghidra symbol: FUN_019a54f0 */


void FUN_019a54f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x05') {
      *(undefined1 *)(param_2 + 1) = 0;
      (**(code **)(*param_2 + 0xa0))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210))
      ;
    }
  }
  return;
}

