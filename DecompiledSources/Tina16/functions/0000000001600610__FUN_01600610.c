/* Ghidra address: 01600610 */
/* Ghidra symbol: FUN_01600610 */


void FUN_01600610(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 local_1c;
  
  lVar1 = (**(code **)*param_2)(param_2);
  if (0 < lVar1) {
    FUN_004b6dc0(param_2,0);
    FUN_004b84c0(param_2,PTR_DAT_02004fb0,4);
    FUN_004b84c0(param_2,&local_1c,4);
    FUN_00f62a50(*(undefined8 *)(param_1 + 0x468),local_1c);
    uVar2 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x468));
    FUN_00f75650(uVar2,*(undefined4 *)PTR_DAT_02004fb0);
    plVar3 = (longlong *)FUN_00f62a60(*(undefined8 *)(param_1 + 0x468));
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  return;
}

