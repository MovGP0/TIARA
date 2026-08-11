/* Ghidra address: 01a55000 */
/* Ghidra symbol: FUN_01a55000 */


void FUN_01a55000(undefined8 param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18;
  char local_res20;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_6c;
  int local_60;
  int local_5c;
  undefined8 local_58;
  longlong local_50 [6];
  longlong *local_20;
  
  local_80 = auStack_d8;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_50[4] = 0;
  local_50[3] = 0;
  local_50[2] = 0;
  local_50[1] = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00416ba0(local_50,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\");
  FUN_00416ba0(local_50 + 4,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\Design Tool");
  FUN_00416ba0(&local_88,local_50[4],L"\\*.tsc");
  local_20 = (longlong *)FUN_01603790(local_88,0x20);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_5c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,local_50 + 2,local_5c);
      local_60 = FUN_004170c0(local_50[0],local_50[2],1);
      local_6c = 0;
      if (local_50[0] != 0) {
        local_6c = *(int *)(local_50[0] + -4);
      }
      FUN_00416dc0(local_50 + 3,local_50[2],local_60 + local_6c,0x400);
      FUN_0043e1a0(&local_90,local_res18);
      FUN_0043e1a0(&local_98,local_50[2]);
      iVar2 = FUN_004170c0(local_90,local_98,1);
      if (0 < iVar2) {
        if (local_res20 != '\0') {
          local_b8 = &DAT_01a553f4;
          FUN_00416cd0(local_50 + 3,3,&DAT_01a553f4,local_50[3]);
        }
        (**(code **)(*local_20 + 0x18))(local_20,&local_a0,local_5c);
        FUN_00441920(&local_58,local_a0);
        local_b8 = (undefined *)CONCAT71(local_b8._1_7_,3);
        FUN_00450070(&local_a8,local_58,L".tsc",0);
        FUN_00414b50(&local_58,local_a8);
        (**(code **)(*param_2 + 0x78))(param_2,local_50[3]);
      }
      local_5c = local_5c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_a8,5);
  FUN_00414560(&local_58,6);
  FUN_00414480(&local_res18);
  return;
}

