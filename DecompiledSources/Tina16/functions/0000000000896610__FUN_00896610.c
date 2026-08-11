/* Ghidra address: 00896610 */
/* Ghidra symbol: FUN_00896610 */


undefined8 FUN_00896610(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_0089b8c0(param_1);
  if (((int)param_2 < 0) || (*(uint *)(param_1 + 0x10) <= param_2)) {
    FUN_0041ddd0(&local_28,PTR_DAT_02001878);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00891c50,1,local_28);
    FUN_004134c0(uVar1);
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 0x18 + (longlong)(int)param_2 * 8);
  }
  FUN_0089b920(param_1);
  FUN_00414480(&local_28);
  return local_10;
}

