/* Ghidra address: 00d86d60 */
/* Ghidra symbol: FUN_00d86d60 */


int * FUN_00d86d60(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  *(undefined8 *)param_2 = local_38;
  *(undefined8 *)(param_2 + 2) = uStack_30;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 == 0) {
    lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x98),L"Panel");
  }
  else {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_00d77610(lVar2,L"Panel");
    }
  }
  if (lVar3 != 0) {
    *(undefined8 *)param_2 = local_38;
    *(undefined8 *)(param_2 + 2) = uStack_30;
    FUN_00d77b90(lVar3,&local_38);
    FUN_004238d0(&local_48,*param_2 + *(int *)(lVar3 + 0xe4),param_2[1] + *(int *)(lVar3 + 0xe8),
                 param_2[2] - *(int *)(lVar3 + 0xf0),param_2[3] - *(int *)(lVar3 + 0xec));
    *(undefined8 *)param_2 = local_48;
    *(undefined8 *)(param_2 + 2) = uStack_40;
  }
  return param_2;
}

