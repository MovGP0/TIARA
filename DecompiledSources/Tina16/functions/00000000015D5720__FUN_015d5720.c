/* Ghidra address: 015d5720 */
/* Ghidra symbol: FUN_015d5720 */


void FUN_015d5720(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res20;
  undefined1 local_25f [61];
  undefined4 local_222;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00417580(local_25f,&DAT_015b8318);
  FUN_015c3360(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
  cVar1 = FUN_015de7f0(param_1,param_2,local_25f,param_3,local_res20);
  while (cVar1 != '\0') {
    lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
    *(undefined1 *)(lVar2 + 0x82) = 1;
    cVar1 = FUN_015deaa0(param_1,local_25f);
  }
  FUN_00417740(local_25f,&DAT_015b8318);
  FUN_00414480(&local_res20);
  return;
}

