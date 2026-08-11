/* Ghidra address: 0135ad60 */
/* Ghidra symbol: FUN_0135ad60 */


undefined8
FUN_0135ad60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,int *param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_20;
  
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414480(param_2);
  FUN_00414480(param_5);
  *param_6 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_res18);
  if (-1 < iVar1) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
      uVar2 = FUN_00414ce0(uVar5);
      FUN_00414910(param_5,uVar4,uVar2);
      FUN_00416ba0(&local_20,local_res20,&DAT_0135af38);
      iVar1 = FUN_004170c0(local_20,*param_5,1);
      *param_6 = iVar1;
      if (0 < *param_6) {
        iVar1 = FUN_004170c0(&LAB_0135af48,*param_5,*param_6);
        *param_7 = (iVar1 - *param_6) + 1;
        FUN_00416dc0(param_2,*param_5,*param_6,*param_7);
      }
    }
  }
  FUN_00414480(&local_20);
  FUN_00414560(&local_res18,2);
  return param_2;
}

