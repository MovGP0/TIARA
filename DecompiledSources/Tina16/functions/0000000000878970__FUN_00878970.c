/* Ghidra address: 00878970 */
/* Ghidra symbol: FUN_00878970 */


void FUN_00878970(undefined8 param_1,longlong param_2,int param_3,int param_4,ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b910(param_5);
  FUN_00419430(&local_10,&DAT_0086e978);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  iVar1 = (iVar1 - param_4) + 1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((-1 < param_3) && (param_3 < iVar1)) {
    iVar1 = param_3;
  }
  if (0 < iVar1) {
    uVar2 = param_5;
    FUN_00877e90(&local_10,param_2,iVar1,param_4,param_5);
    FUN_0086e8c0(&LAB_0086e608,param_1,local_10,0xffffffff,uVar2 & 0xffffffff00000000);
  }
  FUN_00419430(&local_10,&DAT_0086e978);
  FUN_0041b800(&param_5);
  return;
}

