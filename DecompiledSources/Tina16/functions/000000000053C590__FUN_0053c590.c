/* Ghidra address: 0053c590 */
/* Ghidra symbol: FUN_0053c590 */


undefined8 FUN_0053c590(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong local_20;
  
  local_20 = 0;
  FUN_00414480(param_1);
  if (*param_2 != 0) {
    iVar2 = *param_2 + 1;
    FUN_00419260(&local_20,&DAT_0053c550,1,iVar2);
    FUN_00409a70(param_2,local_20,iVar2);
    lVar1 = 0;
    if (local_20 != 0) {
      lVar1 = *(longlong *)(local_20 + -8);
    }
    FUN_0041dd60(param_1,local_20,lVar1 + -1);
  }
  FUN_00419430(&local_20,&DAT_0053c550);
  return param_1;
}

