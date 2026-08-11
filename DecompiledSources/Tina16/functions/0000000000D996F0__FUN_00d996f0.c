/* Ghidra address: 00d996f0 */
/* Ghidra symbol: FUN_00d996f0 */


undefined8 FUN_00d996f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_30 = 0;
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((int)uVar1 < 1) {
    FUN_00410ae0(**(undefined8 **)(param_1 + 0x68),&local_30);
    local_28 = local_30;
    local_20 = 0x11;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00777610,1,PTR_PTR_020032c0,&local_28,0);
    FUN_004134c0(uVar3);
  }
  else {
    if (uVar1 <= uVar1 - 1) {
      FUN_00594f90();
    }
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + (longlong)(int)(uVar1 - 1) * 8);
    local_38 = (**(code **)(lVar2 + 0x40))(lVar2,1,*(undefined8 *)(param_1 + 0x68));
  }
  FUN_00414480(&local_30);
  return local_38;
}

