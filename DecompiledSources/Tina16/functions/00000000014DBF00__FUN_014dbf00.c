/* Ghidra address: 014dbf00 */
/* Ghidra symbol: FUN_014dbf00 */


void FUN_014dbf00(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar6;
  undefined4 local_58 [2];
  undefined2 local_50 [8];
  undefined4 *local_40;
  undefined4 local_34;
  double *local_30 [2];
  undefined4 *puVar5;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
  lVar3 = FUN_01d347d0(param_2,0);
  *local_30[0] = *(double *)(lVar3 + 0x28);
  *(undefined4 *)(local_30[0] + 2) = 0;
  local_50[0] = 0x5201;
  cVar1 = FUN_014db910(local_50,param_2,&local_40);
  if (cVar1 == '\0') {
    local_50[0] = 0x4301;
    cVar1 = FUN_014db910(local_50,param_2,&local_40);
    if (cVar1 == '\0') {
      local_50[0] = 0x4c01;
      puVar5 = param_2;
      cVar1 = FUN_014db910(local_50,param_2,&local_40);
      if (cVar1 == '\0') goto LAB_014dbfbf;
    }
  }
  *local_30[0] = *local_30[0] * *(double *)(local_40 + 10);
  puVar5 = local_40;
LAB_014dbfbf:
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((ushort)(sVar2 - 8U) < 8) {
    uVar4 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)(sVar2 - 8U) & 0x1f);
    puVar5 = (undefined4 *)(ulonglong)uVar4;
    bVar6 = (uVar4 & 0xe) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar2 == 9) {
      local_34 = 3;
    }
    else {
      local_34 = 4;
    }
    FUN_014dba30(param_1,param_2,&local_34);
    local_58[0] = 0x31435403;
    FUN_014db9b0(param_1,local_58,param_2,&local_34);
    local_58[0] = 0x32435403;
    puVar5 = local_58;
    FUN_014db9b0(param_1,puVar5,param_2,&local_34);
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar2 == 9) {
      local_58[0] = 0x45435403;
      puVar5 = local_58;
      FUN_014db9b0(param_1,puVar5,param_2,&local_34);
    }
  }
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((ushort)(sVar2 - 8U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)(sVar2 - 8U) & 0x1f) & 0xcU)
            != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    (**(code **)(*param_1 + 0x2d0))(param_1,2,local_30);
    cVar1 = FUN_014db910(&DAT_014dc12c,param_2,&local_40);
    if (cVar1 == '\0') {
      *(undefined1 *)(local_30[0] + 1) = 1;
    }
    else {
      *local_30[0] = *(double *)(local_40 + 10);
      *(undefined1 *)(local_30[0] + 1) = 0;
    }
  }
  return;
}

