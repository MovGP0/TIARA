/* Ghidra address: 00664a20 */
/* Ghidra symbol: FUN_00664a20 */


void FUN_00664a20(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_30[0] = *param_2;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_30,&local_34);
  if (local_34 == 0x12) {
    FUN_00414480(param_4);
  }
  else if (lVar1 != 0) {
    if (local_34 < 0x20) {
      bVar2 = (1 << ((byte)local_34 & 0x1f) & 0x100004U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_0064d000(lVar1,&local_44);
      (**(code **)*param_1)(param_1,lVar1,&local_44);
      local_44 = *(int *)(lVar1 + 0x90) * 2 - local_44;
      local_40 = *(int *)(lVar1 + 0x94) * 2 - local_40;
      local_3c = *(int *)(lVar1 + 0x98) * -2 + local_3c * 3 + local_44 * -2;
      local_38 = *(int *)(lVar1 + 0x9c) * -2 + local_38 * 3 + local_40 * -2;
      FUN_0064dd90(lVar1,&local_50);
      FUN_00414ad0(param_4,local_50);
      *param_3 = CONCAT44(local_40,local_44);
      param_3[1] = CONCAT44(local_38,local_3c);
    }
  }
  FUN_00414480(&local_50);
  return;
}

