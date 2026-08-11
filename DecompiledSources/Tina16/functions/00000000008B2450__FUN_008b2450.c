/* Ghidra address: 008b2450 */
/* Ghidra symbol: FUN_008b2450 */


undefined8 FUN_008b2450(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  FUN_00419430(param_2,&DAT_0086e978);
  iVar5 = 0;
  puVar2 = &DAT_01e267c0;
  do {
    *(undefined4 *)((longlong)param_1 + (longlong)iVar5 * 4 + 0x10) = *puVar2;
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + 1;
    lVar4 = param_4;
  } while (iVar5 != 4);
  while (0x3f < lVar4) {
    iVar5 = FUN_00878880(param_3,param_1 + 1,0x40,0);
    (**(code **)(*param_1 + 0x38))(param_1);
    bVar6 = SBORROW8(lVar4,(longlong)iVar5);
    lVar4 = lVar4 - iVar5;
    if (bVar6) {
      FUN_00410ab0();
    }
  }
  iVar1 = FUN_00878880(param_3,param_1 + 1,lVar4,0);
  *(undefined1 *)(param_1[1] + (longlong)iVar1) = 0x80;
  iVar5 = iVar1 + 1;
  if (SCARRY4(iVar1,1)) {
    iVar5 = FUN_00410ab0();
  }
  if (0x38 < iVar5) {
    if (iVar5 < 0x40) {
      do {
        *(undefined1 *)(param_1[1] + (longlong)iVar5) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x40);
    }
    (**(code **)(*param_1 + 0x38))(param_1);
    iVar5 = 0;
  }
  if (iVar5 < 0x38) {
    do {
      *(undefined1 *)(param_1[1] + (longlong)iVar5) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x38);
  }
  uVar3 = param_4 * 8;
  if (SEXT816((longlong)uVar3) != SEXT816(param_4) * SEXT816(8)) {
    uVar3 = FUN_00410ab0();
  }
  iVar5 = 0x38;
  do {
    *(char *)(param_1[1] + (longlong)iVar5) = (char)uVar3;
    uVar3 = uVar3 >> 8;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x40);
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00419260(param_2,&DAT_0086e978,1,0x10);
  iVar5 = 0;
  do {
    uVar3 = (longlong)iVar5 * 4;
    if ((longlong)(int)uVar3 != uVar3) {
      FUN_00410ab0(*(undefined4 *)((longlong)param_1 + (longlong)iVar5 * 4 + 0x10),param_2,
                   uVar3 & 0xffffffff);
    }
    FUN_00874e90();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  return param_2;
}

