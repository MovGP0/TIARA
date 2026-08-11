/* Ghidra address: 012f7fc0 */
/* Ghidra symbol: FUN_012f7fc0 */


void FUN_012f7fc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
  if (0 < iVar2) {
    lVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    if (lVar3 != 0) {
      uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      FUN_013056e0(param_1,0,uVar4);
    }
    FUN_012fc960(param_1,0);
    cVar1 = FUN_01303bc0(param_1);
    if (cVar1 != '\0') {
      FUN_01302300(param_1);
      FUN_00805990(param_1);
      FUN_012f3470(*(undefined8 *)(param_1 + 0xaa8),0);
    }
  }
  return;
}

