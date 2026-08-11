/* Ghidra address: 00c10e00 */
/* Ghidra symbol: FUN_00c10e00 */


void FUN_00c10e00(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_1 + 0x8c8);
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_1 + 0x8d0);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0071be60);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_1 + 0x8d8);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_1 + 0x8e0);
  }
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x8e8);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0x8f0);
  return;
}

