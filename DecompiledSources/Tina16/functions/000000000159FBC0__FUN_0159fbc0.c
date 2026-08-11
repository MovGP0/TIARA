/* Ghidra address: 0159fbc0 */
/* Ghidra symbol: FUN_0159fbc0 */


undefined8 FUN_0159fbc0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  undefined4 local_18;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((int)param_2 < 0) {
      local_18 = 0;
      local_res10 = -param_2;
    }
    else {
      local_18 = ((int)param_2 >> 4) + 1;
      local_res10 = param_2;
      if ((int)param_2 < 0x30) {
        local_res10 = param_2 & 0xf;
      }
    }
    if ((local_res10 == 0) || ((7 < (int)local_res10 && ((int)local_res10 < 0x10)))) {
      if ((*(longlong *)(lVar1 + 0x38) != 0) && (*(uint *)(lVar1 + 0x28) != local_res10)) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar1 + 0x38))
        ;
        *(undefined8 *)(lVar1 + 0x38) = 0;
      }
      *(int *)(lVar1 + 8) = local_18;
      *(uint *)(lVar1 + 0x28) = local_res10;
      uVar2 = FUN_0159fb50(param_1);
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

