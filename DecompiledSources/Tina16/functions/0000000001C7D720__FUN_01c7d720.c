/* Ghidra address: 01c7d720 */
/* Ghidra symbol: FUN_01c7d720 */


void FUN_01c7d720(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_017ff250(param_2);
      if (cVar1 != '\0') {
        uVar2 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x27a8));
        (**(code **)(*param_2 + 0x260))(param_2,uVar2,0);
      }
    }
  }
  return;
}

