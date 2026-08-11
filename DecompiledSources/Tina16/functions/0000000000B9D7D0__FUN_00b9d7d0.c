/* Ghidra address: 00b9d7d0 */
/* Ghidra symbol: FUN_00b9d7d0 */


void FUN_00b9d7d0(undefined8 param_1,longlong *param_2,short *param_3,undefined8 param_4,
                 byte param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  longlong *local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_0041b910(param_6);
  lVar2 = FUN_00badb60(&DAT_00ba1a00,1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x38;
  }
  FUN_0041b840(local_20,lVar2);
  iVar1 = FUN_00416db0(param_3,&DAT_00b9da80);
  if (iVar1 == 0) {
    (**(code **)(*param_6 + 0x30))(param_6,local_res10[0]);
  }
  else {
    iVar1 = FUN_00416db0(param_3,&LAB_00b9da90);
    if (iVar1 == 0) {
      (**(code **)(*local_res10[0] + 0x60))(local_res10[0],local_30);
      if (local_30[0] != 0) {
        (**(code **)(*local_res10[0] + 0x60))(local_res10[0],&local_38);
        (**(code **)(*param_6 + 0x30))(param_6,local_38);
      }
    }
    else {
      if ((param_3 == (short *)0x0) || (*param_3 != 0x40)) {
        if (param_3 == (short *)0x0) {
          (**(code **)(*local_20[0] + 0x30))(local_20[0],local_res10[0]);
        }
        else {
          FUN_00b9d0d0(param_1,local_res10[0],param_3,1,(param_5 & 1) != 0,local_20[0]);
        }
      }
      else {
        iVar1 = 0;
        if (param_3 != (short *)0x0) {
          iVar1 = *(int *)(param_3 + -2);
        }
        FUN_00416dc0(&local_40,param_3,2,iVar1 + -1);
        FUN_00b9d0d0(param_1,local_res10[0],local_40,2,(param_5 & 1) != 0,local_20[0]);
      }
      FUN_00b9e240(param_1,local_20[0],param_4,param_6);
    }
  }
  FUN_00414480(&local_40);
  FUN_00417840(&local_38,&DAT_00b9f8e0,2);
  FUN_0041b800(local_20);
  FUN_0041b800(local_res10);
  FUN_0041b800(&param_6);
  return;
}

