/* Ghidra address: 009db590 */
/* Ghidra symbol: FUN_009db590 */


undefined4 FUN_009db590(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    plVar1 = (longlong *)FUN_009dab20(param_1);
    lVar2 = (**(code **)(*plVar1 + 0x2f8))(plVar1);
    if (*(longlong *)(param_1 + 0xc0) == lVar2) goto LAB_009db632;
  }
  plVar1 = (longlong *)FUN_009dab20(param_1);
  uVar3 = (**(code **)(*plVar1 + 0x2f8))(plVar1);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  FUN_009d3370(&local_18,uVar3,param_1,0);
  FUN_0041b890(param_1 + 0xb8,local_18,&DAT_009db6ac);
LAB_009db632:
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0xb8));
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

