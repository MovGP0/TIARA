/* Ghidra address: 00b61900 */
/* Ghidra symbol: FUN_00b61900 */


undefined1 FUN_00b61900(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_21 = 0;
  local_20 = (longlong *)0x0;
  local_20 = (longlong *)FUN_00b17e60(&DAT_00b16888,1,1,param_2);
  local_30 = FUN_00b17d10(local_20[2],"Workbook");
  if (local_30 != 0) {
    local_21 = 8;
  }
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return local_21;
}

