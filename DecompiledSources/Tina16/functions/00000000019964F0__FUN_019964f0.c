/* Ghidra address: 019964f0 */
/* Ghidra symbol: FUN_019964f0 */


void FUN_019964f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x28) != 0)) &&
       (*(longlong **)(param_1 + 0x28) != param_2)) {
      FUN_01996460(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x28),1);
      FUN_00b95360(*(undefined8 *)(param_1 + 0x50));
    }
  }
  return;
}

