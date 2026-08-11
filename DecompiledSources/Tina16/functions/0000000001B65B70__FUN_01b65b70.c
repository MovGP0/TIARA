/* Ghidra address: 01b65b70 */
/* Ghidra symbol: FUN_01b65b70 */


void FUN_01b65b70(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x870);
  lVar4 = FUN_004113f0(lVar1,&PTR_FUN_011061a0);
  if ((int)(uint)*(byte *)(lVar4 + 0x2a) < (int)(*(byte *)(lVar1 + 0x30) - 1)) {
    *(char *)(lVar4 + 0x2a) = *(char *)(lVar4 + 0x2a) + '\x01';
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    uVar5 = (ulonglong)uVar3;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x58))(*(longlong **)(param_1 + 0xda0),uVar5);
    uVar2 = *(short *)(lVar4 + 0x2e) - 0x60;
    if (uVar2 < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      FUN_010c0d70(lVar4 + 0x2a,lVar4 + 0x118,1,*(undefined1 *)(lVar4 + 0x30),0x3fb999999999999a);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa8))
                (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(lVar4 + 0x2a));
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x98))
                (*(longlong **)(param_1 + 0xda0),lVar4 + 0x2a,lVar4 + 0x118,1);
    }
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc58),*(undefined8 *)(lVar4 + 0x118));
  }
  return;
}

