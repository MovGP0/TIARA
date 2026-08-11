/* Ghidra address: 00465680 */
/* Ghidra symbol: FUN_00465680 */


undefined8 FUN_00465680(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  FUN_00467310(&local_18,param_1);
  uVar3 = FUN_00415f70(local_18);
  iVar2 = (**(code **)PTR_DAT_02005390)(uVar3,0x400,0,&local_10);
  if (iVar2 == -0x7ffdfffb) {
    FUN_004168b0(&local_20,local_18);
    cVar1 = FUN_00448810(local_20,&local_10,PTR_DAT_02004830);
    if (cVar1 == '\0') {
      FUN_00460800(0x80020005,*param_1,6);
    }
  }
  else if (iVar2 != 0) {
    FUN_00460800(iVar2,*param_1,6);
  }
  FUN_00414480(&local_20);
  FUN_00414520(&local_18);
  return local_10;
}

