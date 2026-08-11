/* Ghidra address: 0136b8b0 */
/* Ghidra symbol: FUN_0136b8b0 */


undefined1 FUN_0136b8b0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)PTR_DAT_020037b0 != 0) {
    puVar2 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)(param_1 + 0x10),0);
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)PTR_DAT_020037b0 + 8),local_20);
    iVar1 = FUN_00416db0(*puVar2,local_20[0]);
    if ((iVar1 == 0) && (*(longlong *)PTR_DAT_02002418 == 0)) {
      FUN_013cd330(*(undefined8 *)PTR_DAT_02003ba0);
    }
  }
  FUN_00414480(local_20);
  return local_21;
}

