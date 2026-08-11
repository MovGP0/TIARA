/* Ghidra address: 0069df90 */
/* Ghidra symbol: FUN_0069df90 */


void FUN_0069df90(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_620 [2];
  undefined8 local_610;
  undefined1 local_608 [512];
  undefined1 local_408 [512];
  undefined1 local_208 [512];
  
  local_620[0] = 0;
  FUN_0069d4b0(param_1,0);
  if (-2 < param_2) {
    plVar2 = (longlong *)FUN_0069e100(param_1);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (param_2 < iVar1) goto LAB_0069dff3;
  }
  FUN_0041ddd0(local_620,PTR_PTR_02003f00);
  FUN_0069c390(local_620[0]);
LAB_0069dff3:
  if (param_2 == -1) {
    FUN_0069e4e0(param_1);
  }
  if (param_2 != *(int *)(param_1 + 0x28)) {
    if (param_2 != -1) {
      *(int *)(param_1 + 0x28) = param_2;
    }
    plVar2 = (longlong *)FUN_0069e100(param_1);
    (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(param_1 + 0x28));
    uVar3 = FUN_0069e8a0();
    FUN_0069d6e0(uVar3,local_208,local_408,local_608,&local_610);
    thunk_FUN_04172795(local_610);
    thunk_FUN_03d5bf3d(local_610);
    local_610 = 0;
    uVar3 = FUN_0069e8a0();
    FUN_0069d7c0(uVar3,local_208,local_408,local_608,local_610);
    FUN_0069e870(param_1);
    FUN_0069d2f0(param_1,0);
  }
  FUN_00414480(local_620);
  return;
}

