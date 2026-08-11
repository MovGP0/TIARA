/* Ghidra address: 01a3ee70 */
/* Ghidra symbol: FUN_01a3ee70 */


undefined1 FUN_01a3ee70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  longlong *local_10;
  
  local_20 = auStack_48;
  local_11 = 1;
  FUN_00414480(param_2);
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a50fe0(param_1,L"ModelList",param_1 + 0x838);
  FUN_004b4b10(local_10,*(undefined8 *)(param_1 + 0x838));
  iVar1 = (**(code **)(*local_10 + 0x28))(local_10);
  if (iVar1 == 0) {
    FUN_00414ad0(param_2,L"No models found!");
    local_11 = 0;
    FUN_01a3ef20(0,local_20);
  }
  else {
    FUN_00410f20(local_10);
  }
  return local_11;
}

