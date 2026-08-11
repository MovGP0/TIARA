/* Ghidra address: 0188d0f0 */
/* Ghidra symbol: FUN_0188d0f0 */


void FUN_0188d0f0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 == -1) {
    FUN_0188d1b0(param_1,local_20);
    uVar1 = FUN_0188d050(param_1,local_20[0]);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  else {
    *(int *)(param_1 + 0x18) = param_2;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
    plVar2 = (longlong *)FUN_0188d030(param_1,*(int *)(param_1 + 0x18));
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00414480(local_20);
  return;
}

