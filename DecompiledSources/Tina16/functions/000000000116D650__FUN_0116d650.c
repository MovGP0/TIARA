/* Ghidra address: 0116d650 */
/* Ghidra symbol: FUN_0116d650 */


int FUN_0116d650(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = 1;
  iVar3 = 1;
  local_34 = 200;
  do {
    FUN_004169a0(local_30,&DAT_01f286a8 + (longlong)iVar2 * 6);
    iVar1 = FUN_004170c0(local_30[0],*param_1,1);
    if ((param_2 < iVar1) && (iVar1 < local_34)) {
      local_34 = iVar1;
      iVar3 = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  if (local_34 == 200) {
    local_34 = 0;
  }
  else {
    FUN_00415020(&DAT_0203adc8,&DAT_01f286a8 + (longlong)iVar3 * 6,5);
  }
  FUN_00414480(local_30);
  return local_34;
}

