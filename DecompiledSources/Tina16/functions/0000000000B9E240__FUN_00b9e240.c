/* Ghidra address: 00b9e240 */
/* Ghidra symbol: FUN_00b9e240 */


void FUN_00b9e240(undefined8 param_1,longlong *param_2,short *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res10 [2];
  longlong *local_res20;
  ulonglong in_stack_ffffffffffffff88;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 local_50;
  short *local_48;
  undefined1 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  int local_1c [3];
  
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res20);
  if (param_3 == (short *)0x0) {
    FUN_00b9d400(param_1,local_res10[0],local_res20);
  }
  else {
    iVar1 = FUN_0040e860(param_3,local_1c);
    if (local_1c[0] == 0) {
      if (iVar1 < 1) {
        local_40 = 0x11;
        local_48 = param_3;
        uVar3 = FUN_0044d530(&PTR_FUN_00b9cd98,1,L"Invalid predicate [%s]",&local_48,
                             in_stack_ffffffffffffff88 & 0xffffffff00000000);
        FUN_004134c0(uVar3);
      }
      iVar2 = (**(code **)(*local_res10[0] + 0x18))(local_res10[0]);
      if (iVar1 <= iVar2) {
        (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_50,iVar1 + -1);
        (**(code **)(*local_res20 + 0x30))(local_res20,local_50);
      }
    }
    else if (*param_3 == 0x40) {
      iVar1 = 0;
      if (param_3 != (short *)0x0) {
        iVar1 = *(int *)(param_3 + -2);
      }
      FUN_00416dc0(&local_58,param_3,2,iVar1 + -1);
      puVar4 = &local_38;
      FUN_00b9eb00(param_1,local_58,&local_28,&local_30,puVar4);
      if (local_30 == 0) {
        FUN_00b9dbf0(param_1,local_res10[0],local_28,&DAT_00b9e644,
                     (ulonglong)puVar4 & 0xffffffffffffff00,local_res20);
      }
      else {
        iVar1 = FUN_00416db0(local_30,&DAT_00b9e654);
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(local_30,&LAB_00b9e6a4);
          if (iVar1 != 0) {
            local_40 = 0x11;
            local_48 = param_3;
            uVar3 = FUN_0044d530(&PTR_FUN_00b9cd98,1,L"Unsupported operator [%s]",&local_48,
                                 (ulonglong)puVar4 & 0xffffffff00000000);
            FUN_004134c0(uVar3);
            goto code_r0x00b9e563;
          }
        }
        iVar1 = FUN_00416db0(local_30,&LAB_00b9e6a4);
        FUN_00b9dbf0(param_1,local_res10[0],local_28,local_38,iVar1 == 0,local_res20);
      }
    }
    else {
      puVar4 = &local_38;
      FUN_00b9eb00(param_1,param_3,&local_28,&local_30,puVar4);
      if (local_30 == 0) {
        FUN_00b9dfc0(param_1,local_res10[0],local_28,&DAT_00b9e644,local_res20);
      }
      else {
        iVar1 = FUN_00416db0(local_30,&DAT_00b9e654);
        if (iVar1 == 0) {
          FUN_00b9dfc0(param_1,local_res10[0],local_28,local_38,local_res20);
        }
        else {
          local_40 = 0x11;
          local_48 = param_3;
          uVar3 = FUN_0044d530(&PTR_FUN_00b9cd98,1,L"Unsupported operator [%s]",&local_48,
                               (ulonglong)puVar4 & 0xffffffff00000000);
          FUN_004134c0(uVar3);
        }
      }
    }
  }
code_r0x00b9e563:
  FUN_00414480(&local_58);
  FUN_0041b800(&local_50);
  FUN_00414560(&local_38,3);
  FUN_0041b800(local_res10);
  FUN_0041b800(&local_res20);
  return;
}

