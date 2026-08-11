/* Ghidra address: 0179a870 */
/* Ghidra symbol: FUN_0179a870 */


longlong * FUN_0179a870(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_90;
  undefined4 local_7c;
  undefined1 local_78 [8];
  undefined8 local_70 [6];
  ushort local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_90 = auStack_c8;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_70,&DAT_01d2e6d8);
  local_20 = (longlong *)0x0;
  if (local_res10[0] != 0) {
    local_30 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0);
    local_a8 = 0;
    local_28 = FUN_01d30b30(&DAT_01d2e8e8,1,local_30,0x40);
    if ((local_28 != 0) && (iVar2 = FUN_01d31a40(local_28), iVar2 == 0)) {
      FUN_01d317c0(local_28,local_70);
      iVar2 = FUN_00416db0(local_70[0],L"Schematics Macro");
      if (iVar2 == 0) {
        local_7c = 0x108;
      }
      else {
        iVar2 = FUN_00416db0(local_70[0],L"Spice Macro");
        if (iVar2 == 0) {
          local_7c = 0x109;
        }
        else {
          iVar2 = FUN_00416db0(local_70[0],L"VHDL Macro");
          if (iVar2 != 0) {
            FUN_0179ab90(0,local_90);
            FUN_0179abb0(0,local_90);
            goto LAB_0179ab3a;
          }
          local_7c = 0x111;
        }
      }
      FUN_01d30fd0(local_28);
      cVar1 = FUN_01d31040(local_28,(undefined2)local_7c);
      if (cVar1 != '\0') {
        FUN_01d30e90(local_28,local_78);
        FUN_01d312f0(local_28,&local_38);
        FUN_01d312f0(local_28,&local_38);
        FUN_01d312f0(local_28,&local_38);
        FUN_01d312f0(local_28,&local_38);
        FUN_01d312f0(local_28,&local_38);
        FUN_01d30f00(local_28,&local_39,1);
        FUN_01d30f00(local_28,&local_3a,1);
        FUN_01d30f00(local_28,&local_3c,2);
        if (1 < local_3c) {
          local_20 = (longlong *)FUN_00c3d400(&LAB_00c3a6d0,1);
          (**(code **)(*local_20 + 0x30))(local_20,local_28,local_3c);
        }
      }
      FUN_01d31a40(local_28);
    }
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
  }
LAB_0179ab3a:
  FUN_00417740(local_70,&DAT_01d2e6d8);
  FUN_00414480(&local_38);
  FUN_00414480(local_res10);
  return local_20;
}

