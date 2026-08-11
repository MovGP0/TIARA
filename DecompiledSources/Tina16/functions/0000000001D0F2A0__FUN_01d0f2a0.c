/* Ghidra address: 01d0f2a0 */
/* Ghidra symbol: FUN_01d0f2a0 */


longlong * FUN_01d0f2a0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_00b8fd60(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8),6,0,1
                  );
      FUN_00416cd0(param_2,3,*param_2,local_20,&LAB_01d0f3a4);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_2 != 0) {
    uVar1 = 0;
    if (*param_2 != 0) {
      uVar1 = *(undefined4 *)(*param_2 + -4);
    }
    FUN_00416e20(param_2,uVar1,2);
  }
  FUN_00414480(&local_20);
  return param_2;
}

