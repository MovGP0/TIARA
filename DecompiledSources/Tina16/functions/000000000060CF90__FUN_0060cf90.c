/* Ghidra address: 0060cf90 */
/* Ghidra symbol: FUN_0060cf90 */


void FUN_0060cf90(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined1 local_16 [6];
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(local_20 + 0x10) == 0) {
    puVar1 = auStack_58;
    if (*(longlong *)(local_20 + 0x20) == 0) {
      FUN_005ffe70();
      puVar1 = local_30;
    }
    local_30 = puVar1;
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    lVar2 = FUN_0060ce20(param_1);
    if (lVar2 == DAT_02011fc8) {
      FUN_0040d200(local_16,6,0);
      FUN_004b89e0(local_10,local_16,6);
    }
    else {
      uVar3 = FUN_0060ce20(param_1);
      FUN_006019b0(local_10,uVar3,0);
    }
    *(undefined8 *)(local_20 + 0x10) = local_10;
  }
  return;
}

