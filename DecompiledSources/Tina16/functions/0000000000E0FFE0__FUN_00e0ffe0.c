/* Ghidra address: 00e0ffe0 */
/* Ghidra symbol: FUN_00e0ffe0 */


void FUN_00e0ffe0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_51;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*local_20 + 8))(local_20,param_3);
  FUN_00409a70(param_2,local_20[1],(longlong)param_3);
  FUN_004b84c0(local_20,local_38,4);
  if (local_38[0] != 2) {
    FUN_015fcf20(L"VHDL_COMP_Export_Version version mismatch",0,0,0);
  }
  FUN_004b84c0(local_20,&local_3c,4);
  local_38[1] = 0;
  iVar2 = local_3c;
  if (-1 < local_3c + -1) {
    do {
      FUN_00e01bc0(&local_28,local_20);
      FUN_004b84c0(local_20,&local_48,4);
      FUN_004b84c0(local_20,&local_40,4);
      FUN_004b84c0(local_20,&local_44,4);
      FUN_004b84c0(local_20,&local_51,1);
      FUN_00e01bc0(&local_30,local_20);
      local_50 = FUN_00e0f700(&DAT_00e0cda8,1);
      FUN_00416880(local_50 + 0x10,local_28);
      *(undefined4 *)(local_50 + 0x30) = local_48;
      FUN_015f7240(&local_68,local_48);
      FUN_00414ad0(local_50 + 0x18,local_68);
      FUN_00416880(local_50 + 0x20,local_30);
      FUN_00e0fd50(&local_70,local_40,local_44,local_51);
      FUN_00414ad0(local_50 + 0x28,local_70);
      lVar1 = FUN_00e106f0(param_1,*(undefined8 *)(local_50 + 0x10));
      if (lVar1 == 0) {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x818),local_50);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_70,2);
  FUN_00414590(&local_30,2);
  return;
}

