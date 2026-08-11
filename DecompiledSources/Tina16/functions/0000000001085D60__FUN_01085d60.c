/* Ghidra address: 01085d60 */
/* Ghidra symbol: FUN_01085d60 */


int FUN_01085d60(longlong param_1,int param_2,undefined8 *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int local_54;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xad8) == 2) {
    local_44 = FUN_010b3530(*(undefined8 *)(param_1 + 0xac8),param_2,param_3);
  }
  else {
    local_54 = param_2;
    if (*(int *)(param_1 + 0xad8) == 4) {
      local_54 = param_2 * 2;
    }
    local_44 = _Debug_GetTraceLine(*(undefined8 *)(param_1 + 0xb28),local_54,&local_10,param_4);
    if (local_44 == 0) {
      local_44 = -1;
    }
    if (0 < local_44) {
      FUN_004167d0(&local_28,local_10);
      FUN_00441920(&local_20,local_28);
      FUN_00414ad0(param_3,local_20);
      cVar1 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
      if (cVar1 != '\0') {
        cVar1 = FUN_010b1580(*(undefined8 *)(param_1 + 0xac8),*param_3,L".ino",&local_18);
        if (cVar1 != '\0') {
          FUN_0043e1a0(&local_38,*param_3);
          FUN_00441a10(&local_30,local_38);
          iVar2 = FUN_00416db0(local_30,L".cpp");
          if (iVar2 == 0) {
            FUN_004414c0(&local_40,*param_3,L".ino");
            FUN_00414ad0(param_3,local_40);
            plVar3 = (longlong *)FUN_010af3b0(local_18);
            iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,L"#include \"Arduino.h\"");
            if (iVar2 == -1) {
              local_44 = local_44 + -1;
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_40,5);
  return local_44;
}

