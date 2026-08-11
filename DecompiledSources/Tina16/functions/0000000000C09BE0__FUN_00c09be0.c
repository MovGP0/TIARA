/* Ghidra address: 00c09be0 */
/* Ghidra symbol: FUN_00c09be0 */


void FUN_00c09be0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 local_44 [16];
  undefined8 local_34;
  short local_2a;
  undefined8 local_28;
  undefined8 local_20;
  
  thunk_FUN_03cc0d62(&local_20);
  uVar3 = FUN_0064d3a0(param_1,&local_20);
  local_20._4_4_ = (undefined4)(uVar3 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = uVar3;
  local_34 = FUN_00bf19b0(param_1,uVar3 & 0xffffffff,uVar1);
  local_28 = FUN_00c0ee50(param_1,&local_34);
  if ((int)local_20 < *(int *)(param_1 + 0x910)) {
    if (*(char *)(param_1 + 0x498) != '\0') {
      local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
      uVar1 = local_28._4_4_;
      cVar2 = FUN_00be0d50(*(undefined8 *)(param_1 + 0x4a8),uVar1);
      if (cVar2 != '\0') {
        FUN_00bfcf50(param_1,local_44,local_34._4_4_);
        cVar2 = FUN_004231e0(local_44,&local_20);
        if (cVar2 != '\0') {
          uVar4 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,0xffffffeb);
          thunk_FUN_04176eb1(uVar4);
          return;
        }
        uVar4 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,
                             (longlong)*(short *)(*(longlong *)(param_1 + 0x610) + 0x48));
        thunk_FUN_04176eb1(uVar4);
        return;
      }
    }
    uVar4 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,
                         (longlong)*(short *)(*(longlong *)(param_1 + 0x610) + 0x48));
    thunk_FUN_04176eb1(uVar4);
    return;
  }
  if ((((*(uint *)(param_1 + 0x63a) & 0x10) == 0) || (cVar2 = FUN_0064e170(param_1), cVar2 != '\0'))
     || (cVar2 = FUN_00c09ab0(param_1,&local_28), cVar2 == '\0')) {
    if ((*(char *)(param_1 + 0x498) != '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x4a0) + 0x19) != '\0')) {
      cVar2 = FUN_00bdfa80(*(undefined8 *)(param_1 + 0x4a8),local_28._4_4_);
      if (cVar2 != '\0') {
        FUN_00bfce40(param_1,local_44,local_34._4_4_,local_28._4_4_);
        cVar2 = FUN_004231e0(local_44,&local_20);
        if (cVar2 != '\0') {
          local_2a = -0x15;
        }
        goto LAB_00c09d7a;
      }
    }
    local_2a = *(short *)(param_1 + 0xe0);
  }
  else {
    local_2a = -2;
  }
LAB_00c09d7a:
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    (**(code **)(param_1 + 0x6e0))(*(undefined8 *)(param_1 + 0x6e8),param_1,&local_28,&local_2a);
  }
  FUN_00bd9ec0(*(undefined8 *)(param_1 + 0x658),param_1,&local_28,&local_2a);
  uVar4 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,(longlong)local_2a);
  thunk_FUN_04176eb1(uVar4);
  return;
}

