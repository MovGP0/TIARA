/* Ghidra address: 017ae270 */
/* Ghidra symbol: FUN_017ae270 */


longlong FUN_017ae270(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int *local_30;
  undefined8 local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  *(longlong *)(local_res8 + 8) = param_3;
  uVar4 = FUN_00498310(0,0);
  *(undefined8 *)(local_res8 + 0x14) = uVar4;
  *(undefined1 *)(local_res8 + 0x1c) = 0;
  if (param_3 != 0) {
    uVar4 = FUN_005ffa40(param_3);
    iVar3 = thunk_FUN_03e5bd07(uVar4,2);
    if (iVar3 == 1) {
      uVar2 = 1;
      goto LAB_017ae2fa;
    }
  }
  uVar2 = 0;
LAB_017ae2fa:
  *(undefined1 *)(local_res8 + 0x10) = uVar2;
  local_28 = thunk_FUN_040ef593(0);
  local_1c = thunk_FUN_03f3ed25(8,0x60,0x48);
  local_1c = -local_1c;
  thunk_FUN_041a9b5c(0,local_28);
  local_30 = (int *)(local_res8 + 0x20);
  *local_30 = local_1c;
  *(undefined4 *)(local_res8 + 0x24) = 0;
  *(undefined4 *)(local_res8 + 0x28) = 0;
  *(undefined4 *)(local_res8 + 0x2c) = 0;
  *(undefined4 *)(local_res8 + 0x30) = 300;
  *(undefined1 *)(local_res8 + 0x34) = 0;
  *(undefined1 *)(local_res8 + 0x35) = 0;
  *(undefined1 *)(local_res8 + 0x36) = 0;
  *(undefined1 *)(local_res8 + 0x37) = 1;
  *(undefined1 *)(local_res8 + 0x38) = 0;
  *(undefined1 *)(local_res8 + 0x39) = 0;
  *(undefined1 *)(local_res8 + 0x3a) = 0;
  *(undefined1 *)(local_res8 + 0x3b) = 0;
  FUN_00414ad0(local_res8 + 0x88,L"Arial");
  FUN_00442620(local_30 + 7,*(undefined8 *)(local_res8 + 0x88));
  *(undefined4 *)(local_res8 + 0x7c) = 8;
  *(undefined4 *)(local_res8 + 0x80) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

