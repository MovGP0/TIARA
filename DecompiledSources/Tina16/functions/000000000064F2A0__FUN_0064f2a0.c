/* Ghidra address: 0064f2a0 */
/* Ghidra symbol: FUN_0064f2a0 */


void FUN_0064f2a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uStack_30;
  char local_29;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + 8);
  cVar3 = FUN_004113d0(uVar7,&PTR_FUN_00637e70);
  if ((DAT_02012308 != '\0') && (cVar3 == '\0')) {
    lVar4 = FUN_004113f0(uVar7,&PTR_FUN_00637a90);
    uVar7 = *(undefined8 *)(lVar4 + 0x50);
  }
  uVar5 = FUN_0064d3a0(param_1,lVar1);
  uStack_30 = (undefined4)(uVar5 >> 0x20);
  if (*(byte *)(param_2 + 8) < 3) {
    local_29 = '\x01';
    if (cVar3 == '\0') {
      pcVar6 = (code *)FUN_00411550(param_1,0xffde);
      (*pcVar6)(param_1,uVar7,uVar5 & 0xffffffff,uStack_30,*(undefined1 *)(param_2 + 8),&local_29);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      pcVar6 = (code *)FUN_00411550(uVar2,0xffc1);
      (*pcVar6)(uVar2,uVar7,uVar5 & 0xffffffff,uStack_30,*(undefined1 *)(param_2 + 8),&local_29);
    }
    *(longlong *)(param_2 + 0x18) = (longlong)local_29;
  }
  else if (*(byte *)(param_2 + 8) == 3) {
    if (cVar3 == '\0') {
      pcVar6 = (code *)FUN_00411550(param_1,0xffc9);
      (*pcVar6)(param_1,uVar7,uVar5 & 0xffffffff,uStack_30);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      pcVar6 = (code *)FUN_00411550(uVar2,0xffb2);
      (*pcVar6)(uVar2,uVar7,uVar5 & 0xffffffff,uStack_30);
    }
  }
  return;
}

