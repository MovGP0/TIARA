/* Ghidra address: 0068a900 */
/* Ghidra symbol: FUN_0068a900 */


void FUN_0068a900(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong local_30;
  
  local_30 = 0;
  if (-1 < param_2) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (param_2 <= iVar2 + -1) goto LAB_0068a963;
  }
  FUN_0041ddd0(&local_30,PTR_PTR_02004940);
  FUN_004b34c0(param_1,local_30,param_2);
LAB_0068a963:
  uVar3 = (**(code **)(*(longlong *)param_1[7] + 0x260))((longlong *)param_1[7]);
  lVar1 = param_1[7];
  pcVar4 = (code *)FUN_00411550(lVar1,0xffac);
  uVar5 = (*pcVar4)(lVar1,param_2);
  lVar1 = param_1[7];
  pcVar4 = (code *)FUN_00411550(lVar1,0xffab);
  (*pcVar4)(lVar1,param_2,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3,0);
  lVar1 = param_1[7];
  pcVar4 = (code *)FUN_00411550(lVar1,0xffab);
  (*pcVar4)(lVar1,param_2,uVar5);
  (**(code **)(*(longlong *)param_1[7] + 0x268))((longlong *)param_1[7],uVar3);
  FUN_00414480(&local_30);
  return;
}

