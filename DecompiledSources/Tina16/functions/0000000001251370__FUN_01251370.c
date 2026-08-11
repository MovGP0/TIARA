/* Ghidra address: 01251370 */
/* Ghidra symbol: FUN_01251370 */


void FUN_01251370(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,longlong param_6,short *param_7,byte param_8,longlong *param_9,
                 undefined1 param_10,undefined8 param_11)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  short *local_38;
  longlong *local_30 [2];
  
  local_c8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_60 = 0;
  local_68 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_11);
  (**(code **)(*param_1 + 0x148))(param_1,local_30,L"detail");
  (**(code **)(*param_2 + 0x98))(param_2,&local_40,local_30[0]);
  (**(code **)(*local_30[0] + 0x108))(local_30[0],L"type",local_res18);
  (**(code **)(*local_30[0] + 0x108))(local_30[0],L"model",local_res20);
  FUN_00415dd0(&local_50,param_11,0);
  FUN_00b0d0c0(&local_48,param_5,local_50);
  FUN_004168b0(&local_58,local_48);
  (**(code **)(*local_30[0] + 0x108))(local_30[0],L"usage",local_58);
  local_38 = param_7;
  uVar3 = (uint)param_8;
  iVar2 = 0;
  if (-1 < (int)(uVar3 - 1)) {
    do {
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
      cVar1 = *(char *)(param_6 + iVar2);
      if (cVar1 == '\x01') {
        (**(code **)(*param_9 + 0x18))(param_9,&local_70,iVar2);
        FUN_00415dd0(&local_78,param_11,0);
        FUN_00b0d0c0(&local_68,local_70,local_78);
        FUN_004168b0(&local_80,local_68);
        FUN_0043f750(&local_88,iVar2);
        FUN_004169a0(&local_90,local_38);
        in_stack_fffffffffffffee8 = local_90;
        FUN_01250440(&local_60,param_1,local_30[0],param_10,local_80,local_88,local_90);
        FUN_00b909d0(&local_38,0x1f);
      }
      else if (cVar1 == '\x02') {
        (**(code **)(*param_9 + 0x18))(param_9,&local_a8,iVar2);
        FUN_00415dd0(&local_b0,param_11,0);
        FUN_00b0d0c0(&local_a0,local_a8,local_b0);
        FUN_004168b0(&local_b8,local_a0);
        FUN_0043f750(&local_c0,iVar2);
        in_stack_fffffffffffffee8 = CONCAT44(uVar4,(int)*local_38);
        FUN_012505f0(&local_98,param_1,local_30[0],param_10,local_b8,local_c0,
                     in_stack_fffffffffffffee8);
        FUN_00b909d0(&local_38,2);
      }
      else if (cVar1 == '\x03') {
        (**(code **)(*param_9 + 0x18))(param_9,&local_d8,iVar2);
        FUN_00415dd0(&local_e0,param_11,0);
        FUN_00b0d0c0(&local_d0,local_d8,local_e0);
        FUN_004168b0(&local_e8,local_d0);
        FUN_0043f750(&local_f0,iVar2);
        in_stack_fffffffffffffee8 = *(undefined8 *)local_38;
        FUN_01250840(&local_c8,param_1,local_30[0],param_10,local_e8,local_f0,
                     in_stack_fffffffffffffee8,0);
        FUN_00b909d0(&local_38,8);
      }
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_00414560(&local_f0,2);
  FUN_004144d0(&local_e0);
  FUN_00414480(&local_d8);
  FUN_00414520(&local_d0);
  FUN_0041b800(&local_c8);
  FUN_00414560(&local_c0,2);
  FUN_004144d0(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00414520(&local_a0);
  FUN_0041b800(&local_98);
  FUN_00414560(&local_90,3);
  FUN_004144d0(&local_78);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414520(&local_48);
  FUN_0041b800(&local_40);
  FUN_0041b800(local_30);
  FUN_00414560(&local_res18,3);
  FUN_00414480(&param_11);
  return;
}

