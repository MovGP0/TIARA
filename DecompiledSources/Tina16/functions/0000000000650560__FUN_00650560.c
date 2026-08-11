/* Ghidra address: 00650560 */
/* Ghidra symbol: FUN_00650560 */


void FUN_00650560(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  local_28 = FUN_006502d0;
  local_38 = FUN_006502f0;
  local_30 = param_1;
  local_20 = param_1;
  local_48 = FUN_00650310(auStack_68);
  (**(code **)(*param_2 + 8))(param_2,L"IsControl",&local_28,&local_38);
  local_28 = FUN_00652790;
  local_38 = FUN_006526f0;
  local_30 = param_1;
  local_20 = param_1;
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    cVar1 = FUN_00650350(auStack_68,0);
    if (cVar1 == '\0') goto LAB_00650604;
    local_48 = 1;
  }
  else {
LAB_00650604:
    local_48 = 0;
  }
  (**(code **)(*param_2 + 8))(param_2,L"ExplicitLeft",&local_28,&local_38);
  local_28 = FUN_00652750;
  local_38 = FUN_006526b0;
  local_30 = param_1;
  local_20 = param_1;
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    cVar1 = FUN_00650350(auStack_68,1);
    if (cVar1 == '\0') goto LAB_0065066f;
    local_48 = 1;
  }
  else {
LAB_0065066f:
    local_48 = 0;
  }
  (**(code **)(*param_2 + 8))(param_2,L"ExplicitTop",&local_28,&local_38);
  local_28 = FUN_00652710;
  local_38 = FUN_00652730;
  local_30 = param_1;
  local_20 = param_1;
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    cVar1 = FUN_00650350(auStack_68,2);
    if (cVar1 == '\0') goto LAB_006506da;
    local_48 = 1;
  }
  else {
LAB_006506da:
    local_48 = 0;
  }
  (**(code **)(*param_2 + 8))(param_2,L"ExplicitWidth",&local_28,&local_38);
  local_28 = FUN_00652770;
  local_38 = FUN_006526d0;
  local_30 = param_1;
  local_20 = param_1;
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    cVar1 = FUN_00650350(auStack_68,3);
    if (cVar1 != '\0') {
      local_48 = 1;
      goto LAB_0065074b;
    }
  }
  local_48 = 0;
LAB_0065074b:
  (**(code **)(*param_2 + 8))(param_2,L"ExplicitHeight",&local_28,&local_38);
  return;
}

