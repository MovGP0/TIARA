/* Ghidra address: 010b13a0 */
/* Ghidra symbol: FUN_010b13a0 */


undefined1 FUN_010b13a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 unaff_RDI;
  int iVar6;
  undefined8 local_res10 [3];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_59 = 0;
  *param_3 = 0;
  if (((*(uint *)(param_1 + 0x48) & 2) == 0) ||
     (cVar1 = FUN_0160ba00(*(undefined4 *)(param_1 + 0x4c)), cVar1 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  FUN_0160b0b0(local_40,local_res10[0],uVar5);
  FUN_00414b50(local_res10,local_40[0]);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
      FUN_010af640(uVar3,&local_30,param_4);
      if ((char)uVar5 == '\0') {
        FUN_00441920(&local_48,local_30);
        FUN_00414b50(&local_30,local_48);
      }
      FUN_0043e130(&local_50,local_30);
      FUN_0043e130(&local_58,local_res10[0]);
      iVar2 = FUN_00416db0(local_50,local_58);
      if (iVar2 == 0) {
        *param_3 = uVar3;
        local_59 = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_59;
}

