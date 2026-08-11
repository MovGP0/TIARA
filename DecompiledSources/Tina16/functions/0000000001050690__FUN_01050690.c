/* Ghidra address: 01050690 */
/* Ghidra symbol: FUN_01050690 */


void FUN_01050690(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 local_1c;
  
  lVar1 = (**(code **)*param_2)(param_2);
  if (0 < lVar1) {
    FUN_004b6dc0(param_2,0);
    FUN_004b84c0(param_2,PTR_DAT_02004fb0,4);
    FUN_004b84c0(param_2,&local_1c,4);
    FUN_00f62a50(*(undefined8 *)(param_1 + 0x980),local_1c);
    plVar2 = (longlong *)FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
    FUN_00f75650(plVar2,*(undefined4 *)PTR_DAT_02004fb0);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  return;
}

