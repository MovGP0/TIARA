/* Ghidra address: 017bd8c0 */
/* Ghidra symbol: FUN_017bd8c0 */


bool FUN_017bd8c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  bool local_31;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_31 = false;
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x288))(param_1,local_20);
    plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_017bc508,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0064de00(plVar3[0xda],local_20[0]);
    iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
    local_31 = iVar2 == 1;
    if (local_31) {
      FUN_0064dd90(plVar3[0xda],local_30);
      FUN_017bf050(param_1,param_2,local_30[0]);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return local_31;
}

