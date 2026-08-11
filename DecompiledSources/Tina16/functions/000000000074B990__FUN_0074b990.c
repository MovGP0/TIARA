/* Ghidra address: 0074b990 */
/* Ghidra symbol: FUN_0074b990 */


void FUN_0074b990(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x78));
  uVar1 = thunk_FUN_03dfb93b(uVar1,0,0x412);
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  if (*(char *)(param_1 + 0x378) == '\x03') {
    if (*(longlong *)(param_1 + 0x328) == 0) {
      uVar1 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
      *(undefined8 *)(param_1 + 0x328) = uVar1;
      cVar2 = FUN_00781870();
      if (cVar2 == '\0') {
        uVar1 = FUN_0060f4c0(0,0xffffff);
        FUN_005fda60(*(undefined8 *)(param_1 + 0x328),uVar1);
      }
      else {
        uVar1 = FUN_00777cd0();
        uVar3 = FUN_00779380(uVar1,0x19);
        uVar1 = FUN_0060f4c0(0,uVar3);
        FUN_005fda60(*(undefined8 *)(param_1 + 0x328),uVar1);
      }
    }
    uVar1 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x328));
    uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x340),uVar1);
    *(undefined8 *)(param_1 + 0x370) = uVar1;
  }
  return;
}

