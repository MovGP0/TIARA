/* Ghidra address: 004c8f60 */
/* Ghidra symbol: FUN_004c8f60 */


void FUN_004c8f60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined1 local_20;
  
  cVar1 = FUN_004c9a90(param_1,param_2);
  if (cVar1 == '\0') {
    local_20 = 0x11;
    local_28 = param_2;
    FUN_004c8e40(param_1,PTR_PTR_02001de8,&local_28,0);
  }
  return;
}

