/* Ghidra address: 00462400 */
/* Ghidra symbol: FUN_00462400 */


uint FUN_00462400(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  byte local_1d;
  uint local_1c [3];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_00467310(&local_28,param_1);
  uVar3 = FUN_00415f70(local_28);
  iVar2 = (**(code **)PTR_DAT_02005690)(uVar3,0x400,0,local_1c);
  if (iVar2 == -0x7ffdfffb) {
    FUN_004168b0(&local_30,local_28);
    cVar1 = FUN_0043fc80(local_30,local_1c);
    if (cVar1 == '\0') {
      FUN_004168b0(&local_38,local_28);
      cVar1 = FUN_0043ff60(local_38,&local_1d);
      if (cVar1 == '\0') {
        FUN_00460800(0x80020005,*param_1,3);
      }
      else {
        local_1c[0] = (uint)local_1d;
      }
    }
  }
  else if (iVar2 != 0) {
    FUN_00460800(iVar2,*param_1,3);
  }
  FUN_00414560(&local_38,2);
  FUN_00414520(&local_28);
  return local_1c[0];
}

