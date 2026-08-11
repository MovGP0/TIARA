/* Ghidra address: 00552fd0 */
/* Ghidra symbol: FUN_00552fd0 */


undefined8 FUN_00552fd0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (bVar1 < 0x10) {
    uVar2 = CONCAT71(1,((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar1 & 0x1f) &
                       0x130U) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

