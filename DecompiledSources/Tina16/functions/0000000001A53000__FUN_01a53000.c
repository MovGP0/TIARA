/* Ghidra address: 01a53000 */
/* Ghidra symbol: FUN_01a53000 */


void FUN_01a53000(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*param_3 == 0xd) {
    lVar1 = *(longlong *)(param_1 + 0x718);
    FUN_0064dd90(lVar1,local_20);
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x4f0) + 0xb0))
                      (*(longlong **)(lVar1 + 0x4f0),local_20[0]);
    if (iVar2 == -1) {
      FUN_0064dd90(lVar1,&local_28);
      (**(code **)(**(longlong **)(lVar1 + 0x4f0) + 0x78))(*(longlong **)(lVar1 + 0x4f0),local_28);
    }
    FUN_01a47dd0(param_1,param_2,1);
    *param_3 = 0;
  }
  FUN_00414560(&local_28,2);
  return;
}

