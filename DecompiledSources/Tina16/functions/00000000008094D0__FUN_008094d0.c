/* Ghidra address: 008094d0 */
/* Ghidra symbol: FUN_008094d0 */


undefined8 FUN_008094d0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_80;
  undefined1 local_74 [23];
  undefined1 local_5d;
  undefined8 local_10;
  
  local_80 = auStack_b8;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    local_10 = thunk_FUN_040ef593(0);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x78))(*(longlong **)(param_1 + 0x78),L"Default")
    ;
    FUN_0040d200(local_74,0x5c,0);
    local_5d = 1;
    local_98 = 0;
    thunk_FUN_041a22d3(local_10,local_74,FUN_00807930,*(undefined8 *)(param_1 + 0x78));
    FUN_004b67b0(*(undefined8 *)(param_1 + 0x78),1);
    thunk_FUN_041a9b5c(0,local_10);
  }
  return *(undefined8 *)(param_1 + 0x78);
}

