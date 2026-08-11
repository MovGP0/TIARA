/* Ghidra address: 010c0760 */
/* Ghidra symbol: FUN_010c0760 */


undefined8 FUN_010c0760(undefined8 param_1,byte *param_2,char *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 *local_130;
  uint local_11c;
  byte local_118 [256];
  
  local_138 = 0;
  local_130 = auStack_158;
  pbVar4 = param_2;
  pbVar5 = local_118;
  for (lVar2 = (ulonglong)*param_2 + 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar5 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  }
  local_11c = (uint)local_118[0];
  while( true ) {
    if ((byte)(local_118[(int)local_11c] - 0x30) < 0x10) {
      uVar3 = (int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
              (local_118[(int)local_11c] - 0x30 & 0x1f);
      param_2 = (byte *)(ulonglong)uVar3;
      bVar6 = (uVar3 & 0x3ff) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) break;
    local_11c = local_11c - 1;
  }
  local_11c = local_11c + 1;
  FUN_004151b0(param_3,local_118,local_11c,(local_118[0] - local_11c) + 1);
  if (*param_3 == '\0') {
    *param_4 = 0xffffffff;
  }
  else {
    FUN_004169a0(&local_138,param_3);
    uVar1 = FUN_0043fc00(local_138);
    *param_4 = uVar1;
  }
  FUN_00415260(local_118,0xff,local_11c,(local_118[0] - local_11c) + 1);
  FUN_00414ff0(param_1,local_118);
  FUN_00414480(&local_138);
  return param_1;
}

