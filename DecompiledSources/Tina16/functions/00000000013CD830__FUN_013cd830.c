/* Ghidra address: 013cd830 */
/* Ghidra symbol: FUN_013cd830 */


void FUN_013cd830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x848) + 0x538);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) == 1) {
    uVar3 = FUN_0111c5c0(&PTR_FUN_0111ab88,1,param_1);
    FUN_00c03380(*(undefined8 *)(param_1 + 0x848),uVar3);
  }
  else {
    uVar3 = FUN_01119b00(&PTR_FUN_01117868,1,param_1);
    FUN_00c03380(*(undefined8 *)(param_1 + 0x848),uVar3);
  }
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x848));
  }
  return;
}

