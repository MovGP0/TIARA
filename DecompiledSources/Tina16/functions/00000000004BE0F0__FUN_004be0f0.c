/* Ghidra address: 004be0f0 */
/* Ghidra symbol: FUN_004be0f0 */


void FUN_004be0f0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  bool local_51;
  longlong local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  code *local_30;
  longlong local_28;
  longlong local_20;
  
  local_60 = auStack_88;
  local_30 = (code *)*param_3;
  local_28 = param_3[1];
  local_40 = *param_4;
  uStack_38 = param_4[1];
  local_50 = *(longlong *)(param_1 + 0x100);
  if (param_2 == local_50) {
    local_51 = true;
    local_60 = auStack_88;
  }
  else if ((param_2 == 0) || (local_50 == 0)) {
    local_51 = false;
    local_60 = auStack_88;
  }
  else {
    iVar2 = FUN_0043e420(param_2,local_50);
    local_51 = iVar2 == 0;
  }
  if ((local_51 != false) && (local_30 != (code *)0x0)) {
    cVar1 = FUN_004c23c0(param_1);
    if (cVar1 != '\n') {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      FUN_004c25a0(param_1);
      *(undefined1 *)(param_1 + 0x110) = 1;
      FUN_004bdee0();
    }
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004bea90(param_1,&local_44,4);
    FUN_004b6e40(local_20,local_44);
    FUN_004bea90(param_1,*(undefined8 *)(local_20 + 8),local_44);
    *(undefined1 *)(param_1 + 0x110) = 1;
    (*local_30)(local_28,local_20);
    FUN_00410f20(local_20);
    FUN_00414480(param_1 + 0x100);
  }
  return;
}

