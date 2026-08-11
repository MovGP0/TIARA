/* Ghidra address: 0132dbe0 */
/* Ghidra symbol: FUN_0132dbe0 */


void FUN_0132dbe0(ushort *param_1,ushort param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint local_28 [2];
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (*param_1 <= param_2) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_18,0x132);
    local_28[0] = (uint)param_2;
    local_20 = 0;
    FUN_00442f70(&local_10,local_18,local_28,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    FUN_004134c0(uVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 4) + (ulonglong)((uint)param_2 * (uint)param_1[1]) * 8) =
       param_3;
  FUN_00414560(&local_18,2);
  return;
}

