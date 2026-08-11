/* Ghidra address: 01822c20 */
/* Ghidra symbol: FUN_01822c20 */


char FUN_01822c20(longlong param_1,longlong param_2,undefined8 param_3)

{
  char local_29;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FUN_00417580(local_18,&DAT_0183db48);
  FUN_00417580(local_28,&DAT_0183db48);
  local_18[0] = *(undefined1 *)(param_1 + 0x48);
  FUN_00414b50(local_10,*(undefined8 *)(param_1 + 0x50));
  local_28[0] = *(undefined1 *)(param_2 + 0x48);
  FUN_00414b50(local_20,*(undefined8 *)(param_2 + 0x50));
  local_29 = FUN_01822980(local_18,local_28,param_3);
  if (((local_29 != '\0') && (*(char *)(param_1 + 0x48) == '\0')) &&
     (*(char *)(param_2 + 0x48) == '\x02')) {
    local_29 = '\0';
  }
  FUN_00417840(local_28,&DAT_0183db48,2);
  return local_29;
}

