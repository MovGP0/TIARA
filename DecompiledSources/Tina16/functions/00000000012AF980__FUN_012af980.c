/* Ghidra address: 012af980 */
/* Ghidra symbol: FUN_012af980 */


void FUN_012af980(longlong param_1)

{
  undefined8 local_20;
  
  if ((int)(uint)*(byte *)(param_1 + 0xd93) < (int)(*(byte *)(param_1 + 0xd92) - 1)) {
    *(char *)(param_1 + 0xd93) = *(char *)(param_1 + 0xd93) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
              (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,&local_20,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd28),local_20);
  }
  return;
}

