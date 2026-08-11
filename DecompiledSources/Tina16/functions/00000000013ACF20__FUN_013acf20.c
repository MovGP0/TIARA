/* Ghidra address: 013acf20 */
/* Ghidra symbol: FUN_013acf20 */


void FUN_013acf20(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  *param_2 = 0;
  *param_3 = 0;
  FUN_00414480(param_2);
  FUN_00414480(param_3);
  if ((param_1 != 0) && (iVar3 = *(int *)(param_1 + 0x10) + -1, -1 < iVar3)) {
    do {
      lVar2 = FUN_00b94e60(param_1,iVar3);
      cVar1 = FUN_0198a580(lVar2);
      if (cVar1 == '\n') {
        FUN_004b4060(*(undefined8 *)(lVar2 + 0x28),&local_20,&DAT_013ad038);
        FUN_00414ad0(param_2,local_20);
        FUN_004b4060(*(undefined8 *)(lVar2 + 0x28),&local_28,&LAB_013ad04c);
        FUN_00414ad0(param_3,local_28);
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  FUN_00414560(&local_28,2);
  return;
}

