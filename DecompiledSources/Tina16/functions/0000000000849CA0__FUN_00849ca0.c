/* Ghidra address: 00849ca0 */
/* Ghidra symbol: FUN_00849ca0 */


char FUN_00849ca0(longlong *param_1,undefined2 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = *param_3;
  cVar1 = FUN_0064efd0(param_1,param_2,local_20);
  if (cVar1 == '\0') {
    if (*(int *)((longlong)param_1 + 0x4ac) < (int)param_1[0x9c] + -1) {
      FUN_00848a30(param_1,*(int *)((longlong)param_1 + 0x4ac) + 1);
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db2d0(uVar2);
    }
    cVar1 = '\x01';
  }
  return cVar1;
}

