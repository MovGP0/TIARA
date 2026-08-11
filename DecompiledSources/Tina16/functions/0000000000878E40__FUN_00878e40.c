/* Ghidra address: 00878e40 */
/* Ghidra symbol: FUN_00878e40 */


void FUN_00878e40(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res20;
  longlong local_20;
  
  local_20 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_00419430(&local_20,&DAT_0086e978);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((-1 < param_3) && (param_3 < iVar1)) {
    iVar1 = param_3;
  }
  if (0 < iVar1) {
    FUN_00877e90(&local_20,param_2,iVar1,1,local_res20);
    iVar1 = 0;
    if (*param_1 != 0) {
      iVar1 = (int)*(undefined8 *)(*param_1 + -8);
    }
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = (int)*(undefined8 *)(local_20 + -8);
    }
    FUN_00419260(param_1,&DAT_0086e978,1,(longlong)(iVar1 + iVar2));
    FUN_00409a70(local_20,*param_1 + (longlong)iVar1,(longlong)iVar2);
  }
  FUN_00419430(&local_20,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return;
}

