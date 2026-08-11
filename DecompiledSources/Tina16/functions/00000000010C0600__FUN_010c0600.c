/* Ghidra address: 010c0600 */
/* Ghidra symbol: FUN_010c0600 */


longlong * FUN_010c0600(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar2,0);
  iVar1 = FUN_004170c0(&LAB_010c0754,*param_1,1);
  if (0 < iVar1) {
    while (0 < iVar1) {
      FUN_00416dc0(local_20,*param_1,1,iVar1 + -1);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_20[0]);
      FUN_00416e20(param_1,1,iVar1);
      iVar1 = FUN_004170c0(&LAB_010c0754,*param_1,1);
    }
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,*param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30,0);
  FUN_00414ad0(param_1,local_30[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return plVar2;
}

