/* Ghidra address: 0160bca0 */
/* Ghidra symbol: FUN_0160bca0 */


longlong FUN_0160bca0(undefined8 param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_10c8 [32];
  undefined4 local_10a8;
  longlong *local_10a0;
  undefined1 *local_1098;
  undefined8 local_1088;
  undefined1 *local_1080;
  undefined1 local_1070 [2048];
  undefined8 local_870;
  undefined1 local_864 [1026];
  undefined1 local_462 [922];
  undefined1 local_c8;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_c8 = 0;
  local_10c8[0] = 0;
  local_1080 = local_10c8;
  local_1088 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_870 = 0;
  FUN_01569f00(param_2,&local_50);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_20,local_50);
  local_58 = 0;
  cVar1 = FUN_0160e910(param_2 + 0x848);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*local_20 + 0x28))();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_1088,local_2c);
        FUN_00416ba0(&local_48,*(undefined8 *)(param_2 + 0x790),local_1088);
        cVar1 = FUN_00440a20(local_48,1);
        if (cVar1 != '\0') {
          FUN_004414c0(&local_870,local_48,L".dat");
          FUN_00442620(local_1070,local_870);
          _new_mcu_program(param_1,local_1070);
          uVar3 = FUN_00442620(local_462,local_48);
          uVar4 = FUN_00442620(local_864,*(undefined8 *)PTR_DAT_02005010);
          local_10a8 = *(undefined4 *)(param_2 + 0x848 + (longlong)local_2c * 4);
          local_10a0 = &local_58;
          local_1098 = local_60;
          _NewElfReaderSession(uVar3,0,uVar4,param_1);
          if ((param_3 != '\0') && (local_58 != 0)) {
            _FreeDebugReaderSession(param_1,local_58);
            local_58 = 0;
          }
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_28 = local_58;
    FUN_00410f20(local_20);
  }
  else {
    local_28 = 0;
    FUN_0160bf60(0,local_1080);
  }
  FUN_00414480(&local_1088);
  FUN_00414480(&local_870);
  FUN_00414560(&local_50,4);
  return local_28;
}

