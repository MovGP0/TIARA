/* Ghidra address: 015f3400 */
/* Ghidra symbol: FUN_015f3400 */


void FUN_015f3400(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8 [4];
  ulonglong in_stack_ffffffffffffff68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  _ClearVHDLSession(param_2,&DAT_015f3678);
  FUN_00414ad0(param_3 + 0x838,local_res8[0]);
  *(undefined8 *)(param_3 + 0x840) = param_2;
  uVar1 = FUN_00e0e000(*(undefined8 *)(param_3 + 0x828),0);
  uVar2 = FUN_015f26e0(local_res8[0],param_2,param_4,uVar1,
                       in_stack_ffffffffffffff68 & 0xffffffffffffff00);
  FUN_00415dd0(local_50,*(undefined8 *)(*(longlong *)(param_3 + 0x828) + 8),0);
  lVar3 = FUN_015f9d10(param_2,uVar2,local_50[0],&DAT_015f3688);
  if (lVar3 == 0) {
    (**(code **)(*param_4 + 0x288))(param_4,&local_60);
    FUN_00416cd0(&local_58,5,L"TINA: ",*(undefined8 *)(*(longlong *)(param_3 + 0x828) + 8),
                 L" entity not found in the macro ( component: ",local_60,L" ) !");
    FUN_015fcf20(local_58,0,0,0);
  }
  uVar2 = _EntityDecl_GetPortsAll(param_2,lVar3,local_40);
  FUN_00415430(*(longlong *)(param_3 + 0x828) + 0x50,uVar2,0);
  uVar1 = FUN_00e0e8c0(*(undefined8 *)(param_3 + 0x828));
  uVar2 = FUN_015f9fa0(param_2,lVar3,uVar1,&local_3c);
  FUN_00e0ffe0(param_3,uVar2,local_3c);
  *(undefined1 *)(param_3 + 0x848) = 1;
  FUN_00414560(&local_60,2);
  FUN_004144d0(local_50);
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res8);
  return;
}

