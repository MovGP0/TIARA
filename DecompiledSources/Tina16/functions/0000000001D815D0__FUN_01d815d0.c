/* Ghidra address: 01d815d0 */
/* Ghidra symbol: FUN_01d815d0 */


void FUN_01d815d0(longlong param_1)

{
  undefined8 local_20;
  
  if ((int)(uint)*(byte *)(param_1 + 0xa63) < (int)(*(byte *)(param_1 + 0xa62) - 1)) {
    *(char *)(param_1 + 0xa63) = *(char *)(param_1 + 0xa63) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xf8))
              (*(longlong **)(param_1 + 0xa88),param_1 + 0xa63,&local_20,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa18),local_20);
  }
  return;
}

