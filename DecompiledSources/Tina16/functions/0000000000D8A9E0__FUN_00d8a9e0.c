/* Ghidra address: 00d8a9e0 */
/* Ghidra symbol: FUN_00d8a9e0 */


int * FUN_00d8a9e0(longlong param_1,int *param_2,char param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if (param_3 == '\0') {
    lVar1 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x70),L"Frame");
  }
  else if (param_3 == '\x01') {
    lVar1 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x78),L"Frame");
  }
  else {
    lVar1 = 0;
  }
  *(undefined8 *)param_2 = local_38;
  *(undefined8 *)(param_2 + 2) = uStack_30;
  if (lVar1 != 0) {
    FUN_00d77b90(lVar1,&local_38);
    FUN_004238d0(&local_48,*param_2 + *(int *)(lVar1 + 0xe4),param_2[1] + *(int *)(lVar1 + 0xe8),
                 param_2[2] - *(int *)(lVar1 + 0xf0),param_2[3] - *(int *)(lVar1 + 0xec));
    *(undefined8 *)param_2 = local_48;
    *(undefined8 *)(param_2 + 2) = uStack_40;
  }
  return param_2;
}

