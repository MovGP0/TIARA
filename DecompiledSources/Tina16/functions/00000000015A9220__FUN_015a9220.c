/* Ghidra address: 015a9220 */
/* Ghidra symbol: FUN_015a9220 */


undefined8 FUN_015a9220(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_015ab240(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_015a7bf8);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}

