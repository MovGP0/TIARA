/* Ghidra address: 01533720 */
/* Ghidra symbol: FUN_01533720 */


void FUN_01533720(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FUN_0152fca0(param_1,0);
  uVar3 = 0;
  uVar4 = 0;
  cVar1 = FUN_01349310(0,2,*(undefined8 *)(param_1 + 0x1c28),0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1c7,0,0,0
                       ,0,0,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_0114dc00(0,*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe00),
                         *(undefined8 *)(PTR_DAT_02004010 + 0x823),PTR_DAT_02004010[0x819],
                         PTR_DAT_02004010[0x81a],PTR_DAT_02004010 + 1000,0,
                         uVar3 & 0xffffffff00000000,uVar4 & 0xffffffffffffff00);
    FUN_013d2f60(*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe00),0,0);
    FUN_013d99f0(uVar2,PTR_DAT_02004010[0x415],PTR_DAT_02004010[0x413],PTR_DAT_02004010[0x414],0);
  }
  FUN_0152fd80(param_1);
  return;
}

