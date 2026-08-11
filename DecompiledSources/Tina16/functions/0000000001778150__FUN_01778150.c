/* Ghidra address: 01778150 */
/* Ghidra symbol: FUN_01778150 */


void FUN_01778150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x80))
            (*(longlong **)(param_1 + 0xd0),local_res10[0],param_3);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  FUN_01602e30(L"FMixedMode: TVerilogAMSSubCkt.AddADDAToNetList called, FMixedMode set to True",1);
  FUN_00414480(local_res10);
  return;
}

