/* Ghidra address: 00a9cf70 */
/* Ghidra symbol: FUN_00a9cf70 */


longlong FUN_00a9cf70(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  bool bVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00ac54b0(local_res8,0,param_3,param_4);
  local_20 = local_res8 + 0x510;
  local_28 = local_res8 + 0x450;
  FUN_00409a70(param_4 + 0x450,local_res8 + 0x450,(longlong)(((int)local_20 - (int)local_28) + 1));
  uVar2 = FUN_00a9b6e0(&PTR_FUN_00a86440,1,local_res8,*(undefined8 *)(param_4 + 0xa8));
  *(undefined8 *)(local_res8 + 0xa8) = uVar2;
  uVar2 = FUN_00610d40(&PTR_FUN_00a7f480,1,0);
  *(undefined8 *)(local_res8 + 0x530) = uVar2;
  if ((*(longlong *)(param_4 + 0x440) != 0) &&
     (*(char *)(*(longlong *)(local_res8 + 0x18) + 0xb0) != '\0')) {
    uVar2 = FUN_00a952f0(&PTR_FUN_00a83768,1,*(undefined8 *)(local_res8 + 0xa8),
                         *(longlong *)(param_4 + 0x440));
    *(undefined8 *)(local_res8 + 0x440) = uVar2;
  }
  FUN_00418240(local_res8 + 0xb0,param_4 + 0xb0,&DAT_004013d8,0x26);
  uVar3 = (undefined7)((ulonglong)local_res8 >> 8);
  if (*(byte *)(local_res8 + 0x60) < 8) {
    bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(local_res8 + 0x60) & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    if (*(byte *)(local_res8 + 0x4c) < 8) {
      bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(local_res8 + 0x4c) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_00a9d12a;
  }
  uVar2 = FUN_00a73ab0(&DAT_00a6ae68,1);
  *(undefined8 *)(local_res8 + 0x550) = uVar2;
  *(undefined8 *)(*(longlong *)(local_res8 + 0xa8) + 0x38) = uVar2;
LAB_00a9d12a:
  FUN_00414ad0(local_res8 + 0x448,*(undefined8 *)(param_4 + 0x448));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

