/* Ghidra address: 01a880a0 */
/* Ghidra symbol: FUN_01a880a0 */


void FUN_01a880a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)PTR_DAT_020037b0 != 0)) &&
      (*(longlong *)PTR_DAT_02004e40 != 0)) && (*PTR_DAT_02003720 == '\0')) {
    puVar2 = (undefined8 *)
             FUN_01c988d0(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)(param_2 + 0x10));
    if (puVar2 != (undefined8 *)0x0) {
      FUN_01cc37d0(*(undefined8 *)(*(longlong *)PTR_DAT_020037b0 + 8),local_20);
      iVar1 = FUN_00416db0(local_20[0],*puVar2);
      if (iVar1 == 0) {
        FUN_01cc6030(*(undefined8 *)PTR_DAT_020037b0);
        *(undefined8 *)PTR_DAT_020037b0 = 0;
        FUN_01cc6030(*(undefined8 *)PTR_DAT_02005188);
        *(undefined8 *)PTR_DAT_02005188 = 0;
        FUN_01cc6030(*(undefined8 *)PTR_DAT_02004fb8);
        *(undefined8 *)PTR_DAT_02004fb8 = 0;
        if (*(longlong *)PTR_DAT_020038e8 != 0) {
          FUN_01cc6030(*(undefined8 *)PTR_DAT_020038e8);
        }
        *(undefined8 *)PTR_DAT_020038e8 = 0;
      }
    }
  }
  FUN_00414480(local_20);
  return;
}

