/* Ghidra address: 017707a0 */
/* Ghidra symbol: FUN_017707a0 */


char FUN_017707a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  char local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_29 = FUN_0176a580(param_1,param_2);
  if (local_29 == '\0') goto LAB_017708ae;
  if (local_29 == '\0') {
LAB_01770829:
    bVar5 = false;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),local_20);
    (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x38))(*(longlong **)(param_2 + 0xb0),&local_28);
    cVar3 = FUN_01b234f0(local_20[0],local_28);
    if (cVar3 == '\0') goto LAB_01770829;
    bVar5 = true;
  }
  if (bVar5) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = *(longlong *)(param_2 + 0x58);
    if (lVar1 == lVar2) {
      bVar5 = true;
    }
    else if ((lVar1 == 0) || (lVar2 == 0)) {
      bVar5 = false;
    }
    else {
      iVar4 = FUN_0043e420(lVar1,lVar2);
      bVar5 = iVar4 == 0;
    }
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) &&
     (cVar3 = FUN_01b23640(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0xa8),
                           0x3f847ae147ae147b), cVar3 != '\0')) {
    local_29 = '\x01';
  }
  else {
    local_29 = '\0';
  }
LAB_017708ae:
  FUN_00414560(&local_28,2);
  return local_29;
}

