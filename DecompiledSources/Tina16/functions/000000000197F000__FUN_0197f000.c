/* Ghidra address: 0197f000 */
/* Ghidra symbol: FUN_0197f000 */


void FUN_0197f000(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00410ae0(param_2,local_20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_20[0]);
  if (iVar1 != -1) {
    uVar2 = FUN_0197eaa0(param_1,iVar1);
    FUN_00410f20(uVar2);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),iVar1);
  }
  FUN_00414480(local_20);
  return;
}

