/* Ghidra address: 015f5bc0 */
/* Ghidra symbol: FUN_015f5bc0 */


bool FUN_015f5bc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8 [4];
  bool local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_9 = false;
  cVar1 = FUN_01d3f210(param_2);
  if (cVar1 != '\0') {
    lVar3 = FUN_015f3320(local_res8[0],param_2);
    iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x28),L"TFLITETyp");
    local_9 = iVar2 == 0;
  }
  FUN_00414480(local_res8);
  return local_9;
}

