/* Ghidra address: 0064a4e0 */
/* Ghidra symbol: FUN_0064a4e0 */


void FUN_0064a4e0(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_60 = auStack_88;
  local_30[0] = 0;
  DAT_02012308 = 0;
  DAT_020122f8 = param_1;
  if (*(char *)(param_1 + 0xff) == '\0') {
    local_60 = auStack_88;
    pcVar3 = (code *)FUN_00411550(param_1,0xffdc);
    (*pcVar3)(param_1,local_30);
    if (DAT_020122f8 == 0) {
      return;
    }
    if (local_30[0] == 0) {
      local_30[0] = FUN_006491c0(&PTR_FUN_00637ca0,1,param_1);
      DAT_02012308 = 1;
    }
  }
  else {
    pcVar3 = (code *)FUN_00411550(param_1,0xffe3);
    (*pcVar3)(param_1,local_30);
    if (DAT_020122f8 == 0) {
      return;
    }
    if (local_30[0] == 0) {
      local_30[0] = FUN_00649430(&PTR_FUN_006383a8,1,param_1);
      DAT_02012308 = 1;
    }
    uVar4 = *(undefined8 *)(local_30[0] + 0x50);
    cVar2 = FUN_004113d0(uVar4,&PTR_FUN_00640c18);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(local_30[0] + 0x50);
      if ((*(longlong *)(lVar1 + 0x78) == 0) &&
         (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00640c18), cVar2 == '\0')) {
        thunk_FUN_03cc0d62(&local_38);
        *(undefined8 *)(local_30[0] + 0x60) = local_38;
      }
      else {
        local_40 = 0;
        local_3c = 0;
        uVar4 = FUN_0064d1f0(lVar1,&local_40);
        *(undefined8 *)(local_30[0] + 0x60) = uVar4;
      }
      local_50 = *(int *)(local_30[0] + 0x60) + *(int *)(*(longlong *)(local_30[0] + 0x50) + 0x98);
      iStack_4c = *(int *)(local_30[0] + 100) + *(int *)(*(longlong *)(local_30[0] + 0x50) + 0x9c);
      *(ulonglong *)(local_30[0] + 0x68) = CONCAT44(iStack_4c,local_50);
      local_48 = iStack_4c;
      local_44 = local_50;
    }
    else {
      uVar4 = FUN_0065b870(uVar4);
      thunk_FUN_03e49910(uVar4,local_30[0] + 0x60);
    }
    *(undefined8 *)(local_30[0] + 0x80) = *(undefined8 *)(local_30[0] + 0x60);
    *(undefined8 *)(local_30[0] + 0x88) = *(undefined8 *)(local_30[0] + 0x68);
  }
  FUN_0064a340(local_30[0],param_2,param_3);
  return;
}

