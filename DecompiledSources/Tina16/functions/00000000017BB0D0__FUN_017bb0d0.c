/* Ghidra address: 017bb0d0 */
/* Ghidra symbol: FUN_017bb0d0 */


void FUN_017bb0d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_017bae90(param_2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
      if (cVar1 != '\0') {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),param_2);
      }
    }
  }
  return;
}

