/* Ghidra address: 0080df20 */
/* Ghidra symbol: FUN_0080df20 */


void FUN_0080df20(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  char local_21;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  local_20 = FUN_0080de60(param_1);
  if ((*(char *)(param_1 + 0x108) != '\0') && (*(longlong *)(param_1 + 0xb0) == 0)) {
    FUN_0080e820(param_1);
  }
  FUN_00809630(&local_40,local_20);
  FUN_00648780(&local_38,local_40);
  FUN_0080e230(DAT_02012668,local_38);
  local_21 = '\x01';
  if (*(longlong *)(param_1 + 0x250) != 0) {
    (**(code **)(param_1 + 0x250))(*(undefined8 *)(param_1 + 600),param_1,&local_21);
  }
  if (local_21 != '\0') {
    if (*(int *)(param_1 + 0x17c) < 1) {
      FUN_0080ddd0(param_1);
    }
    else if (DAT_020126b0 == 0) {
      if (DAT_020126b8 == (code *)0x0) {
        DAT_020126b8 = FUN_0080dea0;
      }
      DAT_020126b0 = thunk_FUN_04176ccd(0,0,*(undefined4 *)(param_1 + 0x17c),DAT_020126b8);
      if (DAT_020126b0 == 0) {
        FUN_0080ddd0(param_1);
      }
    }
  }
  iVar2 = FUN_00427ab0();
  if (iVar2 == *(int *)PTR_DAT_02005bd8) {
    cVar1 = FUN_004d0700(0);
    if (cVar1 != '\0') {
      local_21 = '\0';
    }
  }
  if (local_21 != '\0') {
    thunk_FUN_0414c9e5();
  }
  FUN_00414560(&local_40,2);
  return;
}

