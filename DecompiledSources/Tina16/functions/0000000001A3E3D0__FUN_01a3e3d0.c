/* Ghidra address: 01a3e3d0 */
/* Ghidra symbol: FUN_01a3e3d0 */


undefined4 FUN_01a3e3d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  longlong *local_20;
  
  local_90 = auStack_c8;
  local_98 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_2c = 0;
  FUN_00414ad0(param_2,L"no GPU detected");
  *(undefined8 *)(param_1 + 0x808) = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ba0(&local_68,*(undefined8 *)(param_1 + 0x830),L"test_gpu.py");
  FUN_01a3e910(param_1,local_68);
  local_a8 = L"diag_gpu.txt";
  FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3e7c8);
  cVar1 = FUN_00440a20(local_38,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_38);
  }
  FUN_01a3ed60(param_1);
  local_a8 = L"diag_gpu.txt";
  FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3e7c8);
  cVar1 = FUN_00440a20(local_40,1);
  if (cVar1 == '\0') {
    local_2c = 0;
  }
  else {
    (**(code **)(*local_20 + 0xd8))(local_20,local_40);
    iVar2 = (**(code **)(*local_20 + 0x28))(local_20);
    if (0 < iVar2) {
      (**(code **)(*local_20 + 0x18))(local_20,&local_98,0);
      FUN_00414ad0(param_2,local_98);
      iVar2 = FUN_00416db0(*param_2,L"NONE");
      if (iVar2 == 0) {
        local_2c = 0;
        FUN_00414ad0(param_2,L"no GPU detected");
      }
      else {
        iVar2 = FUN_004170c0(L"NVIDIA",*param_2,1);
        if (iVar2 < 1) {
          iVar2 = FUN_004170c0(&DAT_01a3e834,*param_2,1);
          if (iVar2 < 1) {
            iVar2 = FUN_004170c0(L"Intel",*param_2,1);
            if (iVar2 < 1) {
              local_2c = 0;
            }
            else {
              local_2c = 3;
            }
          }
          else {
            local_2c = 2;
          }
        }
        else {
          local_2c = 1;
        }
      }
    }
  }
  FUN_00410f20(local_20);
  if (*(longlong *)(param_1 + 0x808) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x808));
  }
  *(undefined8 *)(param_1 + 0x808) = 0;
  FUN_00414480(&local_98);
  FUN_00414560(&local_68,7);
  return local_2c;
}

