/* Ghidra address: 00801fb0 */
/* Ghidra symbol: FUN_00801fb0 */


void FUN_00801fb0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  
  if (param_3 != '\0') {
    cVar1 = FUN_00654850(param_2,*(undefined8 *)(param_1 + 0x4c8));
    if (cVar1 != '\0') {
      *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x78);
    }
  }
  cVar1 = FUN_00654850(param_2,*(undefined8 *)(param_1 + 0x4c0));
  if (cVar1 != '\0') {
    FUN_00801e40(param_1,0);
  }
  return;
}

