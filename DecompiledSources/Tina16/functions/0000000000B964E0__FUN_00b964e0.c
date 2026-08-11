/* Ghidra address: 00b964e0 */
/* Ghidra symbol: FUN_00b964e0 */


void FUN_00b964e0(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(*param_1,&DAT_00b965b4);
  if (iVar2 == 0) {
    FUN_00414480(param_1);
  }
  else {
    sVar1 = *(short *)*param_1;
    if (sVar1 == 0x5c) {
      FUN_00416e20(param_1,1,1);
    }
    if (*(short *)*param_1 == 0x2e) {
      FUN_00416e20(param_1,1,4);
    }
    iVar2 = FUN_0044f900(&DAT_00b965b4,*param_1);
    if (iVar2 == 0) {
      FUN_00414480(param_1);
    }
    else {
      FUN_00416e20(param_1,1,iVar2);
      FUN_00416ba0(param_1,L"...\\",*param_1);
    }
    if (sVar1 == 0x5c) {
      FUN_00416ba0(param_1,&DAT_00b965b4,*param_1);
    }
  }
  return;
}

