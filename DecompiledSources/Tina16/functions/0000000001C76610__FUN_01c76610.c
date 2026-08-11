/* Ghidra address: 01c76610 */
/* Ghidra symbol: FUN_01c76610 */


void FUN_01c76610(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_2f8 [32];
  ulonglong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  int local_2ac;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  longlong *local_288;
  undefined8 local_280 [73];
  int local_34;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_2a0 = auStack_2f8;
  local_2a8 = 0;
  local_280[0] = 0;
  local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_288 = (longlong *)FUN_007fc180(&PTR_FUN_01c49b28,1,0);
  iVar1 = (**(code **)(*local_288 + 0x2d0))(local_288);
  if ((iVar1 == 1) &&
     (iVar1 = (**(code **)(*(longlong *)local_288[0xf3] + 0x28))((longlong *)local_288[0xf3]),
     0 < iVar1)) {
    iVar1 = (**(code **)(*(longlong *)local_288[0xf3] + 0x28))();
    local_2ac = iVar1 + -1;
    local_34 = 0;
    if (-1 < local_2ac) {
      do {
        local_2ac = iVar1;
        (**(code **)(*(longlong *)local_288[0xf3] + 0x18))
                  ((longlong *)local_288[0xf3],&local_2a8,local_34);
        local_2d8 = 0;
        local_2d0 = 0;
        local_2c8 = 0;
        FUN_01c681b0(param_1,local_2a8,1,0);
        FUN_01c4c580(local_288,&local_30);
        uVar2 = FUN_019a4600();
        local_2d8 = local_2d8 & 0xffffffffffffff00;
        local_20 = FUN_01477fa0(&DAT_01476b38,1,uVar2);
        iVar1 = (**(code **)(*local_30 + 0x28))(local_30);
        if (0 < iVar1) {
          FUN_01479a90(local_20,local_30);
          local_2d8 = CONCAT71(local_2d8._1_7_,1);
          FUN_01478670(local_20,0,local_28);
        }
        FUN_00410f20(local_20);
        local_34 = local_34 + 1;
        local_2ac = local_2ac + -1;
        iVar1 = local_2ac;
      } while (local_2ac != 0);
    }
    FUN_01c76fd0(param_1,0);
  }
  FUN_00410f20(local_288);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_2a8);
  FUN_00414480(local_280);
  return;
}

