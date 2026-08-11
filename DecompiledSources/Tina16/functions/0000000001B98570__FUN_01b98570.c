/* Ghidra address: 01b98570 */
/* Ghidra symbol: FUN_01b98570 */


void FUN_01b98570(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_10;
  
  local_10 = 0;
  lVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar3 != 0) {
    uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b95150(uVar4);
    if (cVar1 == '\0') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x810),0);
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_10,0x83c);
      iVar2 = FUN_0072d440(local_10,0,3,0);
      if (iVar2 == 6) {
        uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        FUN_01b984f0(param_1,uVar4);
      }
    }
  }
  FUN_00414480(&local_10);
  return;
}

