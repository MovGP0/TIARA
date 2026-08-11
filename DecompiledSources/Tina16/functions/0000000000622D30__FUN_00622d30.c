/* Ghidra address: 00622d30 */
/* Ghidra symbol: FUN_00622d30 */


undefined4 FUN_00622d30(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_1c = 0;
  *param_2 = 0xc;
  puVar2 = auStack_58;
  if (*(char *)((longlong)param_1 + 0x65) == '\0') {
LAB_00622d8f:
    local_30 = puVar2;
    bVar1 = 1;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,&local_38);
    iVar4 = FUN_00416420(local_38,0);
    puVar2 = local_30;
    if (iVar4 != 0) goto LAB_00622d8f;
    bVar1 = 0;
  }
  param_2[1] = -(uint)bVar1;
  if (*(char *)((longlong)param_1 + 0x65) != '\0') {
    cVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar3 == '\0') {
      bVar1 = 0;
      goto LAB_00622dc5;
    }
  }
  bVar1 = 1;
LAB_00622dc5:
  param_2[2] = -(uint)bVar1;
  FUN_00414520(&local_38);
  return local_1c;
}

