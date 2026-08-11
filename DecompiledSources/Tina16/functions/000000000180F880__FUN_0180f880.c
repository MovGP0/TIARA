/* Ghidra address: 0180f880 */
/* Ghidra symbol: FUN_0180f880 */


void FUN_0180f880(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  int local_2c;
  longlong local_28;
  char local_19;
  
  local_60 = auStack_88;
  local_50 = 0;
  local_28 = 0;
  local_48 = (longlong *)0x0;
  local_19 = '\0';
  lVar4 = (**(code **)(*param_3 + 0x118))(param_3);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*param_3 + 0x118))(param_3);
    local_28 = *(longlong *)(lVar4 + 0x2a8);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01814d40);
  if (cVar1 != '\0') {
    local_48 = param_1;
  }
  if (local_28 == 0) {
    local_28 = FUN_01810fa0(&DAT_018103d8,1,0);
    uVar5 = (**(code **)(*param_3 + 0x118))(param_3);
    *(undefined8 *)(local_28 + 0x18) = uVar5;
    local_19 = '\x01';
  }
  cVar1 = FUN_01953b80(param_3);
  if ((cVar1 != '\0') && (local_48 == (longlong *)0x0)) {
    FUN_004b1e70(param_1);
  }
  iVar2 = FUN_01803a10();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = FUN_01953b80(param_3);
      if ((cVar1 == '\0') || (local_48 == (longlong *)0x0)) {
LAB_0180fa3b:
        local_38 = (longlong *)FUN_004b1ca0(param_1);
        lVar4 = FUN_018039f0(param_2,local_2c);
        FUN_018113d0(local_28,*(undefined8 *)(lVar4 + 0x30),local_38);
        if (local_48 != (longlong *)0x0) {
          local_40 = local_38;
          cVar1 = (**(code **)(*local_38 + 0x58))(local_38);
          if (cVar1 != '\0') {
            uVar5 = FUN_018039f0(param_2,local_2c);
            FUN_01803cc0(uVar5,&local_50,&DAT_0180fb6c);
            if (local_50 != 0) {
              uVar3 = FUN_0043fc00(local_50);
              *(undefined4 *)(local_40 + 3) = uVar3;
            }
          }
        }
      }
      else {
        uVar5 = FUN_018039f0(param_2,local_2c);
        FUN_01803cc0(uVar5,&local_50,L"InheritedName");
        if (local_50 == 0) goto LAB_0180fa3b;
        local_40 = (longlong *)(**(code **)(*local_48 + 0x60))(local_48,local_50);
        if (local_40 != (longlong *)0x0) {
          lVar4 = FUN_018039f0(param_2,local_2c);
          FUN_018113d0(local_28,*(undefined8 *)(lVar4 + 0x30),local_40);
          *(undefined1 *)((longlong)local_40 + 0x1c) = 1;
        }
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_19 != '\0') {
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_50);
  return;
}

