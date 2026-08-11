/* Ghidra address: 012f8460 */
/* Ghidra symbol: FUN_012f8460 */


void FUN_012f8460(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_10;
  
  local_10 = 0;
  FUN_013020a0(param_1,&local_10,0);
  if (local_10 != 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_10);
    uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    FUN_01303240(param_1,4,0,uVar2);
    uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    FUN_01304bb0(param_1,uVar2);
    uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    FUN_013056e0(param_1,1,uVar2);
    iVar1 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
    if (iVar1 != 0) {
      uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      iVar1 = FUN_006dd6f0(uVar2);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
      iVar1 = FUN_012e6020(uVar2,0);
      if (iVar1 == 0) {
        uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        iVar1 = FUN_006dd6f0(uVar2);
        FUN_013060b0(param_1,0,iVar1 + -1,0);
      }
    }
  }
  FUN_00414480(&local_10);
  return;
}

