/* Ghidra address: 012f68c0 */
/* Ghidra symbol: FUN_012f68c0 */


void FUN_012f68c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_29 [9];
  
  uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_012fb490(param_1,uVar3);
  uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_013056e0(param_1,0,uVar3);
  lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  if (lVar4 != 0) {
    iVar2 = FUN_006dd6f0(param_3);
    if (-1 < iVar2 + -1) {
      iVar2 = FUN_006dd6f0(param_3);
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      cVar1 = FUN_012e5760(uVar3);
      if (cVar1 == '\0') {
        *param_4 = 0;
        local_29[0] = 0;
        FUN_01b1cf30(local_29,L"Invalid comparison range!");
      }
      iVar2 = FUN_006dd6f0(param_3);
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      FUN_012e5830(uVar3,0);
    }
  }
  return;
}

