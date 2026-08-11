/* Ghidra address: 01088e80 */
/* Ghidra symbol: FUN_01088e80 */


undefined1 FUN_01088e80(longlong param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_4c;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_01086170(param_1,&local_30);
  uVar4 = FUN_0107a3c0(param_1,local_30);
  *param_3 = 0;
  if (*(int *)(param_1 + 0xad8) == 2) {
    local_39 = FUN_010af960(uVar4,param_2);
  }
  else {
    FUN_01086170(param_1,&local_28);
    cVar2 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
    local_4c = param_2;
    bVar1 = false;
    if (cVar2 != '\0') {
      cVar2 = FUN_010b1580(*(undefined8 *)(param_1 + 0xac8),local_28,L".ino",local_20);
      bVar1 = false;
      if (cVar2 != '\0') {
        plVar5 = (longlong *)FUN_010af3b0(local_20[0]);
        iVar3 = (**(code **)(*plVar5 + 0xb0))(plVar5,L"#include \"Arduino.h\"");
        if (iVar3 == -1) {
          local_4c = param_2 + 1;
        }
        bVar1 = true;
      }
    }
    FUN_01055960(&local_28);
    if (bVar1) {
      FUN_00441920(&local_38,local_28);
      FUN_00414b50(&local_28,local_38);
    }
    uVar4 = FUN_00442620(param_1 + 0xc08,local_28);
    local_39 = _Debug_PossibleBreakpoint(*(undefined8 *)(param_1 + 0xb28),uVar4,local_4c,param_3);
  }
  FUN_00414560(&local_38,3);
  return local_39;
}

