/* Ghidra address: 01cc6a70 */
/* Ghidra symbol: FUN_01cc6a70 */


longlong * FUN_01cc6a70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if ((*(longlong *)PTR_DAT_02004e40 != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x458), lVar2 != 0)) {
    FUN_004167d0(local_30,lVar2);
    lVar2 = FUN_01c98770(*(undefined8 *)PTR_DAT_02004e40,local_30[0]);
    if (lVar2 != 0) {
      uVar3 = FUN_019ad800(lVar2);
      (**(code **)(*plVar1 + 0x10))(plVar1,uVar3);
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return plVar1;
}

