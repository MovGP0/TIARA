/* Ghidra address: 009dc0f0 */
/* Ghidra symbol: FUN_009dc0f0 */


undefined4 FUN_009dc0f0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_38 = auStack_58;
  local_28 = 0;
  *param_2 = 0;
  FUN_00414480(param_2);
  local_20 = (longlong *)FUN_009d4aa0(param_1);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0xb8))(local_20,0);
    FUN_00985740(local_20,0);
    uVar2 = FUN_009dab20(param_1);
    uVar3 = FUN_00414520(&local_28);
    cVar1 = (**(code **)(*local_20 + 0xe0))(local_20,uVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_004168b0(param_2,local_28);
    }
    FUN_00410f20(local_20);
  }
  local_30 = 0;
  FUN_00414520(&local_28);
  return local_30;
}

