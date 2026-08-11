/* Ghidra address: 01533570 */
/* Ghidra symbol: FUN_01533570 */


void FUN_01533570(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_0152fca0(param_1,2);
  cVar2 = FUN_01349310(2,0,*(undefined8 *)(param_1 + 0x1c28),0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1c7,0,0,0
                       ,0,0,0);
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x1c28);
    if (*(char *)(lVar1 + 0xe28) == '\0') {
      FUN_013d2f60(*(undefined8 *)(lVar1 + 0xe00),0,0);
    }
    else {
      FUN_013e5a30(*(undefined8 *)(lVar1 + 0xe00),*(undefined8 *)(lVar1 + 0xe10),0,0);
    }
  }
  FUN_0152fd80(param_1);
  return;
}

