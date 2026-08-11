/* Ghidra address: 01b65a50 */
/* Ghidra symbol: FUN_01b65a50 */


void FUN_01b65a50(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
  if (*(char *)(lVar3 + 0x2a) != '\0') {
    *(char *)(lVar3 + 0x2a) = *(char *)(lVar3 + 0x2a) + -1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    uVar4 = (ulonglong)uVar2;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x58))(*(longlong **)(param_1 + 0xda0),uVar4);
    uVar1 = *(short *)(lVar3 + 0x2e) - 0x60;
    if (uVar1 < 8) {
      bVar5 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      FUN_010c0d70(lVar3 + 0x2a,lVar3 + 0x118,1,*(undefined1 *)(lVar3 + 0x30),0x3fb999999999999a);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa8))
                (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(lVar3 + 0x2a));
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x98))
                (*(longlong **)(param_1 + 0xda0),lVar3 + 0x2a,lVar3 + 0x118,1);
    }
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc58),*(undefined8 *)(lVar3 + 0x118));
  }
  return;
}

