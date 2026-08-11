/* Ghidra address: 01a84900 */
/* Ghidra symbol: FUN_01a84900 */


void FUN_01a84900(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,int param_5,
                 int param_6)

{
  longlong *plVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  FUN_01aee850(&local_20,0x41a,*(undefined4 *)(param_1 + 0x6b8),
               *(int *)(*(longlong *)(param_1 + 0xa70) + 0x90) +
               *(int *)(*(longlong *)(param_1 + 0xa80) + 0x90) + param_5,
               *(int *)(*(longlong *)(param_1 + 0xa80) + 0x94) + param_6);
  FUN_01aed640(*(undefined8 *)PTR_DAT_020041a8,local_20);
  if ((param_4 & 4) != 0) {
    plVar1 = (longlong *)FUN_01ae9420(*(undefined8 *)(param_1 + 0x798),0);
    FUN_00409da0(&local_30,0);
    FUN_00441640(&local_28,local_30);
    FUN_00416ad0(&local_28,L"/diagram.ini");
    (**(code **)(*plVar1 + 0x100))(plVar1,local_28);
    FUN_00410f20(plVar1);
  }
  FUN_00414560(&local_30,3);
  return;
}

