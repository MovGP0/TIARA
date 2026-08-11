/* Ghidra address: 00c77640 */
/* Ghidra symbol: FUN_00c77640 */


void FUN_00c77640(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*param_2 == 0x4e) && (*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x25c)) {
    param_2[6] = -1;
    param_2[7] = -1;
    FUN_004167d0(local_20,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x20));
    (**(code **)(*param_1 + 0x118))(param_1,param_2 + 6,local_20[0]);
    if (*(longlong *)(param_2 + 6) == -1) {
      uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
      uVar1 = thunk_FUN_03a65bf1(param_1[0x52],uVar1,*param_2,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar1;
    }
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    uVar1 = thunk_FUN_03a65bf1(param_1[0x52],uVar1,*param_2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  FUN_00414480(local_20);
  return;
}

