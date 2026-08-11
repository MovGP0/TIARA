/* Ghidra address: 0149b690 */
/* Ghidra symbol: FUN_0149b690 */


void FUN_0149b690(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res18 [2];
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_40;
  longlong local_38;
  
  local_40 = auStack_88;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(char *)(param_1 + 0xc0c) == '\0') {
    FUN_0149bc40(param_1);
  }
  else {
    local_38 = *(longlong *)(param_1 + 0xc00);
    FUN_013bb8d0(local_38,param_2);
    (**(code **)(**(longlong **)(local_38 + 200) + 0x90))(*(longlong **)(local_38 + 200));
    FUN_013bb8f0(local_38);
    local_68 = 60000;
    local_60 = 0;
    local_58 = 0;
    FUN_01054cd0(*(undefined8 *)(local_38 + 200),local_res18[0],*(undefined8 *)(local_38 + 0x108),1)
    ;
    FUN_013ba1e0(local_38);
    FUN_013bbba0(local_38,*(undefined8 *)(param_1 + 3000),10);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8c0) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(local_38 + 200));
    FUN_0149b8c0(param_1);
    cVar2 = FUN_013ba3e0(local_38);
    if (cVar2 != '\0') {
      FUN_01498900(param_1,1);
    }
    cVar2 = FUN_013b2e80(*(undefined8 *)(*(longlong *)(param_1 + 0xc00) + 0xc0));
    if (cVar2 != '\0') {
      FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
    }
  }
  FUN_00414480(local_res18);
  return;
}

