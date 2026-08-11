/* Ghidra address: 00705ed0 */
/* Ghidra symbol: FUN_00705ed0 */


void FUN_00705ed0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((char)param_1[0xb0] == '\x01') {
    FUN_007058b0(param_1,local_20);
    uVar3 = FUN_00416740(local_20[0]);
    uVar3 = FUN_00442580(*(undefined8 *)(param_2 + 0x10),uVar3,*(int *)(param_2 + 8) + -1);
    iVar1 = FUN_00414d00(uVar3);
    *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  }
  else if ((char)param_1[0xb0] == '\x02') {
    iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar1 != -1) {
      uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],&local_28,uVar2);
      uVar3 = FUN_00416740(local_28);
      uVar3 = FUN_00442580(*(undefined8 *)(param_2 + 0x10),uVar3,*(int *)(param_2 + 8) + -1);
      iVar1 = FUN_00414d00(uVar3);
      *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
    }
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  FUN_00414560(&local_28,2);
  return;
}

