/* Ghidra address: 01996900 */
/* Ghidra symbol: FUN_01996900 */


void FUN_01996900(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x28) != 0)) &&
       (*(longlong **)(param_1 + 0x28) != param_2)) {
      FUN_01996460(*(undefined8 *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x28),0);
      FUN_00b95360(*(undefined8 *)(param_1 + 0x60));
    }
  }
  return;
}

