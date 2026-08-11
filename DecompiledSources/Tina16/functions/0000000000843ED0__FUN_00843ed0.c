/* Ghidra address: 00843ed0 */
/* Ghidra symbol: FUN_00843ed0 */


undefined1
FUN_00843ed0(longlong param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_39 = 0;
  if (((param_3 < param_2[6]) || (param_2[7] <= param_3)) ||
     (param_3 = param_2[7], param_3 <= param_4)) {
    iVar3 = param_2[4];
    if (iVar3 < param_4) {
      if (iVar3 < param_2[8] + -1) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = FUN_00843e60(param_1,param_2,iVar3);
      param_4 = iVar3;
      if (iVar2 == 0) {
        param_4 = iVar3 + -1;
      }
    }
    iVar3 = FUN_00843e60(param_1,param_2,param_3);
    *param_5 = iVar3;
    iVar3 = FUN_00843e60(param_1,param_2,param_4);
    *param_6 = iVar3;
    if (*param_6 == 0) {
      *param_6 = *param_5;
    }
    iVar3 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),param_4);
    *param_6 = *param_6 + iVar3;
    if (param_2[3] < *param_6) {
      *param_6 = param_2[3];
    }
    if (*(char *)(param_1 + 0x108) != '\0') {
      *param_6 = *param_6 + *param_2;
    }
    local_39 = 1;
  }
  else {
    FUN_004238d0(&local_38,0,0,0,0);
    puVar1 = *(undefined8 **)(param_1 + 0x100);
    *puVar1 = local_38;
    puVar1[1] = uStack_30;
  }
  return local_39;
}

