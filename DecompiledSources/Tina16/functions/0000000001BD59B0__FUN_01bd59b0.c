/* Ghidra address: 01bd59b0 */
/* Ghidra symbol: FUN_01bd59b0 */


void FUN_01bd59b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01bffd20(param_1);
  if (((char)param_1[0xa7] == '\0') || (*(char *)((longlong)param_1 + 0x4c3) != '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  (**(code **)(*param_1 + 0x388))(param_1,uVar1);
  return;
}

