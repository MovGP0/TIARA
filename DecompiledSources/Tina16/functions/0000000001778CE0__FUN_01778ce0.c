/* Ghidra address: 01778ce0 */
/* Ghidra symbol: FUN_01778ce0 */


void FUN_01778ce0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_50;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined8 local_38;
  char local_29;
  longlong *local_28 [3];
  
  local_50 = auStack_88;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01779060(param_1,local_28,&local_29);
  if (local_29 != '\0') {
    local_68 = L"serial.txt";
    FUN_00416cd0(&local_38,3,local_res18[0],&DAT_01778e94);
    (**(code **)(*local_28[0] + 0x100))(local_28[0],local_38);
    uVar2 = FUN_00442620(param_1 + 0x50,local_38);
    local_68 = (wchar_t *)local_40;
    _HTerm_ParseDataFile(param_2,uVar2,0,local_3c);
  }
  FUN_00410f20(local_28[0]);
  if (local_29 != '\0') {
    cVar1 = FUN_00440a20(local_38,1);
    if (cVar1 != '\0') {
      FUN_004412f0(local_38);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_res18);
  return;
}

