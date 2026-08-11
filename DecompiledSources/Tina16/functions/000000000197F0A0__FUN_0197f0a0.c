/* Ghidra address: 0197f0a0 */
/* Ghidra symbol: FUN_0197f0a0 */


void FUN_0197f0a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00410ae0(param_2,local_20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_20[0]);
  if (iVar1 != -1) {
    uVar3 = FUN_0197eaa0(param_1,iVar1);
    FUN_0197f350(uVar3,param_3);
    uVar3 = FUN_0197eaa0(param_1,iVar1);
    iVar2 = FUN_0197f1e0(uVar3);
    if (iVar2 == 0) {
      uVar3 = FUN_0197eaa0(param_1,iVar1);
      FUN_00410f20(uVar3);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),iVar1);
    }
  }
  FUN_00414480(local_20);
  return;
}

