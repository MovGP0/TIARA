/* Ghidra address: 01c06940 */
/* Ghidra symbol: FUN_01c06940 */


void FUN_01c06940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 800);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x70) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x108))
                      (*(longlong **)(lVar1 + 0x70),*(longlong *)(param_2 + 0x10) + 0x40);
    if (cVar2 == '\0') {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

