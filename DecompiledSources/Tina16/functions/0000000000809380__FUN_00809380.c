/* Ghidra address: 00809380 */
/* Ghidra symbol: FUN_00809380 */


void FUN_00809380(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  cVar1 = FUN_00809300(auStack_48);
  if (cVar1 != '\0') {
    local_10 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_00809140(auStack_48,1);
    FUN_00809140(auStack_48,2);
    FUN_00809140(auStack_48,3);
    FUN_00809140(auStack_48,4);
    FUN_00809140(auStack_48,5);
    FUN_00410f20(local_10);
  }
  return;
}

