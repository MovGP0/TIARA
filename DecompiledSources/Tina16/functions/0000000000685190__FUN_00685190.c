/* Ghidra address: 00685190 */
/* Ghidra symbol: FUN_00685190 */


void FUN_00685190(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
  if (iVar1 != -1) {
    uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],local_20,uVar2);
    uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    uVar3 = (**(code **)(*(longlong *)param_1[0x9e] + 0x30))((longlong *)param_1[0x9e],uVar2);
    (**(code **)(*param_2 + 0x270))(param_2,local_20[0],uVar3);
  }
  FUN_00414480(local_20);
  return;
}

