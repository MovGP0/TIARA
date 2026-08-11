/* Ghidra address: 01a842b0 */
/* Ghidra symbol: FUN_01a842b0 */


void FUN_01a842b0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_12;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  local_12 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  local_40 = 0;
  local_31 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_40);
  if (local_31 == '\x02') {
    FUN_015fca00(&local_28,0,0);
    local_68 = L"tcurve.txt";
    FUN_00416cd0(&local_20,3,local_28,&DAT_01a8450c);
    local_30 = FUN_01a83910(param_1,local_20);
    local_48 = (longlong *)FUN_007fc180(&PTR_FUN_01a66578,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_01a67160(local_48,local_28,local_30,*(undefined8 *)(param_1 + 0x1080));
    FUN_01a68960(local_48);
    iVar1 = (**(code **)(*local_48 + 0x2d0))(local_48);
    if (iVar1 == 1) {
      FUN_01a68fa0(local_48);
    }
    FUN_00410f20(local_48);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_12;
  }
  else {
    FUN_0041ddd0(&local_58,PTR_PTR_020030a8);
    FUN_0072d440(local_58,1,4,0);
    FUN_00410f20(local_40);
    FUN_01a844b0(0,local_50);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_28,2);
  return;
}

