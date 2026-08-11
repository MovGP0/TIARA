/* Ghidra address: 004b4150 */
/* Ghidra symbol: FUN_004b4150 */


int FUN_004b4150(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_20,local_24);
      iVar2 = (**(code **)(*param_1 + 0x70))(param_1,local_20,param_2);
      if (iVar2 == 0) goto LAB_004b41d5;
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_24 = -1;
LAB_004b41d5:
  FUN_00414480(&local_20);
  return local_24;
}

