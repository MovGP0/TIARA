/* Ghidra address: 019a42b0 */
/* Ghidra symbol: FUN_019a42b0 */


bool FUN_019a42b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  bool local_31;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_31 = false;
  if ((param_2 != (longlong *)0x0) && (param_2 != *(longlong **)(param_1 + 0x70))) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 != '\x04') {
      cVar1 = FUN_0198a580(param_2);
      if (cVar1 != '\x06') goto code_r0x019a4386;
    }
    (**(code **)(*param_2 + 0x288))(param_2,local_30);
    FUN_00b90780(local_20,local_30[0]);
    iVar2 = FUN_004170c0(&LAB_019a43e4,local_20[0],1);
    if (0 < iVar2) {
      FUN_00416dc0(local_20,local_20[0],1,iVar2 + -1);
    }
    iVar2 = FUN_00416db0(local_20[0],*(undefined8 *)(param_1 + 0x68));
    local_31 = iVar2 == 0;
  }
code_r0x019a4386:
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return local_31;
}

