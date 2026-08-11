/* Ghidra address: 01601490 */
/* Ghidra symbol: FUN_01601490 */


void FUN_01601490(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  int local_38;
  int local_34 [3];
  longlong local_28;
  longlong *local_20;
  
  local_80 = auStack_c8;
  local_88 = 0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_60 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
  local_28 = _XMC_GetInternalCurves(local_60,&local_3c);
  if ((param_1 != 0) && (local_28 != 0)) {
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8);
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*local_20 + 8))(local_20,local_3c);
    FUN_00409a70(local_28,local_20[1],(longlong)local_3c);
    FUN_004b84c0(local_20,local_34,4);
    local_34[2] = 0;
    iVar1 = local_34[0];
    if (-1 < local_34[0] + -1) {
      do {
        FUN_01b20fc0(&local_48,local_20);
        FUN_00416880(&local_88,local_48);
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 1;
        local_90 = 0;
        FUN_01cc2930(local_68,local_88,0,0);
        FUN_004b84c0(local_20,&local_38);
        local_34[1] = 0;
        iVar2 = local_38;
        if (-1 < local_38 + -1) {
          do {
            FUN_004b84c0(local_20,&local_50,8);
            FUN_004b84c0(local_20,&local_58);
            FUN_01cc4620(*(undefined8 *)(param_1 + 0xb0),local_50);
            FUN_01cc46b0(*(undefined8 *)(param_1 + 0xb0),0,local_58);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_88);
  FUN_004144d0(&local_48);
  return;
}

