/* Ghidra address: 0046b6c0 */
/* Ghidra symbol: FUN_0046b6c0 */


void FUN_0046b6c0(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  uint local_14;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  FUN_00467310(&local_10,param_1);
  uVar3 = FUN_00415f70(local_10);
  iVar2 = (**(code **)PTR_DAT_02005690)(uVar3,0x400,0,&local_14);
  if (iVar2 == -0x7ffdfffb) {
    FUN_004168b0(&local_20,local_10);
    cVar1 = FUN_0043fc80(local_20,&local_14);
    if (cVar1 == '\0') {
      cVar1 = FUN_00463f70(param_1);
      FUN_00468820(param_1,cVar1 == '\0');
    }
    else {
      FUN_00468530(param_1,~local_14,0xfffffffffffffffc);
    }
  }
  else if (iVar2 == 0) {
    FUN_00468530(param_1,~local_14,0xfffffffffffffffc);
  }
  else {
    FUN_00460800(iVar2,*param_1,3);
  }
  FUN_00414480(&local_20);
  FUN_00414520(&local_10);
  return;
}

