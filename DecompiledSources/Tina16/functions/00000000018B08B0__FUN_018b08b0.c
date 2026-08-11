/* Ghidra address: 018b08b0 */
/* Ghidra symbol: FUN_018b08b0 */


void FUN_018b08b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar2 = FUN_004b1ca0(param_1);
  FUN_00414ad0(lVar2 + 0x18,param_4);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x560);
  if (cVar1 == '\0') {
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x558);
  }
  else {
    *(char *)(lVar2 + 0x50) = cVar1;
  }
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  uVar3 = FUN_0196f540();
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  *(undefined1 *)(lVar2 + 0x58) = param_5;
  if ((local_res18[0] != 0) && (-1 < *(int *)(param_1 + 0x40))) {
    lVar4 = FUN_018b0ad0(param_1,*(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(lVar2 + 0x58) = *(undefined1 *)(lVar4 + 0x58);
  }
  FUN_00414ad0(lVar2 + 0x40,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

