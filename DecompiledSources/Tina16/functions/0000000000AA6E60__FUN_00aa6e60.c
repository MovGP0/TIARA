/* Ghidra address: 00aa6e60 */
/* Ghidra symbol: FUN_00aa6e60 */


undefined4
FUN_00aa6e60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  longlong local_58;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  local_60 = auStack_a8;
  local_40 = *param_3;
  uVar4 = param_3[1];
  uStack_38._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  *(int *)(param_1 + 0x218) = uStack_38._4_4_ + *(int *)(param_1 + 0x94);
  *(undefined1 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 1;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x308) = 0;
  puVar2 = auStack_a8;
  uStack_38 = uVar4;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x228),0);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  lVar1 = *(longlong *)(param_1 + 0x188);
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_00a438f8);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 700) == '\0')) {
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0xcc) = 1;
  }
  if ((byte)*PTR_DAT_020026b8 < 9) {
    uVar4 = FUN_005ffa40(param_2);
    local_30 = thunk_FUN_0418f5de(uVar4,*(undefined8 *)PTR_DAT_020036e8,0xffffffff);
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_03a5de49(uVar4);
  }
  else {
    local_30 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x288) + 0x10))(*(longlong **)(param_1 + 0x288));
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = param_8;
  local_44 = FUN_00abf0d0(param_1,param_2,&local_40,param_4);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x288) + 0x10)) {
    FUN_00abf7f0(*(longlong *)(param_1 + 0x288));
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0x10))(*(longlong **)(param_1 + 0x288));
    FUN_00aa8a40(param_1,1);
  }
  if (local_30 != 0) {
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_0418f5de(uVar4,local_30,0xffffffff);
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_00aa6e10(param_1);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x238) + 0x10);
    local_48 = 0;
    if (-1 < iVar5 + -1) {
      do {
        local_58 = FUN_00ac56b0(*(undefined8 *)(param_1 + 0x238),local_48);
        if (*(char *)(local_58 + 0x198) == '\0') {
          FUN_0064e6f0(*(undefined8 *)(local_58 + 0x1a0));
        }
        local_48 = local_48 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x98) != '\0') || (*(char *)(param_1 + 0x99) != '\0')) {
    *(undefined1 *)(param_1 + 0x99) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x228),0 < *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x10))
    ;
  }
  return local_44;
}

