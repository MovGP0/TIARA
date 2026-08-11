/* Ghidra address: 009d6940 */
/* Ghidra symbol: FUN_009d6940 */


undefined4 FUN_009d6940(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_28 = auStack_48;
  local_18 = 0;
  *param_2 = 0;
  FUN_00414480(param_2);
  local_10 = (longlong *)FUN_009d4aa0(param_1);
  if (local_10 != (longlong *)0x0) {
    uVar2 = FUN_00414520(&local_18);
    cVar1 = (**(code **)(*local_10 + 0xe0))(local_10,*(undefined8 *)(param_1 + 0x18),uVar2);
    if (cVar1 == '\0') {
      FUN_00414480(param_2);
    }
    else {
      FUN_004168b0(param_2,local_18);
    }
    FUN_00410f20(local_10);
  }
  local_20 = 0;
  FUN_00414520(&local_18);
  return local_20;
}

