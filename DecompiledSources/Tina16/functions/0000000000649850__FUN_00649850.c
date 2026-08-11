/* Ghidra address: 00649850 */
/* Ghidra symbol: FUN_00649850 */


ulonglong FUN_00649850(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  char local_30;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  local_40 = FUN_00649db0(param_1 + 100);
  lVar3 = thunk_FUN_03f32902(local_40,4);
  if (lVar3 != *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0)) {
    lVar3 = FUN_006485b0(local_40);
    if (lVar3 == 0) goto LAB_00649a1b;
    do {
      lVar4 = lVar3;
      lVar3 = *(longlong *)(lVar4 + 0x78);
    } while (lVar3 != 0);
    local_40 = FUN_0065b870(lVar4);
  }
  lVar3 = param_2;
  if (local_40 != 0) {
    do {
      lVar4 = lVar3;
      lVar3 = *(longlong *)(lVar4 + 0x78);
    } while (lVar3 != 0);
    local_48 = FUN_0065b870(lVar4);
    if (local_40 != local_48) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x78);
      if (lVar3 == 0) {
        cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_00640c18);
        if (cVar1 == '\0') {
          local_50 = 0;
        }
        else {
          local_50 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
        }
      }
      else {
        do {
          lVar4 = lVar3;
          lVar3 = *(longlong *)(lVar4 + 0x78);
        } while (lVar3 != 0);
        local_50 = FUN_0065b870(lVar4);
      }
      local_30 = '\0';
      local_38 = *(undefined8 *)(param_1 + 100);
      uVar2 = FUN_00427ab0();
      thunk_FUN_0413b16e(uVar2,FUN_006497e0,&local_50);
      if (local_30 != '\0') {
        thunk_FUN_03e49910(local_40,local_60);
        pcVar5 = (code *)FUN_00411550(param_2,0xffb9);
        (*pcVar5)(param_2,*(undefined8 *)(param_1 + 0xa8),local_70,param_1 + 100,param_1 + 0x6f);
        cVar1 = FUN_004113d0(DAT_02012300,&PTR_FUN_00637e70);
        if ((((cVar1 == '\0') || (*(longlong *)(*(longlong *)(DAT_02012300 + 0x50) + 0x108) == 0))
            || (lVar3 = FUN_0065b870(*(undefined8 *)(*(longlong *)(DAT_02012300 + 0x50) + 0x108)),
               lVar3 != local_40)) &&
           (cVar1 = FUN_004239d0(local_60,local_60,local_70), cVar1 != '\0')) {
          uVar6 = 0;
        }
      }
    }
  }
LAB_00649a1b:
  return uVar6 & 0xffffffff;
}

