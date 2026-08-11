/* Ghidra address: 017960f0 */
/* Ghidra symbol: FUN_017960f0 */


void FUN_017960f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong local_res10;
  longlong *local_res18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_4c [48];
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_80 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00417580(local_4c,&DAT_01d2e6d8);
  if (local_res10 != 0) {
    FUN_00441920(&local_88,local_res10);
    FUN_004414c0(&local_60,local_88,0);
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10,0x20);
    local_a8 = 0;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,0x40);
    if ((local_10 != 0) && (iVar2 = FUN_01d31a40(local_10), iVar2 == 0)) {
      FUN_01d317c0(local_10,local_4c);
      cVar1 = FUN_01796000(auStack_c8,local_4c);
      if (cVar1 != '\0') {
        FUN_01794150(param_1,local_res18);
        if (0 < local_1c) {
          FUN_01d30e90(local_10,&local_68);
          if (local_68._2_2_ != 0) {
            FUN_01d30f00(local_10,&local_69,1);
          }
        }
        while( true ) {
          cVar1 = FUN_01d31040(local_10,0x301);
          if (cVar1 == '\0') break;
          local_58 = FUN_01d331a0(&LAB_00c3a6d0,1,local_10);
          FUN_0043e130(&local_90,local_60);
          FUN_00414ad0(local_58 + 0x20,local_90);
          (**(code **)(*local_res18 + 0x80))(local_res18,*(undefined8 *)(local_58 + 0x10),local_58);
        }
        FUN_004b67b0(local_res18,local_69);
      }
      FUN_01d31a40(local_10);
    }
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
  }
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_60);
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  FUN_00414480(&local_res10);
  return;
}

