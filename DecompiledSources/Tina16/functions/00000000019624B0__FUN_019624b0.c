/* Ghidra address: 019624b0 */
/* Ghidra symbol: FUN_019624b0 */


void FUN_019624b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_0195b980(param_1);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x58))
              (*(longlong **)(param_1 + 0x308),*(undefined8 *)(param_1 + 0x338));
  }
  if ((*(ushort *)(param_1 + 0x38c) & 0x1000) != 0) {
    FUN_01962920(param_1);
  }
  FUN_01981670(&PTR_FUN_019185f0,*(undefined8 *)(param_1 + 0x330));
  FUN_0195cd00(param_1);
  return;
}

