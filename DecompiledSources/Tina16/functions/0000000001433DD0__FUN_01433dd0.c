/* Ghidra address: 01433dd0 */
/* Ghidra symbol: FUN_01433dd0 */


undefined8 FUN_01433dd0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x70)) || (*(uint *)(param_1 + 0x74) < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

