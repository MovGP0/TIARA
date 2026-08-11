/* Ghidra address: 004d6940 */
/* Ghidra symbol: FUN_004d6940 */


void FUN_004d6940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_005391d0(local_20,lVar1,lVar2 + -1);
  lVar1 = 0;
  if (local_20[0] != 0) {
    lVar1 = *(longlong *)(local_20[0] + -8);
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + 0x38;
  }
  (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x58),lVar2,local_20[0],lVar1 + -1);
  FUN_00419430(local_20,&DAT_004d96d8);
  return;
}

