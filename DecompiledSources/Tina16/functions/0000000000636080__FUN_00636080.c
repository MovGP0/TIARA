/* Ghidra address: 00636080 */
/* Ghidra symbol: FUN_00636080 */


void FUN_00636080(undefined8 param_1,undefined4 param_2,undefined4 param_3,LONG *param_4,
                 byte param_5)

{
  uint uVar1;
  uint uVar2;
  HDC hdc;
  undefined4 local_50;
  undefined4 local_4c;
  _TRIVERTEX local_48;
  LONG local_38;
  LONG local_34;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  uVar1 = FUN_005fbf20(param_2);
  uVar2 = FUN_005fbf20(param_3);
  local_48.x = *param_4;
  local_48.y = param_4[1];
  local_48.Red = (ushort)(byte)uVar1 << 8;
  local_48.Blue = (COLOR16)((uVar1 >> 0x10 & 0xff) << 8);
  local_48.Green = (ushort)(byte)(uVar1 >> 8) << 8;
  local_48.Alpha = 0;
  local_38 = param_4[2];
  local_34 = param_4[3];
  local_30 = (ushort)(byte)uVar2 << 8;
  local_2c = (undefined2)((uVar2 >> 0x10 & 0xff) << 8);
  local_2e = (ushort)(byte)(uVar2 >> 8) << 8;
  local_2a = 0;
  local_50 = 0;
  local_4c = 1;
  hdc = (HDC)FUN_005ffa40(param_1);
  GradientFill(hdc,&local_48,2,&local_50,1,*(ULONG *)(&DAT_01df5984 + (ulonglong)param_5 * 4));
  return;
}

