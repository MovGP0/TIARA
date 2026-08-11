/* Ghidra address: 007809d0 */
/* Ghidra symbol: FUN_007809d0 */


void FUN_007809d0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = DAT_02012580;
  FUN_0041b510(FUN_007807a0,local_30);
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  if (iVar1 < 2) {
    iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
    if (0 < iVar1) {
      (**(code **)(*local_20 + 0x18))(local_20,&local_60,0);
      local_50 = local_60;
      local_48 = 0x11;
      local_78 = 0;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_020015f0,&local_50);
      FUN_004134c0(uVar2);
    }
  }
  else {
    FUN_004b37d0(local_20,&local_58);
    local_50 = local_58;
    local_48 = 0x11;
    local_78 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_020042e8,&local_50);
    FUN_004134c0(uVar2);
  }
  DAT_02012571 = 0;
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  return;
}

