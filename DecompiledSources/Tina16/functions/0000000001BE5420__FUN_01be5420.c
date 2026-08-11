/* Ghidra address: 01be5420 */
/* Ghidra symbol: FUN_01be5420 */


void FUN_01be5420(longlong param_1)

{
  FUN_01bd5cf0(param_1);
  if (*(char *)(param_1 + 0x618) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110)
              );
  }
  return;
}

