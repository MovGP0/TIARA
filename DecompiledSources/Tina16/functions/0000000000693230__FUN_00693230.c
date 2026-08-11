/* Ghidra address: 00693230 */
/* Ghidra symbol: FUN_00693230 */


void FUN_00693230(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  FUN_00785c20(param_1,param_2);
  FUN_00786bc0(param_1,param_2);
  local_20 = CONCAT44((int)*(short *)(param_2 + 0x12),(int)*(short *)(param_2 + 0x10));
  cVar1 = *(char *)(param_1 + 100);
  FUN_00692750(param_1,local_30);
  cVar2 = FUN_00423210(local_30,&local_20);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  if (cVar1 != *(char *)(param_1 + 100)) {
    uVar3 = FUN_00786090(param_1);
    thunk_FUN_03a2fc9d(uVar3,local_30,0);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

