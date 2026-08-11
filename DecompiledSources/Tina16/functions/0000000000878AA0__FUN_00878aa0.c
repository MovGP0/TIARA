/* Ghidra address: 00878aa0 */
/* Ghidra symbol: FUN_00878aa0 */


int FUN_00878aa0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00419260(&local_10,&DAT_0086e978,1,(longlong)param_3);
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1,&local_10,0,param_3);
  if (0 < iVar1) {
    FUN_00409a70(local_10,param_2,(longlong)iVar1);
  }
  FUN_00419430(&local_10,&DAT_0086e978);
  return iVar1;
}

