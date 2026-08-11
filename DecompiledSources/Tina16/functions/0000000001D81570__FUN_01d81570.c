/* Ghidra address: 01d81570 */
/* Ghidra symbol: FUN_01d81570 */


void FUN_01d81570(longlong param_1)

{
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0xa63) != '\0') {
    *(char *)(param_1 + 0xa63) = *(char *)(param_1 + 0xa63) + -1;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xf8))
              (*(longlong **)(param_1 + 0xa88),param_1 + 0xa63,&local_20,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa18),local_20);
  }
  return;
}

