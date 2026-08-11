/* Ghidra address: 00bae050 */
/* Ghidra symbol: FUN_00bae050 */


longlong * FUN_00bae050(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = (longlong *)0x0;
  iVar2 = 0;
  FUN_0041b800(param_2);
  while (*param_2 == 0) {
    iVar1 = FUN_00bade20(param_1);
    if (iVar1 <= iVar2) break;
    FUN_00badd50(param_1,&local_28,iVar2);
    (**(code **)(*local_28 + 0x40))(local_28,&local_20);
    iVar1 = FUN_00416db0(local_20,param_3);
    if (iVar1 == 0) {
      FUN_00badd50(param_1,param_2,iVar2);
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  FUN_0041b800(&local_28);
  FUN_00414480(&local_20);
  return param_2;
}

