/* Ghidra address: 01774280 */
/* Ghidra symbol: FUN_01774280 */


undefined8 FUN_01774280(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 *local_48;
  int local_38 [2];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28 [2];
  longlong *local_20;
  
  local_70 = auStack_98;
  FUN_00414480(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_48 = *(undefined8 **)(param_1 + 0xf8);
  lVar2 = (**(code **)*local_48)(local_48);
  if (0 < lVar2) {
    FUN_004b6dc0(local_48,0);
    FUN_004b84c0(local_48,local_2c,4);
    FUN_004b84c0(local_48,local_30,4);
    FUN_004b84c0(local_48,local_28,4);
    local_28[1] = 0;
    if (-1 < local_28[0] + -1) {
      do {
        FUN_004b84c0(local_48,local_38,4);
        lVar2 = FUN_004b6da0(local_48);
        FUN_004b6dc0(local_48,lVar2 + local_38[0]);
        local_28[0] = local_28[0] + -1;
      } while (local_28[0] != 0);
    }
    FUN_01b23340(local_48,local_20,1);
    iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
    if (iVar1 < 1) {
      FUN_00414480(param_2);
    }
    else {
      (**(code **)(*local_20 + 0x18))(local_20,param_2,0);
    }
    FUN_004b6dc0(local_48,0);
  }
  FUN_00410f20(local_20);
  return param_2;
}

