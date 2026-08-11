/* Ghidra address: 0138d650 */
/* Ghidra symbol: FUN_0138d650 */


void FUN_0138d650(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xe91) != '\x02') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                      (*(longlong **)(param_1 + 0xe88),param_1 + 0xe91,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xe10),uVar1);
  }
  return;
}

