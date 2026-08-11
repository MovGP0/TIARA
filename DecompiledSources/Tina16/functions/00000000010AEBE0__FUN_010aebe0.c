/* Ghidra address: 010aebe0 */
/* Ghidra symbol: FUN_010aebe0 */


undefined1 FUN_010aebe0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  if (iVar3 == 0) {
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
    if (iVar3 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),local_20)
      ;
      (**(code **)(**(longlong **)(param_2 + 0x20) + 0x38))
                (*(longlong **)(param_2 + 0x20),&local_28);
      cVar1 = FUN_01b234f0(local_20[0],local_28);
      if (cVar1 != '\0') {
        uVar2 = 1;
        goto LAB_010aec75;
      }
    }
  }
  uVar2 = 0;
LAB_010aec75:
  FUN_00414560(&local_28,2);
  return uVar2;
}

