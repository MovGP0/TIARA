/* Ghidra address: 01be7120 */
/* Ghidra symbol: FUN_01be7120 */


void FUN_01be7120(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_01be4fa0(param_1,param_2,param_3);
  if (((*(ushort *)(param_1 + 0x34) & 8) == 0) && ((char)param_3 == '\x01')) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_0063d930);
    if (cVar1 != '\0') {
      FUN_0064dbe0(param_2,0);
    }
  }
  return;
}

