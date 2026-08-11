/* Ghidra address: 0106a3d0 */
/* Ghidra symbol: FUN_0106a3d0 */


void FUN_0106a3d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000002);
  cVar1 = FUN_005eaa60(local_10,L"\\SOFTWARE\\Borland\\C++Builder");
  if (cVar1 != '\0') {
    FUN_005eb0d0(local_10,param_2);
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  return;
}

