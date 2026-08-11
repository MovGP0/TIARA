/* Ghidra address: 00a57400 */
/* Ghidra symbol: FUN_00a57400 */


void FUN_00a57400(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uVar6;
  undefined1 local_3c [20];
  undefined4 local_28;
  
  uVar6 = 0;
  uVar2 = FUN_00a55eb0(local_3c);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),8);
  do {
    bVar3 = (char)uVar5 - 0x10;
    if (bVar3 < 8) {
      uVar1 = (int)CONCAT71((int7)(uVar2 >> 8),1) << (bVar3 & 0x1f);
      uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x14) != 0);
    }
    else {
      uVar2 = 0;
    }
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_00a55f70(uVar5 & 0xffffffff,param_1,local_3c,in_stack_00000040,in_stack_00000028,
                           in_stack_00000030,uVar6);
    }
    cVar4 = (char)uVar5 + '\x01';
    uVar5 = CONCAT71((int7)(uVar5 >> 8),cVar4);
  } while (cVar4 != '.');
  *in_stack_00000038 = local_28;
  return;
}

