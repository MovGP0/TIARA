/* Ghidra address: 014020d0 */
/* Ghidra symbol: FUN_014020d0 */


void FUN_014020d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_28);
  FUN_013fcc20(local_20,local_28);
  FUN_013fd8c0(local_20[0],uVar1,
               *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438),
               *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) + 0x438),
               *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),
               *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2770));
  FUN_00410f20(uVar1);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

