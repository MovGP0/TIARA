/* Ghidra address: 006f7c40 */
/* Ghidra symbol: FUN_006f7c40 */


void FUN_006f7c40(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    lVar4 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),param_2);
    local_60 = 0x15;
    local_40 = *(undefined4 *)(lVar4 + 0x30);
    local_50 = FUN_00416740(*(undefined8 *)(lVar4 + 0x20));
    bVar1 = *(byte *)(lVar4 + 0x18);
    iVar3 = FUN_004b1870(lVar4);
    if (iVar3 == 0) {
      local_5c = 0;
    }
    else {
      pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
      uVar6 = (*pcVar5)(param_1);
      local_5c = *(uint *)(&DAT_01e01544 + (ulonglong)bVar1 * 4 + (uVar6 & 0xff) * 0xc);
    }
    if (*(int *)(lVar4 + 0x30) == -1) {
      local_60 = local_60 & 0xffffffef;
    }
    else {
      local_5c = local_5c | 0x8800;
    }
    local_58 = *(int *)(lVar4 + 0x38);
    if (local_58 < 0) {
      uVar7 = FUN_0065b870(param_1);
      lVar8 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),param_2);
      thunk_FUN_041b2403(uVar7,0x1060,(longlong)*(int *)(lVar8 + 0x3c),&local_60);
      if (*(char *)(param_1 + 0x4a1) == '\x02') {
        uVar7 = FUN_0065b870(param_1);
        FUN_00611dc0(uVar7,0xffffffff,*(undefined4 *)(lVar4 + 0x38));
      }
      else if ((*(char *)(param_1 + 0x4a1) == '\x03') && (*(char *)(param_1 + 0x510) == '\0')) {
        uVar7 = FUN_0065b870(param_1);
        lVar8 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),param_2);
        FUN_00611dc0(uVar7,*(undefined4 *)(lVar8 + 0x3c),*(undefined4 *)(lVar4 + 0x38));
      }
    }
    else {
      local_60 = local_60 | 2;
      uVar7 = FUN_0065b870(param_1);
      lVar4 = FUN_006edb10(*(undefined8 *)(param_1 + 0x500),param_2);
      thunk_FUN_041b2403(uVar7,0x1060,(longlong)*(int *)(lVar4 + 0x3c),&local_60);
    }
  }
  return;
}

