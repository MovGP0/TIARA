/* Ghidra address: 01b6bcd0 */
/* Ghidra symbol: FUN_01b6bcd0 */


void FUN_01b6bcd0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  bVar1 = (byte)param_2;
  uVar4 = CONCAT71((int7)(param_2 >> 8),bVar1 == 0x6c);
  FUN_0082a890(*(undefined8 *)(param_1 + 0x928),uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar1 == 0);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x928),uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar1 == 1);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x930),uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar1 == 2);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x940),uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar1 == 3);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x938),uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar1 == 4);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x948),uVar4);
  if (bVar1 < 0x10) {
    uVar3 = (undefined4)
            CONCAT71(7,((int)CONCAT62((int6)((ulonglong)uVar4 >> 0x10),1) << (bVar1 & 0x1f) & 0x7e0U
                       ) != 0);
  }
  else {
    uVar3 = 0;
  }
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x988),uVar3);
  param_2 = param_2 & 0xff;
  if (param_2 < 9) {
    if (param_2 == 8) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x988),&PTR_DAT_01b6bf18);
    }
    else if (param_2 == 5) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Freq");
    }
    else if (param_2 == 6) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x988),&PTR_DAT_01b6bef4);
    }
    else if (param_2 == 7) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x988),&DAT_01b6bf08);
    }
  }
  else if (param_2 == 9) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x988),&DAT_01b6bf2c);
  }
  else if (param_2 == 10) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Diode");
  }
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x9a0),bVar1 == 0xb);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x9a8),bVar1 == 0xc);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x998),bVar1 == 0xd);
  if (bVar1 != 0x6c) {
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x9d8),&PTR_FUN_010db178);
    if ((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x9d8) + 0x68) == '\0')) {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x9d8) >> 8),1);
      goto LAB_01b6bead;
    }
  }
  uVar3 = 0;
LAB_01b6bead:
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x128))(*(longlong **)(param_1 + 0x7c8),uVar3);
  return;
}

