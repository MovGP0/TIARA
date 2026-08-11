/* Ghidra address: 00ac2870 */
/* Ghidra symbol: FUN_00ac2870 */


void FUN_00ac2870(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0xc4) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
  }
  return;
}

