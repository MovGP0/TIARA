/* Ghidra address: 0080e230 */
/* Ghidra symbol: FUN_0080e230 */


void FUN_0080e230(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 200),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 200,param_2);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      local_20 = (longlong *)FUN_006a9f50(&PTR_FUN_006a62a8,1,param_1);
      (**(code **)(*local_20 + 0x110))(local_20,param_2);
      pcVar2 = (code *)FUN_00411550(local_20,0xffef);
      (*pcVar2)(local_20);
      FUN_00410f20(local_20);
    }
    else {
      (**(code **)(param_1 + 0x240))(*(undefined8 *)(param_1 + 0x248),param_1);
    }
  }
  return;
}

