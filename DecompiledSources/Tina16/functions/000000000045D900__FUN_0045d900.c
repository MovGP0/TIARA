/* Ghidra address: 0045d900 */
/* Ghidra symbol: FUN_0045d900 */


undefined4 FUN_0045d900(undefined8 param_1,int param_2,undefined8 param_3,short *param_4)

{
  ulonglong uVar1;
  undefined4 local_24;
  undefined8 local_20 [2];
  char local_9;
  
  local_20[0] = 0;
  if (param_2 == 0x400) {
    FUN_004167d0(local_20,param_1);
    uVar1 = FUN_0043ff60(local_20[0],&local_9);
    local_24 = *(undefined4 *)(&DAT_01dc40ec + (uVar1 & 0xff) * 4);
    *param_4 = -(ushort)(local_9 != '\0');
  }
  else {
    local_24 = 0x80004001;
  }
  FUN_00414480(local_20);
  return local_24;
}

