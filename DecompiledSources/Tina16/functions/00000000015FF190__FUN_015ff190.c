/* Ghidra address: 015ff190 */
/* Ghidra symbol: FUN_015ff190 */


char FUN_015ff190(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_a;
  
  local_20 = auStack_48;
  local_a = FUN_015fefb0(param_1,0x20019);
  if (local_a == '\0') {
    local_a = FUN_015fefb0(param_1,0x20119);
  }
  return local_a;
}

