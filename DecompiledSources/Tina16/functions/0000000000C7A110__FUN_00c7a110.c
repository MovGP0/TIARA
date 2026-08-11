/* Ghidra address: 00c7a110 */
/* Ghidra symbol: FUN_00c7a110 */


undefined1 FUN_00c7a110(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_349;
  undefined8 local_340;
  undefined1 local_334 [524];
  undefined1 local_128 [280];
  
  local_340 = 0;
  local_349 = 0;
  uVar2 = FUN_00c7afb0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x58))
            (*(longlong **)(param_1 + 0x3a8),uVar2,0x8000,local_128);
  thunk_FUN_03cc613d(local_128,0,local_334,0x104);
  FUN_00416830(&local_340,local_334,0x106);
  iVar1 = FUN_00416db0(local_340,L"::{20D04FE0-3AEA-1069-A2D8-08002B30309D}");
  if (iVar1 == 0) {
    local_349 = 9;
  }
  iVar1 = FUN_00416db0(local_340,L"::{208D2C60-3AEA-1069-A2D7-08002B30309D}");
  if (iVar1 == 0) {
    local_349 = 0xc;
  }
  FUN_00414480(&local_340);
  return local_349;
}

