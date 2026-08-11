/* Ghidra address: 015ea390 */
/* Ghidra symbol: FUN_015ea390 */


undefined1 FUN_015ea390(void)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_50 = auStack_78;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_11 = 0;
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_10,0xffffffff80000002);
  FUN_00414b50(&local_30,L"\\Software\\Microsoft\\VisualStudio");
  cVar1 = FUN_005ea880(local_10,local_30,0);
  if (cVar1 != '\0') {
    local_11 = 1;
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_30,3);
  return local_11;
}

