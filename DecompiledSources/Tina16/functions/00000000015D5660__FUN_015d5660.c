/* Ghidra address: 015d5660 */
/* Ghidra symbol: FUN_015d5660 */


void FUN_015d5660(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_25f [61];
  undefined4 local_222;
  
  FUN_00417580(local_25f,&DAT_015b8318);
  FUN_015c3360(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
  cVar1 = FUN_015de790(param_1,local_25f);
  while (cVar1 != '\0') {
    lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
    *(undefined1 *)(lVar2 + 0x82) = 1;
    cVar1 = FUN_015deaa0(param_1,local_25f);
  }
  FUN_00417740(local_25f,&DAT_015b8318);
  return;
}

