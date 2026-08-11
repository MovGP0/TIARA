/* Ghidra address: 01bcca40 */
/* Ghidra symbol: FUN_01bcca40 */


void FUN_01bcca40(longlong param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  FUN_00ddf020(*(undefined8 *)(param_1 + 0x30),&local_30);
  FUN_00468340(&local_38,&local_30);
  FUN_0041b890(*(longlong *)(param_1 + 0x30) + 0x858,local_38,&DAT_01bccae8);
  FUN_0041b800(&local_38);
  FUN_00460ba0(&local_30);
  return;
}

