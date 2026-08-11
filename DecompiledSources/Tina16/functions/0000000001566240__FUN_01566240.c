/* Ghidra address: 01566240 */
/* Ghidra symbol: FUN_01566240 */


undefined8 FUN_01566240(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_017ff4f0(param_2,local_20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                    (*(longlong **)(param_1 + 0x10),local_20[0]);
  if (iVar1 < 0) {
    local_30 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),iVar1);
    local_30 = *(undefined8 *)(lVar2 + 0x10);
  }
  FUN_00414480(local_20);
  return local_30;
}

