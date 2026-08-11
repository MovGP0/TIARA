/* Ghidra address: 0184ec60 */
/* Ghidra symbol: FUN_0184ec60 */


void FUN_0184ec60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = (longlong *)FUN_0184cde0(param_1,local_res10[0]);
  if (plVar1 == (longlong *)0x0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
    (*pcVar2)(param_1,local_res10[0],L"Variant",param_3);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_3);
  }
  FUN_00414480(local_res10);
  return;
}

