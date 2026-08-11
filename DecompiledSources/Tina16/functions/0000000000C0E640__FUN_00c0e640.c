/* Ghidra address: 00c0e640 */
/* Ghidra symbol: FUN_00c0e640 */


void FUN_00c0e640(longlong param_1,undefined1 param_2,undefined2 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char local_29;
  
  local_29 = '\0';
  iVar1 = FUN_00c0e550();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x650),iVar3);
      (**(code **)(lVar2 + 8))
                (*(undefined8 *)(lVar2 + 0x10),param_1,param_2,&local_29,param_3,param_4,param_5,
                 *(undefined8 *)(lVar2 + 0x18));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_29 != '\0') {
    *param_3 = 0;
  }
  return;
}

