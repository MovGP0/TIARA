/* Ghidra address: 01be14e0 */
/* Ghidra symbol: FUN_01be14e0 */


void FUN_01be14e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((char)param_3 == '\0') && (*(int *)(param_1 + 0x10) == 1)) {
    uVar1 = FUN_00427ab0();
    DAT_02111458 = thunk_FUN_0417e981(4,FUN_01be1360,0,uVar1);
  }
  else if (((char)param_3 == '\x02') && ((*(int *)(param_1 + 0x10) == 0 && (DAT_02111458 != 0)))) {
    thunk_FUN_041c90ed(DAT_02111458);
    DAT_02111458 = 0;
  }
  FUN_004af600(param_1,param_2,param_3);
  return;
}

