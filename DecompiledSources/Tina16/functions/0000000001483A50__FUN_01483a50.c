/* Ghidra address: 01483a50 */
/* Ghidra symbol: FUN_01483a50 */


undefined8 FUN_01483a50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int local_48 [2];
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_30;
  int local_28;
  undefined1 local_20;
  
  iVar1 = FUN_0040c770(param_2);
  local_48[0] = iVar1 / 0xe10;
  local_28 = iVar1 % 0x3c;
  local_40 = 0;
  local_38 = (undefined4)
             ((longlong)
              ((ulonglong)(uint)((int)((longlong)iVar1 % 0xe10) >> 0x1f) << 0x20 |
              (longlong)iVar1 % 0xe10 & 0xffffffffU) / 0x3c);
  local_30 = 0;
  local_20 = 0;
  FUN_00442f70(param_1,L"%0.2d:%0.2d:%0.2d",local_48,2);
  return param_1;
}

