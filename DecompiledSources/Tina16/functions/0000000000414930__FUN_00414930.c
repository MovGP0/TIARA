/* Ghidra address: 00414930 */
/* Ghidra symbol: FUN_00414930 */


void FUN_00414930(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_1028 [4032];
  undefined1 local_68;
  
  local_68 = 0;
  if (param_3 < 1) {
    FUN_00414520(param_1);
  }
  else {
    iVar2 = param_3 + 1;
    if ((iVar2 < 0x7ff) &&
       (iVar1 = FUN_00414710(local_1028,0x7ff,param_2,param_3,param_4), 0 < iVar1)) {
      FUN_004147a0(param_1,local_1028,iVar1);
      return;
    }
    FUN_00416660(param_1,iVar2);
    iVar2 = FUN_00414710(*param_1,iVar2,param_2,param_3,param_4);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_00416660(param_1,iVar2);
  }
  return;
}

