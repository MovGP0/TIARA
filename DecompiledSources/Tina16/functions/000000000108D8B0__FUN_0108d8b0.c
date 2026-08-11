/* Ghidra address: 0108d8b0 */
/* Ghidra symbol: FUN_0108d8b0 */


void FUN_0108d8b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined1 *local_20;
  longlong local_18;
  
  local_20 = auStack_78;
  uVar2 = FUN_007fc180(&PTR_FUN_0106cf58,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002e60 = uVar2;
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02002e60 + 0x2d0))(*(longlong **)PTR_DAT_02002e60);
  if (iVar1 == 1) {
    local_58 = L"Debug";
    local_50 = 1;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_01606940(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xac8),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02002e60 + 0x710),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02002e60 + 0x708));
    FUN_0107a0c0(param_1);
    local_18 = FUN_01081ce0(param_1);
    FUN_010792a0(param_1,local_18);
    if (local_18 != 0) {
      FUN_01085110(param_1,*(undefined8 *)(local_18 + 0x10),0xffffffff);
    }
    *(undefined1 *)(param_1 + 0x4d48) = 1;
    *(undefined1 *)(param_1 + 0xb51) = 0;
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002e60);
  return;
}

