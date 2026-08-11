/* Ghidra address: 01a527c0 */
/* Ghidra symbol: FUN_01a527c0 */


undefined1 FUN_01a527c0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_21;
  longlong *local_20;
  longlong local_18;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_18 = 0;
  *param_2 = 0xffffffff;
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_02005010,&LAB_01a529b4);
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_019d2608,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_019d6800(local_20,param_1 + 0x960,*(undefined4 *)(param_1 + 0x940));
  iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar1 == 1) {
    FUN_01c77470(*(undefined8 *)PTR_DAT_02004e40,1);
    uVar2 = FUN_019a4600();
    local_18 = FUN_0123b660(&DAT_0123a310,1,local_30,uVar2);
    FUN_0123b940(local_18);
    FUN_0123ba50(local_18,local_20[0x299]);
    FUN_0123bc40(local_18);
    *param_2 = *(undefined4 *)(*(longlong *)(local_18 + 0x600) + 0x1fa0);
    local_21 = 1;
  }
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_30);
  return local_21;
}

