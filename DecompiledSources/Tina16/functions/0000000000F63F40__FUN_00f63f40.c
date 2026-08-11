/* Ghidra address: 00f63f40 */
/* Ghidra symbol: FUN_00f63f40 */


void FUN_00f63f40(longlong param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined8 local_18;
  byte local_9;
  
  local_18 = 0;
  cVar1 = FUN_00f63cb0(param_1,param_4,param_5,&local_9);
  if (((cVar1 == '\0') || ((param_3 & 0x10) != 0)) || ((param_3 & 8) != 0)) {
    FUN_0064dfb0(*(undefined8 *)(param_1 + 8),0);
    FUN_00414480(*(longlong *)(param_1 + 8) + 0xf0);
  }
  else {
    FUN_00f62650(&local_18,local_9);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 8),1);
    FUN_00414ad0(*(longlong *)(param_1 + 8) + 0xf0,local_18);
  }
  FUN_00414480(&local_18);
  return;
}

