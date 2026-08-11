/* Ghidra address: 01702a20 */
/* Ghidra symbol: FUN_01702a20 */


void FUN_01702a20(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x720) + 0xa9) != '\0') {
    lVar3 = FUN_006e2530(*(longlong *)(param_1 + 0x720));
    if (lVar3 == 0) {
      uVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550));
      FUN_0043f750(&local_30,uVar2);
      FUN_00416ba0(&local_28,&DAT_01702b98,local_30);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_28);
    }
    else {
      uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
      iVar1 = FUN_006dd6f0(uVar4);
      FUN_0043f750(&local_18,iVar1 + 1);
      uVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550));
      FUN_0043f750(&local_20,uVar2);
      FUN_00416cd0(&local_10,3,local_18,&DAT_01702b88,local_20);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
    }
  }
  FUN_00414560(&local_30,5);
  return;
}

