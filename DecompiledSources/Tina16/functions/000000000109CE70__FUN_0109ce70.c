/* Ghidra address: 0109ce70 */
/* Ghidra symbol: FUN_0109ce70 */


void FUN_0109ce70(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_01b21610(local_res10[0]);
  if (iVar2 < 50000) {
    FUN_0109ccf0(param_1,*(undefined8 *)(param_1 + 0x980),local_res10[0]);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x980) + 0x4e8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_res10[0]);
  }
  FUN_00441a10(local_20,local_res10[0]);
  uVar3 = FUN_01099960(*(undefined8 *)(param_1 + 0x1658),local_20[0]);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x980),uVar3);
  FUN_0109d420(param_1);
  if (param_3 != '\0') {
    FUN_0109d4a0(param_1,local_res10[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

