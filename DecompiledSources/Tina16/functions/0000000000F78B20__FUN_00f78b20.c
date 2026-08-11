/* Ghidra address: 00f78b20 */
/* Ghidra symbol: FUN_00f78b20 */


void FUN_00f78b20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_00442620(param_1 + 0xb2,local_res10[0]);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x10),uVar2);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))
              (*(longlong **)(param_1 + 0x18),local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

