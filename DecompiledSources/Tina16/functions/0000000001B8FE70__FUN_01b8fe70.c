/* Ghidra address: 01b8fe70 */
/* Ghidra symbol: FUN_01b8fe70 */


void FUN_01b8fe70(longlong param_1)

{
  char cVar1;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined1 *local_440;
  longlong *local_438;
  char local_429;
  undefined8 local_428;
  undefined8 local_420 [129];
  undefined8 local_18;
  undefined8 local_10;
  
  local_440 = auStack_468;
  local_448 = 0;
  local_10 = 0;
  local_18 = 0;
  local_420[0] = 0;
  local_428 = 0;
  local_438 = *(longlong **)(param_1 + 0x700);
  local_429 = FUN_01b256f0(L"LT_ImportDir",&LAB_01b8fff0,local_420);
  if (local_429 != '\0') {
    FUN_00724420(local_438,local_420[0]);
  }
  cVar1 = (**(code **)(*local_438 + 0xa8))(local_438);
  if (cVar1 != '\0') {
    FUN_00724270(local_438,&local_448);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_448);
  }
  FUN_00414480(&local_448);
  FUN_00414560(&local_428,2);
  FUN_00414560(&local_18,2);
  return;
}

