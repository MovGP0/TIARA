/* Ghidra address: 0198d440 */
/* Ghidra symbol: FUN_0198d440 */


undefined8 FUN_0198d440(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x98))
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x210),
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

