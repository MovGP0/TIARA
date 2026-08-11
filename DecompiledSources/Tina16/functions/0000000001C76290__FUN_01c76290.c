/* Ghidra address: 01c76290 */
/* Ghidra symbol: FUN_01c76290 */


void FUN_01c76290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_2f8 [32];
  ulonglong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  int local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  longlong *local_290;
  undefined8 local_288 [73];
  int local_3c;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_2a0 = auStack_2f8;
  local_2b0 = 0;
  local_2a8 = 0;
  local_288[0] = 0;
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_290 = (longlong *)FUN_007fc180(&PTR_FUN_01c49b28,1,0);
  FUN_01c4cc00(local_290,param_2,param_3);
  FUN_01c4b320(local_290,0);
  iVar1 = (**(code **)(*local_290 + 0x2d0))(local_290);
  if ((iVar1 == 1) &&
     (iVar1 = (**(code **)(*(longlong *)local_290[0xf3] + 0x28))((longlong *)local_290[0xf3]),
     0 < iVar1)) {
    iVar1 = (**(code **)(*(longlong *)local_290[0xf3] + 0x28))();
    local_2b4 = iVar1 + -1;
    local_3c = 0;
    if (-1 < local_2b4) {
      do {
        local_2b4 = iVar1;
        (**(code **)(*(longlong *)local_290[0xf3] + 0x18))
                  ((longlong *)local_290[0xf3],&local_2a8,local_3c);
        local_2d8 = 0;
        local_2d0 = 0;
        local_2c8 = 0;
        FUN_01c681b0(param_1,local_2a8,1,0);
        FUN_01c4c580(local_290,&local_38);
        uVar2 = FUN_019a4600();
        local_2d8 = local_2d8 & 0xffffffffffffff00;
        local_20 = FUN_01477fa0(&DAT_01476b38,1,uVar2);
        iVar1 = (**(code **)(*local_38 + 0x28))(local_38);
        if (0 < iVar1) {
          FUN_01479a90(local_20,local_38);
          local_2d8 = CONCAT71(local_2d8._1_7_,1);
          FUN_01478670(local_20,0,local_30);
        }
        FUN_00410f20(local_20);
        local_3c = local_3c + 1;
        local_2b4 = local_2b4 + -1;
        iVar1 = local_2b4;
      } while (local_2b4 != 0);
    }
    FUN_01c76fd0(param_1,0);
  }
  FUN_00410f20(local_290);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_2b0,2);
  FUN_00414480(local_288);
  return;
}

