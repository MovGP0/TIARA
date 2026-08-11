/* Ghidra address: 019db260 */
/* Ghidra symbol: FUN_019db260 */


void FUN_019db260(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x858);
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_019d7b38,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_019d8070(plVar3,param_2);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    FUN_019d8220(plVar3,&local_20,param_2);
    FUN_01a513b0(uVar1,local_res18[0],local_20);
  }
  FUN_00410f20(plVar3);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return;
}

