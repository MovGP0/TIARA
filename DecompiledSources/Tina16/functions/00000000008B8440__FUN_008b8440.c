/* Ghidra address: 008b8440 */
/* Ghidra symbol: FUN_008b8440 */


undefined8 FUN_008b8440(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02004918);
    local_28 = 0;
    local_30[0] = param_2;
    uVar2 = FUN_0044d530(&PTR_FUN_004347c0,1,local_20[0],local_30,0);
    FUN_004134c0(uVar2);
  }
  else {
    if (*(uint *)(lVar1 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  }
  FUN_00414480(local_20);
  return local_38;
}

