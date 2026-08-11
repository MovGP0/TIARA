/* Ghidra address: 01126790 */
/* Ghidra symbol: FUN_01126790 */


void FUN_01126790(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x808) + 0x538);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  if (param_2 == 1) {
    uVar3 = FUN_0111c5c0(&PTR_FUN_0111ab88,1,param_1);
    FUN_00c03380(*(undefined8 *)(param_1 + 0x808),uVar3);
  }
  else {
    uVar3 = FUN_01119b00(&PTR_FUN_01117868,1,param_1);
    FUN_00c03380(*(undefined8 *)(param_1 + 0x808),uVar3);
  }
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x808));
  }
  return;
}

