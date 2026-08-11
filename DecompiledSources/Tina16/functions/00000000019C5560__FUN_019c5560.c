/* Ghidra address: 019c5560 */
/* Ghidra symbol: FUN_019c5560 */


undefined1
FUN_019c5560(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5,longlong *param_6,longlong *param_7)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_40[0] = 0;
  iVar6 = 0;
  if (param_2 != 0) {
    iVar6 = (int)*(undefined8 *)(param_2 + -8);
  }
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar1 = *(ulonglong *)(param_2 + (longlong)iVar5 * 8);
      lVar4 = 0;
      if (param_2 != 0) {
        lVar4 = *(longlong *)(param_2 + -8);
      }
      local_30._4_4_ = (undefined4)(uVar1 >> 0x20);
      uVar3 = local_30._4_4_;
      local_30 = uVar1;
      cVar2 = FUN_019c33c0(param_1,uVar1 & 0xffffffff,uVar3,param_3,param_4,param_5,param_2,
                           param_2 + (lVar4 + -1) * 8,param_6,param_7,1);
      if (cVar2 != '\0') {
        local_89 = 0;
        goto LAB_019c5933;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  if (param_5 != 0) {
    iVar6 = (int)*(undefined8 *)(param_5 + -8);
  }
  iVar5 = 0;
  if (iVar6 - 1U < 0x80000000) {
    do {
      local_30 = *(ulonglong *)(param_5 + (longlong)iVar5 * 8);
      cVar2 = FUN_00422c40(&local_30,param_2);
      if (cVar2 == '\0') {
        lVar4 = 0;
        if (param_2 != 0) {
          lVar4 = *(longlong *)(param_2 + -8);
        }
        cVar2 = FUN_00422c40(&local_30,param_2 + (lVar4 + -1) * 8);
      }
      else {
        cVar2 = '\x01';
      }
      if ((cVar2 == '\0') &&
         (cVar2 = FUN_019c1760(&local_30,param_2), uVar1 = local_30, cVar2 != '\0')) {
        uVar3 = local_30._4_4_;
        cVar2 = FUN_019c16b0(param_6,local_30 & 0xffffffff,local_30._4_4_);
        if ((cVar2 == '\0') &&
           (cVar2 = FUN_019c16b0(param_7,uVar1 & 0xffffffff,uVar3), cVar2 == '\0')) {
          if ((*(char *)(param_1 + 0x30) != '\0') && (*(longlong *)(param_1 + 0x70) != 0)) {
            local_60[0] = (undefined4)local_30;
            local_58 = 0;
            local_50 = local_30._4_4_;
            local_48 = 0;
            FUN_00442f70(local_40,L"  blocked by pin at (%d,%d)",local_60,1);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                      (*(longlong **)(param_1 + 0x70),local_40[0]);
            (**(code **)(*param_6 + 0x288))(param_6,&local_70);
            uVar3 = (**(code **)(*param_6 + 0x210))(param_6,0);
            FUN_0043f750(&local_78,uVar3);
            (**(code **)(*param_7 + 0x288))(param_7,&local_80);
            uVar3 = (**(code **)(*param_7 + 0x210))(param_7,0);
            FUN_0043f750(&local_88,uVar3);
            FUN_00416cd0(&local_68,9,L"  blocked while routing ",local_70,L"[iGR:",local_78,L"] -> "
                         ,local_80,L"[iGR:",local_88,&LAB_019c5a60);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                      (*(longlong **)(param_1 + 0x70),local_68);
          }
          local_89 = 0;
          goto LAB_019c5933;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_89 = 1;
LAB_019c5933:
  FUN_00414560(&local_88,5);
  FUN_00414480(local_40);
  return local_89;
}

