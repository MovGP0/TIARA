/* Ghidra address: 00420190 */
/* Ghidra symbol: FUN_00420190 */


longlong FUN_00420190(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *local_98;
  undefined4 local_90 [2];
  uint *local_88;
  longlong *local_80;
  longlong local_78;
  uint local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_78 = (ulonglong)param_1[1] + 0x400000;
  uVar2 = param_1[2];
  local_48 = (ulonglong)param_1[5];
  uVar3 = param_1[7];
  local_90[0] = 0x48;
  local_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_88 = param_1;
  local_80 = param_2;
  if ((*param_1 & 1) == 0) {
    local_98 = local_90;
    thunk_FUN_0419a80b(0xc06d0057,0,1,&local_98);
    return 0;
  }
  lVar5 = *(longlong *)((ulonglong)uVar2 + 0x400000);
  uVar7 = (longlong)param_2 - ((ulonglong)param_1[3] + 0x400000) >> 3 & 0xffffffff;
  local_68 = *(ulonglong *)((ulonglong)param_1[4] + 0x400000 + uVar7 * 8);
  local_70 = (uint)(local_68 >> 0x3f) ^ 1;
  if ((longlong)local_68 < 0) {
    local_68 = local_68 & 0xffff;
  }
  else {
    local_68 = (local_68 & 0xffffffff) + 0x400002;
  }
  if ((DAT_0200c298 == (code *)0x0) || (lVar4 = (*DAT_0200c298)(0,local_90), lVar4 == 0)) {
    if (lVar5 == 0) {
      if ((((DAT_0200c298 == (code *)0x0) || (lVar5 = (*DAT_0200c298)(1,local_90), lVar5 == 0)) &&
          (lVar5 = thunk_FUN_04147068(local_78), lVar5 == 0)) &&
         ((uStack_50 = thunk_FUN_03ce33a6(), DAT_0200c2a0 == (code *)0x0 ||
          (lVar5 = (*DAT_0200c2a0)(3,local_90), lVar5 == 0)))) {
        local_98 = local_90;
        thunk_FUN_0419a80b(0xc06d007e,0,1,&local_98);
        return CONCAT44(uStack_54,uStack_58);
      }
      LOCK();
      plVar1 = (longlong *)((ulonglong)uVar2 + 0x400000);
      lVar4 = *plVar1;
      *plVar1 = lVar5;
      UNLOCK();
      if (lVar5 == lVar4) {
        thunk_FUN_041c8c2f(lVar5);
      }
      else if (param_1[6] != 0) {
        puVar6 = (undefined8 *)thunk_FUN_041151ea(0x40,0x10);
        puVar6[1] = param_1;
        *puVar6 = DAT_0200c2b8;
        DAT_0200c2b8 = puVar6;
      }
    }
    local_60 = (undefined4)lVar5;
    uStack_5c = (undefined4)((ulonglong)lVar5 >> 0x20);
    if ((((DAT_0200c298 == (code *)0x0) || (lVar4 = (*DAT_0200c298)(2,local_90), lVar4 == 0)) &&
        (((param_1[5] == 0 ||
          (((param_1[7] == 0 ||
            (lVar4 = (longlong)*(int *)(lVar5 + 0x3c), *(int *)(lVar5 + lVar4) != 0x4550)) ||
           (*(uint *)(lVar5 + 8 + lVar4) != uVar3)))) ||
         ((*(longlong *)(lVar5 + 0x30 + lVar4) != lVar5 ||
          (lVar4 = *(longlong *)(local_48 + 0x400000 + uVar7 * 8), lVar4 == 0)))))) &&
       ((lVar4 = thunk_FUN_041aa1c3(lVar5,local_68), lVar4 == 0 &&
        ((uStack_50 = thunk_FUN_03ce33a6(), DAT_0200c2a0 == (code *)0x0 ||
         (lVar4 = (*DAT_0200c2a0)(4,local_90), lVar4 == 0)))))) {
      local_98 = local_90;
      thunk_FUN_0419a80b(0xc06d007f,0,1,&local_98);
      lVar4 = CONCAT44(uStack_54,uStack_58);
    }
    *param_2 = lVar4;
  }
  if (DAT_0200c298 != (code *)0x0) {
    uStack_50 = 0;
    local_60 = (undefined4)lVar5;
    uStack_5c = (undefined4)((ulonglong)lVar5 >> 0x20);
    uStack_58 = (undefined4)lVar4;
    uStack_54 = (undefined4)((ulonglong)lVar4 >> 0x20);
    (*DAT_0200c298)(5,local_90);
  }
  return lVar4;
}

