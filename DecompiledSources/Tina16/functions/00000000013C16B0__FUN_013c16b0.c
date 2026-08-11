/* Ghidra address: 013c16b0 */
/* Ghidra symbol: FUN_013c16b0 */


void FUN_013c16b0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 8));
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_40,iVar4);
      FUN_00414b50(&local_48,*(undefined8 *)(param_1 + 0x10));
      while (cVar1 = FUN_013c10e0(&local_2c,&local_40,local_38), cVar1 != '\0') {
        FUN_013c0f20(local_2c,&local_40,local_38,local_48);
      }
      (**(code **)(*plVar3 + 0x78))(plVar3,local_40);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*param_2);
  *param_2 = plVar3;
  FUN_00414560(&local_48,3);
  return;
}

