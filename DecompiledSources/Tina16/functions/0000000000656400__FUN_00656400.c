/* Ghidra address: 00656400 */
/* Ghidra symbol: FUN_00656400 */


undefined8 FUN_00656400(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  uint local_140;
  undefined1 local_13c;
  ushort local_13b;
  undefined8 local_138;
  undefined1 local_130 [256];
  undefined8 local_30;
  
  uVar2 = thunk_FUN_041a8b50();
  uVar2 = FUN_004239b0(uVar2);
  local_14c._0_2_ = (short)uVar2;
  local_154 = (int)(short)local_14c;
  local_14c._2_2_ = (short)((uint)uVar2 >> 0x10);
  local_150 = (int)local_14c._2_2_;
  local_14c = uVar2;
  local_30 = FUN_0064d3a0(param_1,&local_154);
  if (param_3 == 0) {
    param_3 = FUN_00656230(param_1,&local_30,0,0,0);
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == param_1) {
    local_148 = local_30;
  }
  else {
    local_148 = CONCAT44(local_30._4_4_ - *(int *)(param_3 + 0x94),
                         (int)local_30 - *(int *)(param_3 + 0x90));
  }
  local_140 = (uint)*(ushort *)(param_2 + 0x10);
  local_138 = *(undefined8 *)(param_2 + 8);
  uVar3 = (ulonglong)*(ushort *)(param_2 + 0x12);
  if (uVar3 < 0x201) {
    if (uVar3 - 0xa1 < 2) {
LAB_00656507:
      local_13c = 0;
      goto LAB_0065651d;
    }
    if (uVar3 - 0xa4 < 2) {
LAB_00656513:
      local_13c = 1;
      goto LAB_0065651d;
    }
    uVar3 = uVar3 - 0xa7;
  }
  else {
    if (uVar3 - 0x201 < 2) goto LAB_00656507;
    if (uVar3 - 0x204 < 2) goto LAB_00656513;
    uVar3 = uVar3 - 0x207;
  }
  if (uVar3 < 2) {
    local_13c = 2;
  }
  else {
    local_13c = 0;
  }
LAB_0065651d:
  thunk_FUN_041b3841(local_130);
  uVar1 = FUN_007f99e0(local_130);
  local_13b = FUN_00647f40();
  local_13b = uVar1 | local_13b;
  uVar4 = FUN_0064fca0(param_3,0xb04b,0,&local_148);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  return 1;
}

