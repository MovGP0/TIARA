/* Ghidra address: 01d80d40 */
/* Ghidra symbol: FUN_01d80d40 */


void FUN_01d80d40(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xf8))
            (*(longlong **)(param_1 + 0xa88),param_1 + 0xa63,local_20,1);
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xa00));
  *(undefined8 *)(param_1 + 0xa80) = uVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0xa00),*(undefined8 *)(param_1 + 0xa80));
  return;
}

