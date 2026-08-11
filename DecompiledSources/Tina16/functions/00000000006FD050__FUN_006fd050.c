/* Ghidra address: 006fd050 */
/* Ghidra symbol: FUN_006fd050 */


undefined1 FUN_006fd050(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_21 = 0;
  local_20 = (longlong *)FUN_006fca50(*(undefined8 *)(param_1 + 0x40));
  do {
    cVar1 = FUN_006fad20(local_20);
    if (cVar1 == '\0') {
      if (local_20 == (longlong *)0x0) {
        return local_21;
      }
      (**(code **)(*local_20 + -0x20))(local_20,1);
      return local_21;
    }
    local_30 = FUN_006fad00(local_20);
  } while (*(char *)(local_30 + 0x33a) != '\x02');
  local_21 = 1;
  FUN_006fd0e0(0,local_40);
  return local_21;
}

