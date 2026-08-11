/* Ghidra address: 0072dd30 */
/* Ghidra symbol: FUN_0072dd30 */


undefined4
FUN_0072dd30(undefined8 param_1,undefined8 param_2,byte param_3,ushort param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined8 param_8,byte param_9,char param_10,
            uint param_11)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined **local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong local_20;
  byte local_15;
  undefined4 local_14;
  longlong local_10;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  uVar4 = param_2;
  FUN_0080ab60(*(undefined8 *)PTR_DAT_02004030);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  local_10 = FUN_0072a840(&PTR_FUN_0072d838,uVar5,0);
  if (param_10 != '\0') {
    uVar5 = (ulonglong)param_11;
    FUN_0072b880(local_10,uVar5);
  }
  local_15 = 0;
  local_30 = &PTR_PTR_01e06878;
  local_38 = &DAT_01e06b54;
  do {
    if (local_15 < 0x10) {
      uVar3 = (int)CONCAT62((int6)(uVar5 >> 0x10),1) << (local_15 & 0x1f);
      uVar5 = (ulonglong)uVar3;
      bVar6 = ((ushort)uVar3 & param_4) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_20 = FUN_0072a5d0(*(undefined8 *)(local_10 + 0x80));
      FUN_0041ddd0(&local_48,*local_30);
      uVar5 = local_48;
      FUN_00729ff0(local_20,local_48);
      if (local_15 == param_9) {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        FUN_0072a050(local_20,uVar5);
      }
      *(undefined4 *)(local_20 + 0x2c) = *local_38;
    }
    local_15 = local_15 + 1;
    local_38 = local_38 + 1;
    local_30 = local_30 + 1;
  } while (local_15 != 0xc);
  if (param_3 == 4) {
    FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_50);
    FUN_00414ad0(local_10 + 0x88,local_50);
  }
  else {
    FUN_0041ddd0(local_10 + 0x88,(&PTR_PTR_01e06828)[param_3]);
  }
  *(undefined1 *)(local_10 + 0x90) = 0;
  if (param_10 == '\0') {
    cVar1 = FUN_0080b0e0(*(undefined8 *)PTR_DAT_02004030);
    if (cVar1 != '\0') {
      FUN_0072b880(local_10,*(uint *)(local_10 + 200) | 0x2000);
    }
  }
  *(undefined4 *)(local_10 + 0xe0) = param_5;
  FUN_00414ad0(local_10 + 0x1c8,param_8);
  FUN_0072b9b0(local_10,*(undefined4 *)(&DAT_01e06b40 + (ulonglong)param_3 * 4));
  local_28 = param_6;
  uStack_24 = param_7;
  *(ulonglong *)(local_10 + 0x1d8) = CONCAT44(param_7,param_6);
  FUN_0072ba20(local_10,param_2);
  FUN_0072ba80(local_10,param_1);
  local_14 = 0;
  pcVar2 = (code *)FUN_00411550(local_10,0xffe1);
  cVar1 = (*pcVar2)(local_10);
  if (cVar1 != '\0') {
    local_14 = *(undefined4 *)(local_10 + 0xe8);
  }
  FUN_00410f20(local_10);
  FUN_0080aba0(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414560(&local_50,2);
  return local_14;
}

