/* Ghidra address: 00c518a0 */
/* Ghidra symbol: FUN_00c518a0 */


void FUN_00c518a0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 200) == 0) {
    local_20 = (longlong *)FUN_006a9f50(&PTR_FUN_006a62a8,1,param_1);
    (**(code **)(*local_20 + 0x110))(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 200));
    pcVar1 = (code *)FUN_00411550(local_20,0xffef);
    (*pcVar1)(local_20);
    FUN_00410f20(local_20);
  }
  else {
    local_30 = auStack_58;
    (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0xd0),param_2);
  }
  return;
}

