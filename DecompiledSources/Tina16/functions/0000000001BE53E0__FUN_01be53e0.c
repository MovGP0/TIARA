/* Ghidra address: 01be53e0 */
/* Ghidra symbol: FUN_01be53e0 */


void FUN_01be53e0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x618) != param_2) &&
     (*(char *)(param_1 + 0x618) = param_2, param_2 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110)
              );
  }
  return;
}

