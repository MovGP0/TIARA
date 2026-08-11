/* Ghidra address: 010ae7c0 */
/* Ghidra symbol: FUN_010ae7c0 */


void FUN_010ae7c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar2,local_res10[0]);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20,1);
  uVar1 = FUN_0043fc00(local_20);
  *(undefined4 *)(param_1 + 8) = uVar1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,2);
  uVar1 = FUN_0043fc00(local_28);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,3);
  uVar1 = FUN_0043fc00(local_30);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,4);
  uVar3 = FUN_00448650(local_38,PTR_DAT_02004830);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_00410f20(plVar2);
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res10);
  return;
}

