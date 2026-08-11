/* Ghidra address: 011774c0 */
/* Ghidra symbol: FUN_011774c0 */


undefined4 FUN_011774c0(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 local_res20;
  undefined4 local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414ad0(*param_2,local_res20);
  *(undefined2 *)(*param_2 + 8) = 0x43;
  *(undefined4 *)(*param_2 + 0x14) = 0xf;
  *(int *)(*param_2 + 0xc) = (*(int *)(*param_2 + 0x15e0) + *(int *)(*param_2 + 0x15e8)) / 2;
  *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x15e4) / 2;
  *(undefined4 *)(*param_2 + 0x18) = 2;
  FUN_00414b50(&local_10,L"Frequency (Hz)");
  FUN_00414ad0(*param_2 + 0x20,local_10);
  *(undefined2 *)(*param_2 + 0x28) = 0x43;
  *(undefined4 *)(*param_2 + 0x34) = 0xf;
  *(int *)(*param_2 + 0x2c) = (*(int *)(*param_2 + 0x15e0) + *(int *)(*param_2 + 0x15e8)) / 2;
  iVar2 = *(int *)PTR_DAT_02002270 * 2 + *(int *)(*param_2 + 0x15ec);
  uVar1 = (longlong)iVar2 % 3;
  *(int *)(*param_2 + 0x30) = iVar2 / 3;
  *(undefined4 *)(*param_2 + 0x38) = 1;
  if (param_3 == 0) {
    FUN_00414b50(&local_10,L"Gain");
    if (*(int *)(*param_1 + 0xdc) == 0) {
      FUN_00416ad0(&local_10,L" (dB)");
    }
    FUN_00414ad0(*param_2 + 0x40,local_10);
  }
  else {
    if (param_3 != 1) {
      local_1c = 4;
      goto LAB_011776e9;
    }
    FUN_00414b50(&local_10,L"Phase (deg)");
    FUN_00414ad0(*param_2 + 0x40,local_10);
  }
  *(undefined2 *)(*param_2 + 0x48) = 0x43;
  *(undefined4 *)(*param_2 + 0x54) = 0xf;
  uVar1 = (longlong)*(int *)(*param_2 + 0x15e0) % 4;
  *(int *)(*param_2 + 0x4c) = *(int *)(*param_2 + 0x15e0) / 4;
  *(undefined4 *)(*param_2 + 0x50) = *(undefined4 *)(*param_2 + 0x15e4);
  *(undefined4 *)(*param_2 + 0x58) = 1;
  local_1c = 0;
LAB_011776e9:
  FUN_00414480(&local_10,uVar1 & 0xffffffff);
  FUN_00414480(&local_res20);
  return local_1c;
}

