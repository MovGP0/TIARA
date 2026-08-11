/* Ghidra address: 00d95da0 */
/* Ghidra symbol: FUN_00d95da0 */


char FUN_00d95da0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 in_stack_ffffffffffffff28;
  uint3 uVar3;
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ushort local_5f;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_34 = *param_3;
  local_2c = (undefined4)param_3[1];
  FUN_00417580(&local_70,&DAT_00d627e8);
  lVar1 = *(longlong *)(param_1 + 0x18 + (local_34 & 0xff) * 8);
  if (lVar1 != 0) {
    local_99 = (**(code **)(lVar1 + 0x20))
                         (lVar1,param_1,param_2,local_34._4_4_,local_2c,param_4,param_5,0);
    goto LAB_00d961ce;
  }
  local_99 = '\0';
  cVar2 = FUN_00d98b50(param_1);
  if (cVar2 == '\0') goto LAB_00d961ce;
  local_99 = '\x01';
  if ((char)local_34 == '\0') {
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    goto LAB_00d961ce;
  }
  if ((char)local_34 != '\x1f') {
    local_99 = '\0';
    goto LAB_00d961ce;
  }
  uVar3 = (uint3)((uint)in_stack_ffffffffffffff28 >> 8);
  if (local_34._4_4_ < 0x5f) {
    if (local_34._4_4_ == 0x5e) {
      DAT_01ed17ea = 2;
      local_5f = 2;
      local_70 = *param_4;
      uStack_68 = param_4[1];
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa8))
                (*(longlong **)(param_1 + 0x180),&local_98,0,&local_70,CONCAT31(uVar3,1),L"default")
      ;
      *param_5 = local_98;
      param_5[1] = uStack_90;
      goto LAB_00d961ce;
    }
    if (local_34._4_4_ == 0x59) {
      DAT_01ed17ea = DAT_01ed17ea | 1;
      local_70 = *param_4;
      uStack_68 = param_4[1];
      local_5f = DAT_01ed17ea;
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa8))
                (*(longlong **)(param_1 + 0x180),&local_98,0,&local_70,(uint)uVar3 << 8,L"default");
      *param_5 = local_98;
      param_5[1] = uStack_90;
      goto LAB_00d961ce;
    }
    if (local_34._4_4_ == 0x5b) {
      DAT_01ed17ea = DAT_01ed17ea | 8;
      local_70 = *param_4;
      uStack_68 = param_4[1];
      local_5f = DAT_01ed17ea;
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa8))
                (*(longlong **)(param_1 + 0x180),&local_98,0,&local_70,CONCAT31(uVar3,3),L"default")
      ;
      *param_5 = local_98;
      param_5[1] = uStack_90;
      goto LAB_00d961ce;
    }
    if (local_34._4_4_ != 0x5d) goto LAB_00d961c2;
  }
  else {
    if (local_34._4_4_ == 0x5f) {
      DAT_01ed17ea = 2;
      local_5f = 2;
      local_70 = *param_4;
      uStack_68 = param_4[1];
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa8))
                (*(longlong **)(param_1 + 0x180),&local_98,6,&local_70,CONCAT31(uVar3,1),L"default")
      ;
      *param_5 = local_98;
      param_5[1] = uStack_90;
      goto LAB_00d961ce;
    }
    if (local_34._4_4_ != 0x61) {
      if (local_34._4_4_ == 99) {
        DAT_01ed17ea = DAT_01ed17ea | 4;
        local_70 = *param_4;
        uStack_68 = param_4[1];
        local_5f = DAT_01ed17ea;
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa8))
                  (*(longlong **)(param_1 + 0x180),&local_98,0,&local_70,CONCAT31(uVar3,2),
                   L"default");
        *param_5 = local_98;
        param_5[1] = uStack_90;
        goto LAB_00d961ce;
      }
LAB_00d961c2:
      local_99 = '\0';
      goto LAB_00d961ce;
    }
  }
  DAT_01ed17ea = DAT_01ed17ea | 0x20;
  local_70 = *param_4;
  uStack_68 = param_4[1];
  local_5f = DAT_01ed17ea;
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0xa8))
            (*(longlong **)(param_1 + 0x180),&local_98,0,&local_70,CONCAT31(uVar3,5),L"default");
  *param_5 = local_98;
  param_5[1] = uStack_90;
LAB_00d961ce:
  if (local_99 == '\0') {
    FUN_00423010(&local_80,0,0,0,0);
    *param_5 = local_80;
    param_5[1] = uStack_78;
  }
  FUN_00417740(&local_70,&DAT_00d627e8);
  return local_99;
}

