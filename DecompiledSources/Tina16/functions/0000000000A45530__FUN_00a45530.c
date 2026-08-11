/* Ghidra address: 00a45530 */
/* Ghidra symbol: FUN_00a45530 */


void FUN_00a45530(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
  (**(code **)(*local_20 + 0xc0))(local_20,*(undefined8 *)(param_1 + 0x88));
  if ((byte)*PTR_DAT_020026b8 < 9) {
    FUN_00a0bcb0(local_20,1);
    cVar1 = FUN_00a0b5e0(local_20);
    if ((cVar1 == '\0') && (*PTR_DAT_020026b8 == '\b')) {
      uVar2 = FUN_00608880(*(undefined8 *)PTR_DAT_020036e8);
      (**(code **)(*local_20 + 0x78))(local_20,uVar2);
    }
  }
  else {
    FUN_00a0bcb0(local_20,0);
  }
  uVar2 = FUN_009ec850(&PTR_FUN_009eb620,1,0);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))(*(longlong **)(param_1 + 0x60),local_20);
  *(undefined1 *)(param_1 + 0x90) = 0;
  FUN_00410f20(local_20);
  return;
}

