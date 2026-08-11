/* Ghidra address: 00622210 */
/* Ghidra symbol: FUN_00622210 */


longlong FUN_00622210(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                     byte param_9)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  bool bVar5;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if ((*PTR_DAT_02002188 == '\0') && (param_9 == 0)) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)PTR_DAT_02002188 >> 8);
    uVar2 = 1;
  }
  *PTR_DAT_02002188 = uVar2;
  if (param_9 < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (param_9 & 0x1f) & 0xcU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    DAT_01df0ba8 = 0;
  }
  else if ((param_9 == 1) && (DAT_01df0ba8 != 0)) {
    DAT_01df0ba8 = 2;
  }
  uVar3 = FUN_006261a0();
  FUN_006212f0(uVar3,local_res8);
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  *(undefined8 *)(local_res8 + 0x18) = param_4;
  *(undefined8 *)(local_res8 + 0x20) = *param_5;
  *(undefined8 *)(local_res8 + 0x28) = param_5[1];
  FUN_00414ad0(local_res8 + 0x30,param_6);
  FUN_00414ad0(local_res8 + 0x38,param_7);
  *(undefined1 *)(local_res8 + 0x50) = param_8;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0x46000000000000c0;
  *(undefined1 *)(local_res8 + 100) = 1;
  *(byte *)(local_res8 + 0x66) = param_9;
  *(undefined4 *)(local_res8 + 0x60) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

