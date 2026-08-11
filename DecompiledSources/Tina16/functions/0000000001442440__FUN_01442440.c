/* Ghidra address: 01442440 */
/* Ghidra symbol: FUN_01442440 */


undefined4 FUN_01442440(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_2c = param_4;
  if (*(longlong *)(param_1[0x35] + 0x68) != 0) {
    iVar1 = (**(code **)(*param_2 + 0xb0))
                      (param_2,*(undefined8 *)(*(longlong *)(param_1[0x35] + 0x68) + 0x10));
    if (-1 < iVar1) {
      plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b5390(param_2,&local_20,iVar1);
      FUN_004b4b10(plVar2,local_20);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,param_3 + -1);
      iVar1 = FUN_00c411f0(*(undefined8 *)(param_1[0x35] + 0x68),local_28);
      if (-1 < iVar1) {
        local_2c = (**(code **)(*param_1 + 0x210))(param_1,iVar1);
      }
      FUN_00410f20(plVar2);
    }
  }
  FUN_00414560(&local_28,2);
  return local_2c;
}

