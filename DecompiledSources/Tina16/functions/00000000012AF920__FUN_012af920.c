/* Ghidra address: 012af920 */
/* Ghidra symbol: FUN_012af920 */


void FUN_012af920(longlong param_1)

{
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0xd93) != '\0') {
    *(char *)(param_1 + 0xd93) = *(char *)(param_1 + 0xd93) + -1;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
              (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,&local_20,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd28),local_20);
  }
  return;
}

