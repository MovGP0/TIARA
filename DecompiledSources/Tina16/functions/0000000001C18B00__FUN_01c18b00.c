/* Ghidra address: 01c18b00 */
/* Ghidra symbol: FUN_01c18b00 */


void FUN_01c18b00(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_20;
  
  local_20 = *param_2;
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     (*(char *)((longlong)param_1 + 0x366) == '\x02')) {
    cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_01c15bf0();
      if (cVar1 != '\0') {
        local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20 + 1);
      }
    }
  }
  FUN_01c04950(param_1,&local_20);
  return;
}

