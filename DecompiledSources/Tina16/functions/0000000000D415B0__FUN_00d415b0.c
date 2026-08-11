/* Ghidra address: 00d415b0 */
/* Ghidra symbol: FUN_00d415b0 */


void FUN_00d415b0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined1 local_74 [12];
  undefined1 local_68 [72];
  undefined8 local_20;
  
  local_80 = auStack_c8;
  if (*param_2 == 0xf) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      local_80 = auStack_c8;
      uVar3 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar3;
    }
    else {
      uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
      if (((uVar1 & 0x10) != 0x10) &&
         (uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18)), (uVar1 & 8) != 8)) {
        uVar3 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 6) = uVar3;
        return;
      }
      thunk_FUN_041804fe(*(undefined8 *)(param_1 + 8),local_68);
      local_20 = thunk_FUN_040ef593(*(undefined8 *)(param_1 + 8));
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 0x198))(plVar2,local_74,0x3d);
      uVar3 = FUN_00781840();
      FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_90);
      local_a8 = 0;
      local_a0 = 0;
      FUN_00778dc0(uVar3,local_20,local_74,local_90);
      thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 8),local_20);
      thunk_FUN_0416269d(*(undefined8 *)(param_1 + 8),local_68);
    }
  }
  else if (*param_2 == 0x14) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      local_80 = auStack_c8;
      uVar3 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar3;
    }
    else {
      param_2[6] = 1;
      param_2[7] = 0;
    }
  }
  else {
    local_80 = auStack_c8;
    FUN_007899d0(param_1,param_2);
  }
  return;
}

