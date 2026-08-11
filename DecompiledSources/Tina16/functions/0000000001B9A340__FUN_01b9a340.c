/* Ghidra address: 01b9a340 */
/* Ghidra symbol: FUN_01b9a340 */


void FUN_01b9a340(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x508) != 1) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_10,0x83b);
    iVar2 = FUN_0072d440(local_10,0,3,0);
    if (iVar2 != 6) {
      uVar1 = 0;
      goto LAB_01b9a39e;
    }
  }
  uVar1 = 1;
LAB_01b9a39e:
  *param_3 = uVar1;
  FUN_00414480(&local_10);
  return;
}

