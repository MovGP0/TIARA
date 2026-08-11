/* Ghidra address: 015fe500 */
/* Ghidra symbol: FUN_015fe500 */


void FUN_015fe500(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  lVar2 = (**(code **)*puVar1)(puVar1);
  if (0x7f < lVar2) {
    FUN_004b6dc0(puVar1,0);
    FUN_004b84c0(puVar1,param_2 + 0xc,4);
    FUN_01b20fc0(local_20,puVar1);
    FUN_00414bf0(param_2 + 0x18,local_20[0]);
    FUN_01b20fc0(&local_28,puVar1);
    FUN_00414bf0(param_2 + 0x10,local_28);
  }
  FUN_00414590(&local_28,2);
  return;
}

